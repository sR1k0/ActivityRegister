cmake_minimum_required(VERSION 3.26)
project(Journal)
project(VERSION 0.1.0)
set(CMAKE_CXX_STANDARD 17)

add_executable(Journal main.cpp Activity.h)



find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)
target_link_libraries(Journal Qt6::Core Qt6::Gui Qt6::Widgets)

