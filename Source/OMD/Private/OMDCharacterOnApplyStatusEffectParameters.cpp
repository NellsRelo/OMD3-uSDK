#include "OMDCharacterOnApplyStatusEffectParameters.h"

bool UOMDCharacterOnApplyStatusEffectParameters::DidApplyStatusEffect() const {
    return false;
}

UOMDCharacterOnApplyStatusEffectParameters::UOMDCharacterOnApplyStatusEffectParameters() {
    this->effectCauser = NULL;
    this->Instigator = NULL;
    this->overrideDuration = 0.00f;
    this->statusEffectAppliedID = 0;
}

