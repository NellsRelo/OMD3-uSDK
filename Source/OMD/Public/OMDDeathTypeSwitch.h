#pragma once
#include "CoreMinimal.h"
#include "DeathTypeOutputPinDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OMDDeathTypeSwitch.generated.h"

class UOMDDeathTypeSwitch;

UCLASS()
class OMD_API UOMDDeathTypeSwitch : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDeathTypeOutputPin NoType;
    
    UPROPERTY(BlueprintAssignable)
    FDeathTypeOutputPin Ragdoll;
    
    UPROPERTY(BlueprintAssignable)
    FDeathTypeOutputPin Gib;
    
    UPROPERTY(BlueprintAssignable)
    FDeathTypeOutputPin CustomAnimation;
    
    UPROPERTY(BlueprintAssignable)
    FDeathTypeOutputPin EnteredRift;
    
    UOMDDeathTypeSwitch();
    UFUNCTION(BlueprintCallable)
    static UOMDDeathTypeSwitch* SwitchOnDeathType(const uint8 deathTypeMask);
    
};

