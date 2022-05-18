#pragma once
#include "CoreMinimal.h"
#include "OMDInt32Range.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDInt32Range {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Max;
    
    FOMDInt32Range();
};

