cmake_minimum_required(VERSION 3.10)

project(third_party_include)

find_package(Boost 1.46.1 REQUIRED COMPONENTS filesystem system)

if(Boost_FOUND)
    message("boost found")
else()
    message(FATAL_ERROR "Cannot find Boost")
endif()

add_executable(third_party_include main.cpp)

target_link_libraries(third_party_include
    PRIVATE
        Boost::filesystem
)
