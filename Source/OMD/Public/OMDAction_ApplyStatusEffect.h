#pragma once
#include "CoreMinimal.h"
#include "OMDAction.h"
#include "ApplyStatusEffectActionDelegateDelegate.h"
#include "OMDSoftProtoPtr.h"
#include "OMDAction_ApplyStatusEffect.generated.h"

class AActor;
class UOMDAction_ApplyStatusEffect;
class UOMDAbility;

UCLASS()
class OMD_API UOMDAction_ApplyStatusEffect : public UOMDAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FApplyStatusEffectActionDelegate OnApply;
    
    UPROPERTY(BlueprintAssignable)
    FApplyStatusEffectActionDelegate OnFailure;
    
    UPROPERTY(BlueprintAssignable)
    FApplyStatusEffectActionDelegate OnClientSimulateApply;
    
    UPROPERTY(BlueprintAssignable)
    FApplyStatusEffectActionDelegate OnClientFailure;
    
protected:
    UPROPERTY()
    AActor* Target;
    
public:
    UOMDAction_ApplyStatusEffect();
    UFUNCTION(BlueprintCallable)
    static UOMDAction_ApplyStatusEffect* ApplyStatusEffect(UOMDAbility* ability, AActor* NewTarget, FOMDSoftProtoPtr OMDStatusEffectProto, float overrideDuration);
    
};

