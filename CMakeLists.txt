cmake_minimum_required(VERSION 3.10)
project(templated_decorator)

set(CMAKE_CXX_STANDARD 11)

include_directories("${CMAKE_SOURCE_DIR}/src")


file(GLOB sources src/*.cpp src/*.h)
add_executable(templated_decorator ${sources})
