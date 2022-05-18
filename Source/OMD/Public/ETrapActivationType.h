#pragma once
#include "CoreMinimal.h"
#include "ETrapActivationType.generated.h"

UENUM(BlueprintType)
enum class ETrapActivationType : uint8 {
    Timed,
    Charged,
    Activated,
    Passive,
    Continuous,
};

