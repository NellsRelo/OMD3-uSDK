#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectCategory.h"
#include "HasVisualStatusEffectActionDelegateDelegate.h"
#include "OMDAction.h"
#include "OMDAction_HasVisualStatusEffect.generated.h"

class AOMDCharacter;
class UOMDAbility;
class UOMDAction_HasVisualStatusEffect;

UCLASS(Blueprintable)
class OMD_API UOMDAction_HasVisualStatusEffect : public UOMDAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHasVisualStatusEffectActionDelegate OnCheck;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AOMDCharacter* characterToCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStatusEffectCategory categoryToCheck;
    
public:
    UOMDAction_HasVisualStatusEffect();

    UFUNCTION(BlueprintCallable)
    static UOMDAction_HasVisualStatusEffect* HasVisualStatusEffect(UOMDAbility* ability, AOMDCharacter* NewCharacterToCheck, EStatusEffectCategory NewCategoryToCheck);
    
};

