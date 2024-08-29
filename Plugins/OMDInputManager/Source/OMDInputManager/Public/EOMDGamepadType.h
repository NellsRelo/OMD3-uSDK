#pragma once
#include "CoreMinimal.h"
#include "EOMDGamepadType.generated.h"

UENUM(BlueprintType)
enum class EOMDGamepadType : uint8 {
    Unknown,
    Nintendo,
    PlayStation,
    Stadia,
    Xbox,
};

