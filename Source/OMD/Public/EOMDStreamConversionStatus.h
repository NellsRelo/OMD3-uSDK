#pragma once
#include "CoreMinimal.h"
#include "EOMDStreamConversionStatus.generated.h"

UENUM()
enum class EOMDStreamConversionStatus : uint8 {
    SdrToSdr,
    HdrToHdr,
    SdrToHdr,
    HdrToSdr,
};

