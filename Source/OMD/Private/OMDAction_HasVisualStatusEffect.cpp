#include "OMDAction_HasVisualStatusEffect.h"

class UOMDAbility;
class AOMDCharacter;
class UOMDAction_HasVisualStatusEffect;

UOMDAction_HasVisualStatusEffect* UOMDAction_HasVisualStatusEffect::HasVisualStatusEffect(UOMDAbility* ability, AOMDCharacter* NewCharacterToCheck, EStatusEffectCategory NewCategoryToCheck) {
    return NULL;
}

UOMDAction_HasVisualStatusEffect::UOMDAction_HasVisualStatusEffect() {
    this->characterToCheck = NULL;
    this->categoryToCheck = EStatusEffectCategory::None;
}

