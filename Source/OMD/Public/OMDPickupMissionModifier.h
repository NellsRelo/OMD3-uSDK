#pragma once
#include "CoreMinimal.h"
#include "OMDSoftProtoPtr.h"
#include "OMDPickupMissionModifier.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDPickupMissionModifier {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDSoftProtoPtr GuaranteedPickup;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ChanceToDropPickup;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bUseGuaranteedPickupOverride: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bUseChanceToDropPickupOverride: 1;
    
public:
    FOMDPickupMissionModifier();
};

