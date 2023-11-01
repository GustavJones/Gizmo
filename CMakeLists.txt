cmake_minimum_required(VERSION 3.5)
project(Gizmo)

if(WIN32)
    add_definitions(-DGIZMO_WINDOWS)
elseif(UNIX AND NOT APPLE)
    add_definitions(-DGIZMO_LINUX)
endif()

add_subdirectory(src/Gizmo)