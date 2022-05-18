#include "OMDAction_RemoveStatusEffect.h"

class UOMDAbility;
class AActor;
class UOMDAction_RemoveStatusEffect;

UOMDAction_RemoveStatusEffect* UOMDAction_RemoveStatusEffect::RemoveStatusEffect(UOMDAbility* ability, AActor* NewTarget, int32 ID, EStatusEffectCategory NewVisualCategory) {
    return NULL;
}

UOMDAction_RemoveStatusEffect::UOMDAction_RemoveStatusEffect() {
    this->Target = NULL;
    this->VisualCategory = EStatusEffectCategory::None;
}

