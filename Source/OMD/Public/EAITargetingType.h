#pragma once
#include "CoreMinimal.h"
#include "EAITargetingType.generated.h"

UENUM(BlueprintType)
enum class EAITargetingType : uint8 {
    ClassicOrc,
    DoorBreaker,
    CharacterKiller,
    Healer,
    TrapHunter,
    External,
};

