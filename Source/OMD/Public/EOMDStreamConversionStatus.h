#pragma once
#include "CoreMinimal.h"
#include "EOMDStreamConversionStatus.generated.h"

UENUM(BlueprintType)
enum class EOMDStreamConversionStatus : uint8 {
    SdrToSdr,
    HdrToHdr,
    SdrToHdr,
    HdrToSdr,
};

