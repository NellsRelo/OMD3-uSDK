#pragma once
#include "CoreMinimal.h"
#include "ETrapWarMachineFlags.generated.h"

UENUM(BlueprintType)
enum class ETrapWarMachineFlags : uint8 {
    Anglable,
    Stackable,
    Mountable,
};

