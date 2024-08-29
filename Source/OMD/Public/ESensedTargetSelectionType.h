#pragma once
#include "CoreMinimal.h"
#include "ESensedTargetSelectionType.generated.h"

UENUM(BlueprintType)
enum class ESensedTargetSelectionType : uint8 {
    Random,
    Newest,
    FirstSensed,
    Closest,
};

