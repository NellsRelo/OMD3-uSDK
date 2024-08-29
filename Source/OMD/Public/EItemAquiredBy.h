#pragma once
#include "CoreMinimal.h"
#include "EItemAquiredBy.generated.h"

UENUM(BlueprintType)
enum class EItemAquiredBy : uint8 {
    Internal,
    Purchase,
    Unlock,
    Both,
};

