#pragma once
#include "CoreMinimal.h"
#include "EMovementModifierType.generated.h"

UENUM()
enum class EMovementModifierType {
    None,
    Absolute,
    Relative,
};

