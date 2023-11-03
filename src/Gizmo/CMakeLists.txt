project(Gizmo)

file(GLOB Gizmo_SRC "*.cpp")
add_library(Gizmo SHARED ${Gizmo_SRC})
target_include_directories(Gizmo PRIVATE ../../include/Gizmo)

target_compile_definitions(Gizmo PRIVATE GIZMO_BUILD_DLL=true)