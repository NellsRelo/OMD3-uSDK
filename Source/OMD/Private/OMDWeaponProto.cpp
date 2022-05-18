#include "OMDWeaponProto.h"

FOMDWeaponProto::FOMDWeaponProto() {
    this->PrimaryAbilityCooldown = 0.00f;
    this->SecondaryAbilityCooldown = 0.00f;
    this->bAllowsHeadshots = false;
    this->HeadshotMultiplier = 0.00f;
    this->bAllowsTargeting = false;
    this->TargetingFOV = 0.00f;
    this->bAllowsAimAssist = false;
}

