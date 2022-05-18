#pragma once
#include "CoreMinimal.h"
#include "OMDAction.h"
#include "OMDAction_SetTrapEnabledState.generated.h"

class AOMDTrap;
class AActor;
class UOMDAction_SetTrapEnabledState;
class UOMDAbility;

UCLASS()
class OMD_API UOMDAction_SetTrapEnabledState : public UOMDAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    AOMDTrap* targetTrap;
    
public:
    UOMDAction_SetTrapEnabledState();
    UFUNCTION(BlueprintCallable)
    static UOMDAction_SetTrapEnabledState* SetTrapEnabledState(UOMDAbility* ability, AOMDTrap* NewTargetTrap, AActor* Causer, float Duration);
    
};

