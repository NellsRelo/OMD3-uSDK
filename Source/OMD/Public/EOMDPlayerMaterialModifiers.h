#pragma once
#include "CoreMinimal.h"
#include "EOMDPlayerMaterialModifiers.generated.h"

UENUM(BlueprintType)
enum class EOMDPlayerMaterialModifiers : uint8 {
    None,
    TrapHands,
    FireHands,
    FrostHands,
    ElectricHand,
};

