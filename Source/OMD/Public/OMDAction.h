#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OMDAction.generated.h"

UCLASS(Abstract, BlueprintType)
class OMD_API UOMDAction : public UObject {
    GENERATED_BODY()
public:
    UOMDAction();
    UFUNCTION(BlueprintCallable)
    void ReadyForActivation();
    
};

