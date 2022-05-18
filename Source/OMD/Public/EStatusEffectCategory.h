#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectCategory.generated.h"

UENUM(BlueprintType)
enum class EStatusEffectCategory : uint8 {
    None,
    Burning,
    Slowed,
    Stoned,
    Zapped,
    Electrified,
    Stunned,
    Launched,
    Frozen,
    Magicked,
    Melted,
    Scared,
    Distracted,
    Healing,
    Rushing,
    Invincible,
    Charmed,
    Bleeding,
    PlayerHeld,
    TurnOffAI,
    Charge,
    Poisoned,
    Shiny,
    Cloaked,
    Recovery,
};

