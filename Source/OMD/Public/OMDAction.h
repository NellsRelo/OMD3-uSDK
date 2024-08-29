#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OMDAction.generated.h"

UCLASS(Abstract, Blueprintable)
class OMD_API UOMDAction : public UObject {
    GENERATED_BODY()
public:
    UOMDAction();

    UFUNCTION(BlueprintCallable)
    void ReadyForActivation();
    
};

