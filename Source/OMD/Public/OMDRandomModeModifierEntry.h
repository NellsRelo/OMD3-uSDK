#pragma once
#include "CoreMinimal.h"
#include "OMDRandomModeEntryBase.h"
#include "OMDSoftProtoPtr.h"
#include "OMDRandomModeModifierEntry.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDRandomModeModifierEntry : public FOMDRandomModeEntryBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDSoftProtoPtr Modifier;
    
    FOMDRandomModeModifierEntry();
};

