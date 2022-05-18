#pragma once
#include "CoreMinimal.h"
#include "EJoinFailureReason.generated.h"

UENUM()
enum class EJoinFailureReason : uint8 {
    None,
    SessionIsFull,
    SessionDoesNotExist,
    CouldNotRetrieveAddress,
    AlreadyInSession,
    UnknownError,
};

