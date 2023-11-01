project(GizmoLibrary)

file(GLOB ${PROJECT_NAME}_SRC "*.cpp")
add_library(Gizmo SHARED ${${PROJECT_NAME}_SRC})
target_include_directories(Gizmo PRIVATE ../../include/Gizmo)