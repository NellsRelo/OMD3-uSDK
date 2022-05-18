#pragma once
#include "CoreMinimal.h"
#include "OMDSoftProtoPtr.h"
#include "OMDInventoryItemUpgrades.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDInventoryItemUpgrades {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<FOMDSoftProtoPtr> OwnedItemUpgrades;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FOMDSoftProtoPtr> EquippedItemUpgrades;
    
public:
    FOMDInventoryItemUpgrades();
};

