#include "OMDAction_HasVisualStatusEffect.h"

UOMDAction_HasVisualStatusEffect::UOMDAction_HasVisualStatusEffect() {
    this->characterToCheck = NULL;
    this->categoryToCheck = EStatusEffectCategory::None;
}

UOMDAction_HasVisualStatusEffect* UOMDAction_HasVisualStatusEffect::HasVisualStatusEffect(UOMDAbility* ability, AOMDCharacter* NewCharacterToCheck, EStatusEffectCategory NewCategoryToCheck) {
    return NULL;
}


