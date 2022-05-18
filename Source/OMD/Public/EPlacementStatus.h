#pragma once
#include "CoreMinimal.h"
#include "EPlacementStatus.generated.h"

UENUM(BlueprintType)
enum class EPlacementStatus : uint8 {
    Placeable,
    NotEnoughCoin,
    CantPlaceHere,
};

