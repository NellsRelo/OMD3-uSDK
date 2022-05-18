#pragma once
#include "CoreMinimal.h"
#include "EOverrideableType.generated.h"

UENUM()
enum class EOverrideableType : uint8 {
    Always,
    Never,
    OnlyIfPrimary,
    OnlyIfSpecial,
};

