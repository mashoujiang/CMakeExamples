cmake_minimum_required(VERSION 3.10)

project(protobuf_example)

find_package(Protobuf REQUIRED)

if(PROTOBUF_FOUND)
    message("protobuf found")
else()
    message(FATAL_ERROR "Cannot find Protobuf")
endif()

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DGLIBCXX_USE_CXX11_ABI=0" CACHE STRING "Set glibc++ use c++11 ABI" FORCE)

PROTOBUF_GENERATE_CPP(PROTO_SRCS PROTO_HDRS AddressBook.proto)

message("PROTO_SRCS = ${PROTO_SRCS}")
message("PROTO_HDRS = ${PROTO_HDRS}")

add_executable(protobuf_example
    main.cpp
    ${PROTO_SRCS}
    ${PROTO_HDRS}
)

target_include_directories(protobuf_example
    PUBLIC
    ${PROTOBUF_INCLUDE_DIRS}
    ${CMAKE_CURRENT_BINARY_DIR}
)

target_link_libraries(protobuf_example
    PUBLIC
    ${PROTOBUF_LIBRARIES}
)

