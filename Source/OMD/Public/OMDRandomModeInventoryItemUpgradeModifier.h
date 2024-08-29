#pragma once
#include "CoreMinimal.h"
#include "OMDSoftProtoPtr.h"
#include "OMDRandomModeInventoryItemUpgradeModifier.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDRandomModeInventoryItemUpgradeModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr InventoryItemProtodata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOMDSoftProtoPtr> ItemUpgradeProtodataCollection;
    
    FOMDRandomModeInventoryItemUpgradeModifier();
};

