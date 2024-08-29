#pragma once
#include "CoreMinimal.h"
#include "EMovementModifierType.generated.h"

UENUM(BlueprintType)
enum class EMovementModifierType : uint8 {
    None,
    Absolute,
    Relative,
};

