#pragma once
#include "CoreMinimal.h"
#include "EAsyncDialogueReason.generated.h"

UENUM(BlueprintType)
enum class EAsyncDialogueReason : uint8 {
    None,
    CheckingPermissions,
    CreatingSession,
    JoiningSession,
    DestroyingSession,
};

