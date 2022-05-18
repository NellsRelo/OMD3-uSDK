#pragma once
#include "CoreMinimal.h"
#include "EOMDMessageBoxType.generated.h"

UENUM(BlueprintType)
enum class EOMDMessageBoxType : uint8 {
    None,
    OK,
    OKCancel = 0x3,
    YesNo = 0xC,
};

