project(LibGizmo)

if(WIN32)
    message(STATUS "Building from Windows")
    add_compile_definitions(GIZMO_WINDOWS)
elseif(UNIX)
    message(STATUS "Building from Linux")
    add_compile_definitions(GIZMO_LINUX)
endif()

file(GLOB ${PROJECT_NAME}_SRC "*.cpp")
add_library(Gizmo SHARED ${${PROJECT_NAME}_SRC})
target_include_directories(Gizmo PRIVATE ../../include/Gizmo)