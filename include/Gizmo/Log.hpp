#pragma once
#include "Core.hpp"
#include "spdlog/spdlog.h"
#include <string>
#include <memory>

namespace Gizmo
{
    class GIZMO_API Log
    {
    private:
        static std::shared_ptr<spdlog::logger> s_CoreLogger;
        static std::shared_ptr<spdlog::logger> s_ClientLogger;

    public:
        static void Init();
        inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
        inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
    };    
} // namespace Gizmo

// Core Logging macros
#define GIZMO_CORE_FATAL(...) Gizmo::Log::GetCoreLogger()->fatal(__VA_ARGS__)
#define GIZMO_CORE_ERROR(...) Gizmo::Log::GetCoreLogger()->error(__VA_ARGS__)
#define GIZMO_CORE_WARN(...) Gizmo::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define GIZMO_CORE_INFO(...) Gizmo::Log::GetCoreLogger()->info(__VA_ARGS__)
#define GIZMO_CORE_TRACE(...) Gizmo::Log::GetCoreLogger()->trace(__VA_ARGS__)

#define GIZMO_FATAL(...) Gizmo::Log::GetClientLogger()->fatal(__VA_ARGS__)
#define GIZMO_ERROR(...) Gizmo::Log::GetClientLogger()->error(__VA_ARGS__)
#define GIZMO_WARN(...) Gizmo::Log::GetClientLogger()->warn(__VA_ARGS__)
#define GIZMO_INFO(...) Gizmo::Log::GetClientLogger()->info(__VA_ARGS__)
#define GIZMO_TRACE(...) Gizmo::Log::GetClientLogger()->trace(__VA_ARGS__)