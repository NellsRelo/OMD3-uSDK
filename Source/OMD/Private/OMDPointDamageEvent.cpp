#include "OMDPointDamageEvent.h"

FOMDPointDamageEvent::FOMDPointDamageEvent() {
    this->ChanceToGib = 0.00f;
    this->bIsHeadshot = false;
    this->DeathAnimation = EDeathAnimationCategory::None;
    this->bIgnoreTeams = false;
    this->bIsDOTDamage = false;
    this->ImpulseForceOnDeath = 0.00f;
}

