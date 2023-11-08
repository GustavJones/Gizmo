cmake_minimum_required(VERSION 3.5)
project(Gizmo)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

if(WIN32)
    add_definitions(-DGIZMO_WINDOWS=true)
elseif(UNIX)
    set(CMAKE_POSITION_INDEPENDENT_CODE TRUE)
endif()

add_subdirectory(include/Gizmo/external/spdlog)

add_subdirectory(src/Gizmo)
add_subdirectory(src/Sandbox)