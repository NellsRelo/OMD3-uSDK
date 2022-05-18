#pragma once
#include "CoreMinimal.h"
#include "EDeathAnimationCategory.h"
#include "OMDDeathParameters.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDDeathParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    uint8 DeathType;
    
    UPROPERTY(BlueprintReadOnly)
    EDeathAnimationCategory DeathAnimationCategory;
    
    UPROPERTY(BlueprintReadOnly)
    int32 LimbMask;
    
    FOMDDeathParameters();
};

