#pragma once
#include "CoreMinimal.h"
#include "OMDSoftProtoPtr.h"
#include "OMDRandomModeDropReplaceEntry.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDRandomModeDropReplaceEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOMDSoftProtoPtr DropToReplace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOMDSoftProtoPtr DropToReplaceWith;
    
    FOMDRandomModeDropReplaceEntry();
};

