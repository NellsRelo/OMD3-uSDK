#pragma once
#include "CoreMinimal.h"
#include "OMDAbilitySpec.generated.h"

class UOMDAbility;

USTRUCT(BlueprintType)
struct OMD_API FOMDAbilitySpec {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOMDAbility* DefaultObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOMDAbility*> Instances;
    
public:
    FOMDAbilitySpec();
};

