#pragma once
#include "CoreMinimal.h"
#include "EBeaconAckStatus.generated.h"

UENUM()
enum class EBeaconAckStatus : uint8 {
    Success,
    LacksMissionEntitlement,
};

