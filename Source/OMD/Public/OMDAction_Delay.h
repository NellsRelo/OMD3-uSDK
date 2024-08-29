#pragma once
#include "CoreMinimal.h"
#include "DelayActionDelegateDelegate.h"
#include "OMDAction.h"
#include "OMDAction_Delay.generated.h"

class UOMDAbility;
class UOMDAction_Delay;

UCLASS(Blueprintable)
class OMD_API UOMDAction_Delay : public UOMDAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelayActionDelegate Completed;
    
    UOMDAction_Delay();

private:
    UFUNCTION(BlueprintCallable)
    void TimerFinished();
    
public:
    UFUNCTION(BlueprintCallable)
    static UOMDAction_Delay* Delay(UOMDAbility* ability, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void Cancel();
    
};

