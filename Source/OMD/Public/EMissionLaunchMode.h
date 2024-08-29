#pragma once
#include "CoreMinimal.h"
#include "EMissionLaunchMode.generated.h"

UENUM(BlueprintType)
enum class EMissionLaunchMode : uint8 {
    SinglePlayer,
    MultiplayerHost,
    MultiplayerClient,
};

