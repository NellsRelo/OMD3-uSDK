#pragma once
#include "CoreMinimal.h"
#include "EAITargetingType.generated.h"

UENUM()
enum class EAITargetingType : uint8 {
    ClassicOrc,
    DoorBreaker,
    CharacterKiller,
    Healer,
    TrapHunter,
    External,
};

