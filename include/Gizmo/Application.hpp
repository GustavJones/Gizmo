#pragma once
#include "Core.hpp"

namespace Gizmo
{
    class GIZMO_API Application
    {
    private:
        /* data */
    public:
        Application(/* args */);
        virtual ~Application();

        void Run();
    };
} // namespace Gizmo
