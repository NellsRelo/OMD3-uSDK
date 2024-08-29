#pragma once
#include "CoreMinimal.h"
#include "EMovementAbilityState.generated.h"

UENUM(BlueprintType)
enum class EMovementAbilityState : uint8 {
    Start,
    Landed,
    End,
};

