#pragma once

#ifdef GIZMO_LINUX
    #define GIZMO_API __attribute__((visibility("default")))
#endif

#ifdef GIZMO_WINDOWS
    #define GIZMO_API __declspec(dllexport)
#endif