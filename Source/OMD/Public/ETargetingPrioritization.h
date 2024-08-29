#pragma once
#include "CoreMinimal.h"
#include "ETargetingPrioritization.generated.h"

UENUM(BlueprintType)
enum class ETargetingPrioritization : uint8 {
    Distance,
    LowestHealth,
};

