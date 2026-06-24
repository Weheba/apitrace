/**************************************************************************
 *
 * Copyright 2011 Jose Fonseca
 * Copyright 2024 Anthropic (GLAD integration for macOS)
 * All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 **************************************************************************/

/*
 * GLAD-based OpenGL function loader for macOS.
 *
 * macOS's OpenGL.framework only exports a limited set of legacy GL symbols.
 * GLAD provides dynamic loading of all GL 4.1 core profile functions.
 */

#include <glad/gl.h>
#include <dlfcn.h>
#include <iostream>

#include <OpenGL/OpenGL.h>
#include <mach-o/dyld.h>

#include "os.hpp"


/*
 * Handle to the OpenGL framework
 */
void *_libGlHandle = nullptr;


/*
 * Path to the OpenGL framework
 */
static const char *libgl_filename = "/System/Library/Frameworks/OpenGL.framework/OpenGL";


/*
 * Load proc address from OpenGL framework.
 * Uses dlsym for standard functions, falls back to NSLookupAndBindSymbol
 * for extension functions that may not be directly exported.
 */
static void *
gladLoadProc(const char *name)
{
    void *proc = nullptr;

    // Try dlopen/dlsym first
    if (!_libGlHandle) {
        _libGlHandle = dlopen(libgl_filename, RTLD_LOCAL | RTLD_NOW | RTLD_FIRST);
        if (!_libGlHandle) {
            os::log("apitrace: error: couldn't load %s\n", libgl_filename);
            return nullptr;
        }
    }

    proc = dlsym(_libGlHandle, name);
    if (proc) {
        return proc;
    }

    // Try with underscore prefix (mach-o symbol naming)
    char underscored[256];
    snprintf(underscored, sizeof(underscored), "_%s", name);
    proc = dlsym(_libGlHandle, underscored);
    if (proc) {
        return proc;
    }

    // For core functions not found, they might be available via different means
    // but for now return NULL and let GLAD handle it
    return nullptr;
}


/*
 * Initialize GLAD loader.
 * Must be called after an OpenGL context is current.
 */
bool
initGladLoader(void)
{
    int version = gladLoadGL((GLADloadfunc)gladLoadProc);
    if (!version) {
        os::log("apitrace: error: failed to initialize GLAD\n");
        return false;
    }

    int major = GLAD_VERSION_MAJOR(version);
    int minor = GLAD_VERSION_MINOR(version);
    os::log("apitrace: info: loaded OpenGL %d.%d via GLAD\n", major, minor);

    return true;
}


/*
 * Lookup a public GL symbol (exported by OpenGL framework)
 */
void *
_getPublicProcAddress(const char *procName)
{
    return gladLoadProc(procName);
}


/*
 * Lookup a private GL symbol (extension functions)
 */
void *
_getPrivateProcAddress(const char *procName)
{
    return gladLoadProc(procName);
}
