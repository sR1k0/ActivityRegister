cmake_minimum_required(VERSION 3.26)
project(ActivityRegister)

enable_testing()
find_package(GTest REQUIRED)
add_executable(runAllTest runAllTest.cpp RegisterTest.cpp)
target_link_libraries(runAllTest GTest::gtest_main GTest::gtest)
include(GoogleTest)
gtest_discover_tests(runAllTest)