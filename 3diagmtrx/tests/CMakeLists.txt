cmake_minimum_required(VERSION 3.10)



add_executable(tests main.cpp)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

target_link_libraries(tests 3diagmtrx gtest gtest_main)

add_test(NAME tests COMMAND main.cpp)
