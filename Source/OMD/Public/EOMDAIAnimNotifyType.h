#pragma once
#include "CoreMinimal.h"
#include "EOMDAIAnimNotifyType.generated.h"

UENUM(BlueprintType)
enum class EOMDAIAnimNotifyType : uint8 {
    None,
    DoDamage,
    SetBBValue,
    ResetFlinch,
};

