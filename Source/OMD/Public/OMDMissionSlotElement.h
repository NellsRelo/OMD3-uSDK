#pragma once
#include "CoreMinimal.h"
#include "OMDMissionSlotElement.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDMissionSlotElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsPremission;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsWarmachineSlot;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 SlotIndex;
    
    FOMDMissionSlotElement();
};

