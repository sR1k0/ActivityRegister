cmake_minimum_required(VERSION 3.26)
project(ActivityRegister)

set(CMAKE_CXX_STANDARD 17)

enable_testing()
add_subdirectory(test/lib/googletest)

set(HEADERS
        Activity.h
        Register.h
)
set(SOURCES
        Activity.cpp
        Register.cpp
        main.cpp
)
add_library(ActivityRegister STATIC ${SOURCES} ${HEADERS})

add_subdirectory(test)


find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

target_link_libraries(ActivityRegister Qt6::Core Qt6::Gui Qt6::Widgets)

