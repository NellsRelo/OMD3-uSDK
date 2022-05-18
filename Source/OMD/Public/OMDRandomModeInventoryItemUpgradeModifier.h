#pragma once
#include "CoreMinimal.h"
#include "OMDSoftProtoPtr.h"
#include "OMDRandomModeInventoryItemUpgradeModifier.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDRandomModeInventoryItemUpgradeModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOMDSoftProtoPtr InventoryItemProtodata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FOMDSoftProtoPtr> ItemUpgradeProtodataCollection;
    
    FOMDRandomModeInventoryItemUpgradeModifier();
};

