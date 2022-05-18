#pragma once
#include "CoreMinimal.h"
#include "OMDAction.h"
#include "PlayMontageActionDelegateDelegate.h"
#include "OMDAction_PlayMontage.generated.h"

class UAnimMontage;
class UOMDAction_PlayMontage;
class UOMDAbility;

UCLASS()
class OMD_API UOMDAction_PlayMontage : public UOMDAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPlayMontageActionDelegate OnCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FPlayMontageActionDelegate OnInterrupted;
    
    UPROPERTY(BlueprintAssignable)
    FPlayMontageActionDelegate OnBlendOut;
    
private:
    UPROPERTY()
    UAnimMontage* Montage;
    
public:
    UOMDAction_PlayMontage();
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    static UOMDAction_PlayMontage* PlayMontage(UOMDAbility* ability, UAnimMontage* NewMontage, float Rate, float StartPosition, FName startSection);
    
    UFUNCTION()
    void MontageEnded(UAnimMontage* NewMontage, bool bInterrupted);
    
    UFUNCTION()
    void MontageBlendingOutStarted(UAnimMontage* NewMontage, bool bInterrupted);
    
};

