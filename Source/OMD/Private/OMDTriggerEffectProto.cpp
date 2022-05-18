#include "OMDTriggerEffectProto.h"

FOMDTriggerEffectProto::FOMDTriggerEffectProto() {
    this->Mode = EOMDTriggerEffectMode::Off;
    this->FeedbackPosition = 0;
    this->FeedbackStrength = 0;
    this->SlopeFeedbackStartStrength = 0;
    this->SlopeFeedbackEndStrength = 0;
    this->WeaponStrength = 0;
    this->VibrationPosition = 0;
    this->VibrationStrength = 0;
    this->VibrationFrequency = 0;
}

