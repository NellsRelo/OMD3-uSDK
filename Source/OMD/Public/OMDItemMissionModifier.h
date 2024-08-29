#pragma once
#include "CoreMinimal.h"
#include "OMDSoftProtoPtr.h"
#include "OMDItemMissionModifier.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDItemMissionModifier {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr protodata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOMDSoftProtoPtr> EquippedUpgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseEquippedUpgradesOverride: 1;
    
public:
    FOMDItemMissionModifier();
};

