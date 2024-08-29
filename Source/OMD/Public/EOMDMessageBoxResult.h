#pragma once
#include "CoreMinimal.h"
#include "EOMDMessageBoxResult.generated.h"

UENUM(BlueprintType)
enum class EOMDMessageBoxResult : uint8 {
    None,
    OK,
    Cancel,
    Yes = 4,
    No = 8,
};

