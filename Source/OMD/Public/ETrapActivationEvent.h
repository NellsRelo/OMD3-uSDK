#pragma once
#include "CoreMinimal.h"
#include "ETrapActivationEvent.generated.h"

UENUM(BlueprintType)
enum class ETrapActivationEvent : uint8 {
    Manual,
    OverlapBegan,
    OverlapEnded,
    CooldownComplete,
    Disabled,
    DisabledComplete,
};

