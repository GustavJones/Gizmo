#pragma once
#include "Core.hpp"
#include <string>

namespace Gizmo
{
    class GIZMO_API Log
    {
    public:
        static const void StatusPrint(std::string msg);
        static const void WarningPrint(std::string msg);
        static const void ErrorPrint(std::string msg);
    };    
} // namespace Gizmo
