#pragma once
#include "CoreMinimal.h"
#include "EOMDTriggerEffectMode.generated.h"

UENUM(BlueprintType)
enum class EOMDTriggerEffectMode : uint8 {
    Off,
    Feedback,
    SlopeFeedback,
    Weapon,
    Vibration,
};

