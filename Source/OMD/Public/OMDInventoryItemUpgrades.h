#pragma once
#include "CoreMinimal.h"
#include "OMDSoftProtoPtr.h"
#include "OMDInventoryItemUpgrades.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDInventoryItemUpgrades {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOMDSoftProtoPtr> OwnedItemUpgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOMDSoftProtoPtr> EquippedItemUpgrades;
    
public:
    FOMDInventoryItemUpgrades();
};

