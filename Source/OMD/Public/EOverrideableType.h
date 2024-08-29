#pragma once
#include "CoreMinimal.h"
#include "EOverrideableType.generated.h"

UENUM(BlueprintType)
enum class EOverrideableType : uint8 {
    Always,
    Never,
    OnlyIfPrimary,
    OnlyIfSpecial,
};

