#pragma once
#include "CoreMinimal.h"
#include "OMDSoftProtoPtr.h"
#include "OMDItemMissionModifier.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDItemMissionModifier {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDSoftProtoPtr protodata;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FOMDSoftProtoPtr> EquippedUpgrades;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bUseEquippedUpgradesOverride: 1;
    
public:
    FOMDItemMissionModifier();
};

