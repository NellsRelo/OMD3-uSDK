#pragma once
#include "CoreMinimal.h"
#include "ESessionFailureReason.generated.h"

UENUM(BlueprintType)
enum class ESessionFailureReason : uint8 {
    None,
    GenericFailure,
    RemoteDisconnect,
    NetworkFail,
};

