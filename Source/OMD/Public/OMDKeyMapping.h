#pragma once
#include "CoreMinimal.h"
#include "OMDKeyMapping.generated.h"

USTRUCT(BlueprintType)
struct FOMDKeyMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString ActionName;
    
    UPROPERTY(BlueprintReadOnly)
    FString KeyName;
    
    OMD_API FOMDKeyMapping();
};

