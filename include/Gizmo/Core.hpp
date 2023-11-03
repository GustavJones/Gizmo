#pragma once

#if GIZMO_WINDOWS == true // Windows
    #if GIZMO_BUILD_DLL == true
        #define GIZMO_API __declspec(dllexport)
    #else
        #define GIZMO_API __declspec(dllimport)
    #endif
#else
    #define GIZMO_API
#endif