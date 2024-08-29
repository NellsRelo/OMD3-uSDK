#pragma once
#include "CoreMinimal.h"
#include "EOMDCameraStyle.generated.h"

UENUM(BlueprintType)
enum class EOMDCameraStyle : uint8 {
    Left,
    Center,
    Right,
    ModernRight,
    ModernLeft,
    MountTrap1,
    MountTrap2,
};

