#pragma once
#include "CoreMinimal.h"
#include "RemoveStatusEffectActionDelegateDelegate.h"
#include "OMDAction.h"
#include "EStatusEffectCategory.h"
#include "OMDAction_RemoveStatusEffect.generated.h"

class AActor;
class UOMDAction_RemoveStatusEffect;
class UOMDAbility;

UCLASS()
class OMD_API UOMDAction_RemoveStatusEffect : public UOMDAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRemoveStatusEffectActionDelegate OnRemove;
    
    UPROPERTY(BlueprintAssignable)
    FRemoveStatusEffectActionDelegate OnDidNotRemove;
    
protected:
    UPROPERTY()
    AActor* Target;
    
    UPROPERTY()
    EStatusEffectCategory VisualCategory;
    
public:
    UOMDAction_RemoveStatusEffect();
    UFUNCTION(BlueprintCallable)
    static UOMDAction_RemoveStatusEffect* RemoveStatusEffect(UOMDAbility* ability, AActor* NewTarget, int32 ID, EStatusEffectCategory NewVisualCategory);
    
};

