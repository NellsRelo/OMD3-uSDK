#pragma once
#include "CoreMinimal.h"
#include "EOMDAIAnimNotifyType.generated.h"

UENUM()
enum class EOMDAIAnimNotifyType : uint8 {
    None,
    DoDamage,
    SetBBValue,
    ResetFlinch,
};

