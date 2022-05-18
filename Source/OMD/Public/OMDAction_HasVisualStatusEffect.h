#pragma once
#include "CoreMinimal.h"
#include "OMDAction.h"
#include "HasVisualStatusEffectActionDelegateDelegate.h"
#include "EStatusEffectCategory.h"
#include "OMDAction_HasVisualStatusEffect.generated.h"

class UOMDAction_HasVisualStatusEffect;
class AOMDCharacter;
class UOMDAbility;

UCLASS()
class OMD_API UOMDAction_HasVisualStatusEffect : public UOMDAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FHasVisualStatusEffectActionDelegate OnCheck;
    
private:
    UPROPERTY()
    AOMDCharacter* characterToCheck;
    
    UPROPERTY()
    EStatusEffectCategory categoryToCheck;
    
public:
    UOMDAction_HasVisualStatusEffect();
    UFUNCTION(BlueprintCallable)
    static UOMDAction_HasVisualStatusEffect* HasVisualStatusEffect(UOMDAbility* ability, AOMDCharacter* NewCharacterToCheck, EStatusEffectCategory NewCategoryToCheck);
    
};

