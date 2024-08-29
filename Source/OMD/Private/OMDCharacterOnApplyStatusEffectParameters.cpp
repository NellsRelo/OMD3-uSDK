#include "OMDCharacterOnApplyStatusEffectParameters.h"

UOMDCharacterOnApplyStatusEffectParameters::UOMDCharacterOnApplyStatusEffectParameters() {
    this->effectCauser = NULL;
    this->Instigator = NULL;
    this->overrideDuration = 0.00f;
    this->statusEffectAppliedID = 0;
}

bool UOMDCharacterOnApplyStatusEffectParameters::DidApplyStatusEffect() const {
    return false;
}


