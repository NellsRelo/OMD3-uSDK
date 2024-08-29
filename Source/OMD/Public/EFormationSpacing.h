#pragma once
#include "CoreMinimal.h"
#include "EFormationSpacing.generated.h"

UENUM(BlueprintType)
enum class EFormationSpacing : uint8 {
    Normal,
    Tight,
    Relaxed,
};

