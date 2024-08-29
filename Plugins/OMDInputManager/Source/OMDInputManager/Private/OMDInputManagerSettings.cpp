#include "OMDInputManagerSettings.h"

UOMDInputManagerSettings::UOMDInputManagerSettings() {
    this->KeyboardSettings.AddDefaulted(3);
    this->GamepadSettings.AddDefaulted(75);
    this->GamepadMinMoveSpeedInput = 0.70f;
}


