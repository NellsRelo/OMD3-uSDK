#pragma once
#include "CoreMinimal.h"
#include "EBeaconType.generated.h"

UENUM()
enum class EBeaconType : uint8 {
    Lobby,
    Cinematic,
    InGame,
};

