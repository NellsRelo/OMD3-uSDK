#include "OMDStatusEffectProto.h"

FOMDStatusEffectProto::FOMDStatusEffectProto() {
    this->VisualCategory = EStatusEffectCategory::None;
    this->bIsUnique = false;
    this->bIsPermanent = false;
    this->bIsHardCrowdControl = false;
    this->bCanGiveComboPoint = false;
    this->DeathAnimationCategory = EDeathAnimationCategory::None;
    this->DefaultDuration = 0.00f;
    this->MovementModValue = 0.00f;
    this->bContinuousDamage = false;
    this->DOTInterval = 0.00f;
    this->DamagePerTick = 0.00f;
    this->bContinuousMana = false;
    this->ManaInterval = 0.00f;
    this->ManaPerTick = 0.00f;
    this->AnimationWeight = 0;
    this->VFXWeight = 0;
    this->bUsesToggleID = false;
    this->ToggleID = EStatusEffectToggleID::None;
}

