#pragma once
#include "CoreMinimal.h"
#include "OMDAbilitySpec.generated.h"

class UOMDAbility;

USTRUCT(BlueprintType)
struct OMD_API FOMDAbilitySpec {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UOMDAbility* DefaultObject;
    
    UPROPERTY()
    TArray<UOMDAbility*> Instances;
    
public:
    FOMDAbilitySpec();
};

