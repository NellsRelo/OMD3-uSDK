#include "OMDCharacterMissionModifier.h"

FOMDCharacterMissionModifier::FOMDCharacterMissionModifier() {
    this->RiftPointsOverride = 0;
    this->BaseCoinOverride = 0;
    this->HealthModifier = 0.00f;
    this->MoveSpeedModifier = 0.00f;
    this->AttackDamageModifier = 0.00f;
    this->bUseRiftPointsOverride = false;
    this->bUseBaseCoinOverride = false;
    this->bUseHealthModifier = false;
    this->bUseMoveSpeedModifier = false;
    this->bUseAttackDamageModifier = false;
    this->bUsePickupModifier = false;
}

