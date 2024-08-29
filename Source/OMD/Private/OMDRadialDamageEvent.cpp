#include "OMDRadialDamageEvent.h"

FOMDRadialDamageEvent::FOMDRadialDamageEvent() {
    this->ChanceToGib = 0.00f;
    this->DeathAnimation = EDeathAnimationCategory::None;
    this->ImpulseForceOnDeath = 0.00f;
    this->bIgnoreTeams = false;
    this->bIsDOTDamage = false;
}

