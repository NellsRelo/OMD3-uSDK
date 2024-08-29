#pragma once
#include "CoreMinimal.h"
#include "OMDAction.h"
#include "PlayMontageActionDelegateDelegate.h"
#include "OMDAction_PlayMontage.generated.h"

class UAnimMontage;
class UOMDAbility;
class UOMDAction_PlayMontage;

UCLASS(Blueprintable)
class OMD_API UOMDAction_PlayMontage : public UOMDAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayMontageActionDelegate OnCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayMontageActionDelegate OnInterrupted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayMontageActionDelegate OnBlendOut;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
public:
    UOMDAction_PlayMontage();

    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    static UOMDAction_PlayMontage* PlayMontage(UOMDAbility* ability, UAnimMontage* NewMontage, float Rate, float StartPosition, FName startSection);
    
    UFUNCTION(BlueprintCallable)
    void MontageEnded(UAnimMontage* NewMontage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void MontageBlendingOutStarted(UAnimMontage* NewMontage, bool bInterrupted);
    
};

