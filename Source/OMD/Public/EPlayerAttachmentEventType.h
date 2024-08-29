#pragma once
#include "CoreMinimal.h"
#include "EPlayerAttachmentEventType.generated.h"

UENUM(BlueprintType)
enum class EPlayerAttachmentEventType : uint8 {
    Equipped,
    Unequipped,
    PrimaryFired,
    SecondaryFired,
    ChargeStarted,
    ChargeLevelIncreased,
    ChargeEnded,
    Deactivated,
    Cancelled,
};

