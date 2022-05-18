#pragma once
#include "CoreMinimal.h"
#include "EDeathAnimationCategory.generated.h"

UENUM(BlueprintType)
enum class EDeathAnimationCategory : uint8 {
    None,
    Electrified,
    Burned,
    Melted,
    Frozen,
    Stoned,
    Magicked,
    Poisoned,
};

