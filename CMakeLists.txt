cmake_minimum_required(VERSION 3.26)
project(ActivityRegister)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC_SEARCH_PATHS /home/sk/CLionProjects/ActivityRegister/)

enable_testing()
add_subdirectory(test/lib/googletest)
include(GoogleTest)
set(HEADERS
        Activity.h
        Register.h
        qtregister.h
        qtactivity.h
)
set(SOURCES
        Activity.cpp
        Register.cpp
        main.cpp
        qtregister.cpp
        qtregister.ui
        qtactivity.cpp
        qtactivity.ui
)

add_library(ActivityRegister STATIC ${SOURCES} ${HEADERS})

add_subdirectory(test)


find_package(Qt6 COMPONENTS
        Widgets
        Core
        Gui
        REQUIRED)

target_link_libraries(ActivityRegister Qt6::Core Qt6::Gui Qt6::Widgets)

