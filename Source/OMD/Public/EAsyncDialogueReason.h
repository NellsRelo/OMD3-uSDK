#pragma once
#include "CoreMinimal.h"
#include "EAsyncDialogueReason.generated.h"

UENUM()
enum class EAsyncDialogueReason : uint8 {
    None,
    CheckingPermissions,
    CreatingSession,
    JoiningSession,
    DestroyingSession,
};

