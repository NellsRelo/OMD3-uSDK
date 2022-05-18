#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectState.generated.h"

UENUM(BlueprintType)
enum class EStatusEffectState : uint8 {
    Dormant,
    Active,
    Inactive,
    Expired,
};

