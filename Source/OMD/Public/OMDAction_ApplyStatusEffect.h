#pragma once
#include "CoreMinimal.h"
#include "ApplyStatusEffectActionDelegateDelegate.h"
#include "OMDAction.h"
#include "OMDSoftProtoPtr.h"
#include "OMDAction_ApplyStatusEffect.generated.h"

class AActor;
class UOMDAbility;
class UOMDAction_ApplyStatusEffect;

UCLASS(Blueprintable)
class OMD_API UOMDAction_ApplyStatusEffect : public UOMDAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FApplyStatusEffectActionDelegate OnApply;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FApplyStatusEffectActionDelegate OnFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FApplyStatusEffectActionDelegate OnClientSimulateApply;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FApplyStatusEffectActionDelegate OnClientFailure;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
public:
    UOMDAction_ApplyStatusEffect();

    UFUNCTION(BlueprintCallable)
    static UOMDAction_ApplyStatusEffect* ApplyStatusEffect(UOMDAbility* ability, AActor* NewTarget, FOMDSoftProtoPtr OMDStatusEffectProto, float overrideDuration);
    
};

