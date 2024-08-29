#pragma once
#include "CoreMinimal.h"
#include "OMDMissionSlotElement.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDMissionSlotElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPremission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsWarmachineSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    FOMDMissionSlotElement();
};

