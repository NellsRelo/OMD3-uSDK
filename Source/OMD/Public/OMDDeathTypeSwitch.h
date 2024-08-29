#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "DeathTypeOutputPinDelegate.h"
#include "OMDDeathTypeSwitch.generated.h"

class UOMDDeathTypeSwitch;

UCLASS(Blueprintable)
class OMD_API UOMDDeathTypeSwitch : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeathTypeOutputPin NoType;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeathTypeOutputPin Ragdoll;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeathTypeOutputPin Gib;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeathTypeOutputPin CustomAnimation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeathTypeOutputPin EnteredRift;
    
    UOMDDeathTypeSwitch();

    UFUNCTION(BlueprintCallable)
    static UOMDDeathTypeSwitch* SwitchOnDeathType(const uint8 deathTypeMask);
    
};

