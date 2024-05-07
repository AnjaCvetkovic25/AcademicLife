#pragma once

#include "core/system.h"
#include "core/core.h"

using namespace dagger;

namespace academic_life
{
    struct ControllerMapping
    {
        EDaggerKeyboard leftKey = EDaggerKeyboard::KeyA;
        EDaggerKeyboard rightKey = EDaggerKeyboard::KeyD;

        Vector2 input{ 0, 0 };
    };

    struct AcademicPlayer
    {
        Float32 horzSpeed;
    };

    class AcademicPlayerInputSystem
        : public System
    {
    public:
        inline String SystemName() { return "Academic Player Input System"; }

        void SpinUp() override;
        void WindDown() override;
        void Run() override;

    private:

        void OnKeyboardEvent(KeyboardEvent kEvent_);
    };
}