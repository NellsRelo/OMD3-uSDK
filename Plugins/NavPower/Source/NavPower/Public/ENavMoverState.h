#pragma once
#include "CoreMinimal.h"
#include "ENavMoverState.generated.h"

UENUM()
enum class ENavMoverState {
    Invalid,
    Active,
    Frozen,
    FrozenTranslateOnly,
};

