#pragma once
#include "CoreMinimal.h"
#include "EBeaconAckStatus.generated.h"

UENUM(BlueprintType)
enum class EBeaconAckStatus : uint8 {
    Success,
    LacksMissionEntitlement,
};

