#pragma once
#include "CoreMinimal.h"
#include "EComboPointCountType.generated.h"

UENUM(BlueprintType)
enum class EComboPointCountType : uint8 {
    PerInstance,
    PerClass,
};

