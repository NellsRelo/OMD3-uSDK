#pragma once
#include "CoreMinimal.h"
#include "OMDRandomModeEntryBase.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDRandomModeEntryBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Weight;
    
    FOMDRandomModeEntryBase();
};

