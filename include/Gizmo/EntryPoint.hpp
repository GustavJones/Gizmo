#pragma once
#include <string>
#include "Application.hpp"
#include "Log.hpp"

#if GIZMO_WINDOWS == true

extern Gizmo::Application *Gizmo::CreateApplication();

int main(int argc, char const *argv[])
{
    Gizmo::Log::Init();
    GIZMO_CORE_WARN("This is a warning from Gizmo");
    std::string a = "Hello World!";
    GIZMO_INFO("This is info from app Var={0}", a);

    auto app = Gizmo::CreateApplication();
    app->Run();
    delete app;

    return 0;
}

#else

extern Gizmo::Application *Gizmo::CreateApplication();

int main(int argc, char const *argv[])
{
    Gizmo::Log::Init();
    GIZMO_CORE_WARN("This is a warning from Gizmo");
    std::string a = "Hello World!";
    GIZMO_INFO("This is info from app Var={0}", a);

    auto app = Gizmo::CreateApplication();
    app->Run();
    delete app;

    return 0;
}

#endif