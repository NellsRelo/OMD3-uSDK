#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectCategory.h"
#include "OMDAction.h"
#include "RemoveStatusEffectActionDelegateDelegate.h"
#include "OMDAction_RemoveStatusEffect.generated.h"

class AActor;
class UOMDAbility;
class UOMDAction_RemoveStatusEffect;

UCLASS(Blueprintable)
class OMD_API UOMDAction_RemoveStatusEffect : public UOMDAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRemoveStatusEffectActionDelegate OnRemove;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRemoveStatusEffectActionDelegate OnDidNotRemove;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStatusEffectCategory VisualCategory;
    
public:
    UOMDAction_RemoveStatusEffect();

    UFUNCTION(BlueprintCallable)
    static UOMDAction_RemoveStatusEffect* RemoveStatusEffect(UOMDAbility* ability, AActor* NewTarget, int32 ID, EStatusEffectCategory NewVisualCategory);
    
};

