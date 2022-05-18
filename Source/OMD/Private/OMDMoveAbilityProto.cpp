#include "OMDMoveAbilityProto.h"

FOMDMoveAbilityProto::FOMDMoveAbilityProto() {
    this->MovementAbilityType = ECharacterMovementAbilities::None;
    this->ManaCostOnUse = 0.00f;
    this->ManaCostPerSecond = 0.00f;
    this->cooldown = 0.00f;
    this->bPreventsInteract = false;
}

