cmake_minimum_required(VERSION 3.26)
project(ActivityRegister)
set(TEST_SOURCE_FILES runAllTests.cpp RegisterTest.cpp)

find_package(GTest REQUIRED)

add_executable(ActivityRegister ${TEST_SOURCE_FILES})

target_link_libraries(ActivityRegister gtest gtest_main core)