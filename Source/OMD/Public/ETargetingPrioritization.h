#pragma once
#include "CoreMinimal.h"
#include "ETargetingPrioritization.generated.h"

UENUM()
enum class ETargetingPrioritization : uint8 {
    Distance,
    LowestHealth,
};

