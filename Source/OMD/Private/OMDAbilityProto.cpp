#include "OMDAbilityProto.h"

FOMDAbilityProto::FOMDAbilityProto() {
    this->CooldownTime = 0.00f;
    this->bInterruptable = false;
    this->bCanQueue = false;
    this->bAllowReActivation = false;
    this->bUseAmmo = false;
    this->ReloadTime = 0.00f;
    this->AmmoCapacity = 0;
    this->InstancingPolicy = EOMDAbilityInstancingPolicy::NonInstanced;
}

