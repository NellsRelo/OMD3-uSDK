#pragma once
#include "CoreMinimal.h"
#include "EOMDSaveOperationError.generated.h"

UENUM(BlueprintType)
enum class EOMDSaveOperationError : uint8 {
    None,
    FailedToLoad,
    FailedToDecompress,
    NewerSaveVersion,
    FailedToDeserialize,
    SystemCorrupt,
};

