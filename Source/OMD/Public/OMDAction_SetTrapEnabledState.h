#pragma once
#include "CoreMinimal.h"
#include "OMDAction.h"
#include "OMDAction_SetTrapEnabledState.generated.h"

class AActor;
class AOMDTrap;
class UOMDAbility;
class UOMDAction_SetTrapEnabledState;

UCLASS(Blueprintable)
class OMD_API UOMDAction_SetTrapEnabledState : public UOMDAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AOMDTrap* targetTrap;
    
public:
    UOMDAction_SetTrapEnabledState();

    UFUNCTION(BlueprintCallable)
    static UOMDAction_SetTrapEnabledState* SetTrapEnabledState(UOMDAbility* ability, AOMDTrap* NewTargetTrap, AActor* Causer, float Duration);
    
};

