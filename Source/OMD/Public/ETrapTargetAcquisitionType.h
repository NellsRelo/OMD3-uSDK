#pragma once
#include "CoreMinimal.h"
#include "ETrapTargetAcquisitionType.generated.h"

UENUM(BlueprintType)
enum class ETrapTargetAcquisitionType : uint8 {
    Overlap,
    Sensing,
    None,
};

