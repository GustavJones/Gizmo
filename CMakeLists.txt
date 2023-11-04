cmake_minimum_required(VERSION 3.5)
project(Gizmo)

if(WIN32)
    add_definitions(-DGIZMO_WINDOWS=true)
endif()

add_subdirectory(include/Gizmo/external/spdlog)

add_subdirectory(src/Gizmo)
add_subdirectory(src/Sandbox)