project(Sandbox)

file(GLOB Sandbox_SRC "*.cpp")
add_executable(Sandbox ${Sandbox_SRC})
target_include_directories(Sandbox PRIVATE ../../include)
target_link_libraries(Sandbox PRIVATE Gizmo)