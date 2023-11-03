#include "Sandbox/Sandbox.hpp"
#include "Gizmo/Application.hpp"

Sandbox::Sandbox(/* args */) : Gizmo::Application()
{
}

Sandbox::~Sandbox()
{
}

Gizmo::Application* Gizmo::CreateApplication()
{
    return new Sandbox();
}

#include "Gizmo/EntryPoint.hpp" // Include Entry Point