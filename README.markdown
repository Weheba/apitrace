dyld-interpose Branch (macOS)
=============================

Background
----------

On macOS 12+, apitrace's tracing and retracing broke because Apple moved the OpenGL framework into a pre-compiled dyld shared cache, breaking the symlink/dlsym tricks apitrace relied on ([Issue #826](https://github.com/apitrace/apitrace/issues/826), [Issue #662](https://github.com/apitrace/apitrace/issues/662)).

The maintainer created this `dyld-interpose` branch to use `DYLD_INSERT_LIBRARIES` for tracing instead. However, **glretrace remained broken** - it failed to compile and couldn't replay traces.

Our Fixes
---------

We fixed glretrace to compile and run on modern macOS:

- **GLAD integration**: Replaced broken `dlsym` OpenGL loading with GLAD loader - macOS no longer exposes GL symbols via dlsym
- **EXT→core function aliases**: macOS only exports core GL functions, not EXT variants. Added preprocessor aliases to redirect calls like `glGenFramebuffersEXT` → `glGenFramebuffers`
- **CGL drawable sizing**: Fixed window sizing during replay by tracking IOSurface dimensions from `CGLTexImageIOSurface2D` calls (windows were stuck at 32x32)
- **libpng update**: Updated from v1.6.38 to v1.6.50 to fix `TARGET_OS_MAC`/`fp.h` compilation error on modern macOS

Building
--------

```bash
mkdir build && cd build
cmake .. -DENABLE_GUI=ON -DCMAKE_PREFIX_PATH="/opt/homebrew/opt/qt@5"
cmake --build . -j8
```

Tracing in IntelliJ IDEA
------------------------

1. Edit your Run Configuration
2. Add environment variable: `DYLD_INSERT_LIBRARIES=/path/to/apitrace/build/wrappers/cgltrace.dylib`
3. Run the application - trace file will be created in the working directory

Using qapitrace
---------------

```bash
./build/qapitrace /path/to/trace.trace
```

Navigate calls with arrow keys, double-click to replay to that point and view rendered state.
NOTE WELL TESTED! Can be barely working.

---

About **apitrace**
==================

**apitrace** consists of a set of tools to:

* trace OpenGL, Direct3D, and DirectDraw APIs calls to a file;

* replay OpenGL and Direct3D calls from a file;

* inspect OpenGL and Direct3D state at any call while retracing;

* visualize and edit trace files.

See the [apitrace homepage](https://apitrace.github.io/) for more details.


Status
======

TL;DR: Apitrace is still being maintained, but the maintainer has very little
time to work on it, so patches/issues/requests are addressed if/as time permits.

Long version [here](https://jrfonseca.blogspot.co.uk/2016/10/apitrace-maintenance.html)


Obtaining **apitrace**
======================

To obtain apitrace either [download the latest
binaries](https://apitrace.github.io/#download) for your platform if available,
or follow [these instructions](docs/INSTALL.markdown) to build and install it
yourself.

On 64bits Linux and Windows platforms you'll need apitrace binaries that match
the architecture (32bits or 64bits) of the application being traced.


Usage
=====

Detailed usage instructions are available [here](docs/USAGE.markdown).
