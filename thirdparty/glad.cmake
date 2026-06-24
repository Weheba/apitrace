# GLAD - OpenGL Loader for macOS
# Generated with: glad --api gl:core=4.1 --out-path glad c

add_convenience_library (glad EXCLUDE_FROM_ALL
    glad/src/gl.c
)

target_include_directories (glad PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/glad/include
)

# Suppress warnings in generated code
if (CMAKE_C_COMPILER_ID MATCHES "Clang|GNU")
    target_compile_options (glad PRIVATE -w)
endif ()
