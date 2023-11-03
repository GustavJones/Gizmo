#include "Log.hpp"
#include <iostream>

namespace Gizmo
{
    const void Log::StatusPrint(std::string msg)
    {
        std::cout << msg << '\n';
    }

    const void Log::WarningPrint(std::string msg)
    {
        std::cout << msg << '\n';
    }
    
    const void Log::ErrorPrint(std::string msg)
    {
        return void();
    }
} // namespace Gizmo
