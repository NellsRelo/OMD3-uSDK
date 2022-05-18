#pragma once
#include "CoreMinimal.h"
#include "EMissionLaunchMode.generated.h"

UENUM()
enum class EMissionLaunchMode : uint8 {
    SinglePlayer,
    MultiplayerHost,
    MultiplayerClient,
};

