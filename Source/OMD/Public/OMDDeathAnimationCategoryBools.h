#pragma once
#include "CoreMinimal.h"
#include "OMDDeathAnimationCategoryBools.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDDeathAnimationCategoryBools {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    uint8 Nothing: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 Electrified: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 Burned: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 Melted: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 Frozen: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 Stoned: 1;
    
    FOMDDeathAnimationCategoryBools();
};

