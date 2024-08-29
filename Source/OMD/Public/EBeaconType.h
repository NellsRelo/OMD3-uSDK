#pragma once
#include "CoreMinimal.h"
#include "EBeaconType.generated.h"

UENUM(BlueprintType)
enum class EBeaconType : uint8 {
    Lobby,
    Cinematic,
    InGame,
};

