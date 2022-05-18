#pragma once
#include "CoreMinimal.h"
#include "EAggroGroup.generated.h"

UENUM(BlueprintType)
enum class EAggroGroup : uint8 {
    NormalMelee,
    LargeMelee,
    Ranged,
    Runners,
    Special,
    Healers,
    Flyers,
};

