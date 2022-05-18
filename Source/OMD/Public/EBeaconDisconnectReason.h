#pragma once
#include "CoreMinimal.h"
#include "EBeaconDisconnectReason.generated.h"

UENUM()
enum class EBeaconDisconnectReason : uint8 {
    None,
    GameFull,
    FailedInitialConnection,
    HostClosed,
};

