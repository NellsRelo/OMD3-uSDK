#pragma once
#include "CoreMinimal.h"
#include "EComboPointType.generated.h"

UENUM(BlueprintType)
enum class EComboPointType : uint8 {
    Damage,
    StatusEffect,
    Launched,
};

