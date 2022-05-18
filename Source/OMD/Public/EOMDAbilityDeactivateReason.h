#pragma once
#include "CoreMinimal.h"
#include "EOMDAbilityDeactivateReason.generated.h"

UENUM()
enum class EOMDAbilityDeactivateReason {
    Regular,
    Death,
    ItemChange,
    MoveAbility,
    ControllerChange,
    EndGame,
};

