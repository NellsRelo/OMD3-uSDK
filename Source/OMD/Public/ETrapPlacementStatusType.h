#pragma once
#include "CoreMinimal.h"
#include "ETrapPlacementStatusType.generated.h"

UENUM(BlueprintType)
enum class ETrapPlacementStatusType : uint8 {
    None,
    NoGrid,
    Valid,
    Invalid,
    NoCoin,
    Hover,
    HoverInvalid,
};

