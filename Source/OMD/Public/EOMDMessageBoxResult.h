#pragma once
#include "CoreMinimal.h"
#include "EOMDMessageBoxResult.generated.h"

UENUM()
enum class EOMDMessageBoxResult : uint8 {
    None,
    OK,
    Cancel,
    Yes = 0x4,
    No = 0x8,
};

