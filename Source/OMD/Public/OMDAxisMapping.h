#pragma once
#include "CoreMinimal.h"
#include "OMDAxisMapping.generated.h"

USTRUCT(BlueprintType)
struct FOMDAxisMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString axisName;
    
    UPROPERTY(BlueprintReadOnly)
    FString KeyName;
    
    UPROPERTY(BlueprintReadOnly)
    float Scale;
    
    OMD_API FOMDAxisMapping();
};

