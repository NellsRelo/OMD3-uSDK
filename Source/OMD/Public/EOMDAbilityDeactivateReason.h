#pragma once
#include "CoreMinimal.h"
#include "EOMDAbilityDeactivateReason.generated.h"

UENUM(BlueprintType)
enum class EOMDAbilityDeactivateReason : uint8 {
    Regular,
    Death,
    ItemChange,
    MoveAbility,
    ControllerChange,
    EndGame,
};

