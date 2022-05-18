#pragma once
#include "CoreMinimal.h"
#include "OMDFloatRange.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDFloatRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Max;
    
    FOMDFloatRange();
};

