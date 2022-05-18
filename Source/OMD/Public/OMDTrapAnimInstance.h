#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "OMDTrapAnimInstance.generated.h"

UCLASS(NonTransient)
class OMD_API UOMDTrapAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsTriggered;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bIsActive;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bIsResetting;
    
    UPROPERTY(BlueprintReadWrite, Transient)
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

