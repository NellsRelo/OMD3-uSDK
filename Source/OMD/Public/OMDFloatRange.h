#pragma once
#include "CoreMinimal.h"
#include "OMDFloatRange.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDFloatRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Max;
    
    FOMDFloatRange();
};

