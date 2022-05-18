#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OMDAbilityParameters.generated.h"

UCLASS(Abstract, Blueprintable)
class OMD_API UOMDAbilityParameters : public UObject {
    GENERATED_BODY()
public:
    UOMDAbilityParameters();
};

