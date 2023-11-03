#pragma once
#include "Application.hpp"

#if GIZMO_WINDOWS == true

extern Gizmo::Application* Gizmo::CreateApplication();

int main(int argc, char const *argv[])
{
    auto app = Gizmo::CreateApplication();
    app->Run();
    delete app;
    return 0;
}

#endif