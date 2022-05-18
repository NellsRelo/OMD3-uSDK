#pragma once
#include "CoreMinimal.h"
#include "EOnslaughtDifficulty.generated.h"

UENUM()
enum class EOnslaughtDifficulty : uint8 {
    Apprentice,
    WarMage,
    RiftLord,
    Coop,
    Endless,
    Any,
};

