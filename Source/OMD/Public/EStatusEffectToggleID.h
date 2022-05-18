#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectToggleID.generated.h"

UENUM(BlueprintType)
enum class EStatusEffectToggleID : uint8 {
    None,
    FeignDeath,
    DwarvenHammerReduceDamage,
    DwarvenHammerMoveSpeed,
    WindBeltHeld,
};

