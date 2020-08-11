cmake_minimum_required(VERSION 3.10)

project(cppcheck_analysis)

set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake/modules
                      ${CMAKE_MODULE_PATH})

add_subdirectory(subproject1)
add_subdirectory(subproject2)

set(CLANG_FORMAT_BIN_NAME clang-format-3.9)
set(CLANG_FORMAT_EXCLUDE_PATTERNS "build/" ${CMAKE_BINARY_DIR})

find_package(ClangFormat)
