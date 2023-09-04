cmake_minimum_required(VERSION 3.26)



find_package(Qt6 COMPONENTS Widgets)

set(THIS runAllTest)
set(SOURCES
        runAllTest.cpp
        FixtureTest.cpp
)
include_directories("${PROJECT_SOURCE_DIR}/cmake-build-debug/ActivityRegister_autogen/include/")


add_executable(${THIS} ${SOURCES} ../qtregister.h)

target_link_libraries(${THIS} PUBLIC
        gtest_main
        gtest
        Qt6::Widgets
)
add_test(
        NAME ${THIS}
        COMMAND ${THIS}
)
