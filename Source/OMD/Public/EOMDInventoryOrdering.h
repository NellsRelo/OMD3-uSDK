#pragma once
#include "CoreMinimal.h"
#include "EOMDInventoryOrdering.generated.h"

UENUM(BlueprintType)
enum class EOMDInventoryOrdering : uint8 {
    DisplayName,
    Price,
    PlacementType,
};

