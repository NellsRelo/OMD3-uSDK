#include "OMDAction_ApplyStatusEffect.h"

class UOMDAbility;
class AActor;
class UOMDAction_ApplyStatusEffect;

UOMDAction_ApplyStatusEffect* UOMDAction_ApplyStatusEffect::ApplyStatusEffect(UOMDAbility* ability, AActor* NewTarget, FOMDSoftProtoPtr OMDStatusEffectProto, float overrideDuration) {
    return NULL;
}

UOMDAction_ApplyStatusEffect::UOMDAction_ApplyStatusEffect() {
    this->Target = NULL;
}

