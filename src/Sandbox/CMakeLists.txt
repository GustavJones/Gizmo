project(Sandbox)

file(GLOB Sandbox_SRC "*.cpp")
add_executable(Sandbox ${Sandbox_SRC})
target_include_directories(Sandbox PRIVATE ../../include ../../include/Gizmo/external/spdlog/include)
target_link_libraries(Sandbox PRIVATE Gizmo)