cmake_minimum_required(VERSION 3.26)
project(ActivityRegister)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(test)

add_executable(ActivityRegister
        main.cpp
        Activity.h
        Register.h
        Register.cpp)


find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

target_link_libraries(ActivityRegister Qt6::Core Qt6::Gui Qt6::Widgets)

