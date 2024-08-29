#pragma once
#include "CoreMinimal.h"
#include "EBeaconDisconnectReason.generated.h"

UENUM(BlueprintType)
enum class EBeaconDisconnectReason : uint8 {
    None,
    GameFull,
    FailedInitialConnection,
    HostClosed,
};

