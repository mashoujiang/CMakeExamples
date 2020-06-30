cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DEX2" CACHE STRING "Set c++ compile flag")

project(compile_flags)

add_executable(compile_flags_example main.cpp)

target_compile_definitions(compile_flags_example 
    PRIVATE 
        EX3
)
