cmake_minimum_required(VERSION 3.0)

project(SLE)

enable_testing()

include_directories(src)

include_directories(googletest)

add_subdirectory(src)
add_subdirectory(tests)

add_subdirectory(googletest)
