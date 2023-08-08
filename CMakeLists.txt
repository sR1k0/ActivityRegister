cmake_minimum_required(VERSION 3.26)
project(ActivityRegister)
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(test)
set(SOURCE_FILES Activity.h Register.cpp Register.h)
add_executable(ActivityRegister main.cpp )
add_library(core ${SOURCE_FILES})
find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

target_link_libraries(ActivityRegister Qt6::Core Qt6::Gui Qt6::Widgets)

