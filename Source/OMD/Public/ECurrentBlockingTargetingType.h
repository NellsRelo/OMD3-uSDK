#pragma once
#include "CoreMinimal.h"
#include "ECurrentBlockingTargetingType.generated.h"

UENUM(BlueprintType)
enum class ECurrentBlockingTargetingType : uint8 {
    TargetRegardlessOfBlocked,
    DontTargetIfBlocked,
    OnlyTargetIfBlocked,
};

