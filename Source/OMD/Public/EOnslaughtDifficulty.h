#pragma once
#include "CoreMinimal.h"
#include "EOnslaughtDifficulty.generated.h"

UENUM(BlueprintType)
enum class EOnslaughtDifficulty : uint8 {
    Apprentice,
    WarMage,
    RiftLord,
    Coop,
    Endless,
    Any,
};

