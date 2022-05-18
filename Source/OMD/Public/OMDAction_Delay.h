#pragma once
#include "CoreMinimal.h"
#include "OMDAction.h"
#include "DelayActionDelegateDelegate.h"
#include "OMDAction_Delay.generated.h"

class UOMDAction_Delay;
class UOMDAbility;

UCLASS()
class OMD_API UOMDAction_Delay : public UOMDAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDelayActionDelegate Completed;
    
    UOMDAction_Delay();
private:
    UFUNCTION()
    void TimerFinished();
    
public:
    UFUNCTION(BlueprintCallable)
    static UOMDAction_Delay* Delay(UOMDAbility* ability, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void Cancel();
    
};

