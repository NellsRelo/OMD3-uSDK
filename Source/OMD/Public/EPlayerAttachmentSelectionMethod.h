#pragma once
#include "CoreMinimal.h"
#include "EPlayerAttachmentSelectionMethod.generated.h"

UENUM()
enum class EPlayerAttachmentSelectionMethod : uint8 {
    All,
    Name,
    Index,
};

