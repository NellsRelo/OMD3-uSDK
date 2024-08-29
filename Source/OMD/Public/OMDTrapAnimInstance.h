#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "OMDTrapAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class OMD_API UOMDTrapAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTriggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsResetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsDisabled;
    
public:
    UOMDTrapAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetDisabled(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void DoTrigger();
    
    UFUNCTION(BlueprintCallable)
    void DoReset();
    
    UFUNCTION(BlueprintCallable)
    void DoCooldown();
    
};

