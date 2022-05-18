#pragma once
#include "CoreMinimal.h"
#include "ECharacterMovementAbilities.generated.h"

UENUM(BlueprintType)
enum class ECharacterMovementAbilities : uint8 {
    None,
    GroundSlam,
    Levitate,
    FeignDeath,
    Teleport,
    FeatherFall,
    DoubleJump,
};

