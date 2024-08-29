#pragma once
#include "CoreMinimal.h"
#include "EOMDTriggerEffectTrigger.generated.h"

UENUM(BlueprintType)
enum class EOMDTriggerEffectTrigger : uint8 {
    None,
    Primary,
    Secondary,
    Both,
};

