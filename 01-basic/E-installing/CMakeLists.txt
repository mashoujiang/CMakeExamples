cmake_minimum_required(VERSION 3.10)

project(hello_example)

add_library(hello_example_inst_lib SHARED
    src/Hello.cpp
)

target_include_directories(hello_example_inst_lib
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)

add_executable(hello_example_inst_bin
    src/main.cpp
)

target_link_libraries(hello_example_inst_bin
    PRIVATE
        hello_example_inst_lib
)

install(TARGETS hello_example_inst_bin
    DESTINATION bin
)

install(TARGETS hello_example_inst_lib
    LIBRARY DESTINATION lib
)

install(DIRECTORY ${PROJECT_SOURCE_DIR}/include/
    DESTINATION include
)

install(FILES cmake-examples.conf
    DESTINATION etc
)


