#pragma once
#include "CoreMinimal.h"
#include "EFlinchDirection.generated.h"

UENUM(BlueprintType)
enum class EFlinchDirection : uint8 {
    Undefined,
    Back,
    Front,
    Left,
    Right,
};

