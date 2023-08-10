cmake_minimum_required(VERSION 3.26)
set(THIS runAllTest)

set(SOURCES
        runAllTest.cpp
        RegisterTest.cpp
)
add_executable(${THIS} ${SOURCES})
target_link_libraries(${THIS} PUBLIC
        gtest_main
        core
        gtest
)
add_test(
        NAME ${THIS}
        COMMAND ${THIS}
)