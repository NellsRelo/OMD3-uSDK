#pragma once
#include "CoreMinimal.h"
#include "ETrapPlacementFlags.generated.h"

UENUM(BlueprintType)
enum class ETrapPlacementFlags : uint8 {
    Floor,
    Wall,
    Ceiling,
    WarMachineFloor,
    WarMachineWall,
    WarMachineCeiling,
};

