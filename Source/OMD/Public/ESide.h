#pragma once
#include "CoreMinimal.h"
#include "ESide.generated.h"

UENUM(BlueprintType)
enum class ESide : uint8 {
    None,
    Left,
    Right,
    Both,
};

