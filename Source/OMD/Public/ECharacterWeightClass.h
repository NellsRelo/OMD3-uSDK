#pragma once
#include "CoreMinimal.h"
#include "ECharacterWeightClass.generated.h"

UENUM(BlueprintType)
enum class ECharacterWeightClass : uint8 {
    Light,
    Heavy,
    VeryHeavy,
    Immovable,
};

