#pragma once
#include "CoreMinimal.h"
#include "EPlayerAttachmentSelectionMethod.generated.h"

UENUM(BlueprintType)
enum class EPlayerAttachmentSelectionMethod : uint8 {
    All,
    Name,
    Index,
};

