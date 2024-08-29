#pragma once
#include "CoreMinimal.h"
#include "OMDRandomModeEntryBase.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDRandomModeEntryBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    FOMDRandomModeEntryBase();
};

