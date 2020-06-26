cmake_minimum_required(VERSION 3.10)

project(hello_library)

add_library(hello_library SHARED
    src/Hello.cpp
)

add_library(hello::library ALIAS hello_library)

target_include_directories(hello_library
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)

add_executable(hello_binary
    src/main.cpp
)

target_link_libraries(hello_binary
    PRIVATE
        hello::library
)
