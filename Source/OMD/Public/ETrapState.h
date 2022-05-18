#pragma once
#include "CoreMinimal.h"
#include "ETrapState.generated.h"

UENUM(BlueprintType)
enum class ETrapState : uint8 {
    Ready,
    Active,
    Cooldown,
    Disabled,
};

