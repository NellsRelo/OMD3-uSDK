#include "OMDDamageEvent.h"

FOMDDamageEvent::FOMDDamageEvent() {
    this->Damage = 0.00f;
    this->ChanceToGib = 0.00f;
    this->DeathAnimation = EDeathAnimationCategory::None;
    this->IgnoreShielding = false;
    this->bIgnoreTeams = false;
    this->bIsDOTDamage = false;
}

