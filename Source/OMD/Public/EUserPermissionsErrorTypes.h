#pragma once
#include "CoreMinimal.h"
#include "EUserPermissionsErrorTypes.generated.h"

UENUM(BlueprintType)
enum class EUserPermissionsErrorTypes : uint8 {
    NoFailures,
    RequiredPatchAvailable,
    RequiredSystemUpdate,
    AgeRestrictionFailure,
    AccountTypeFailure,
    UserNotFound,
    UserNotLoggedIn,
    ChatRestriction,
    UGCRestriction,
    GenericFailure,
    OnlinePlayRestricted,
    NetworkConnectionUnavailable,
    UserNotSignedUp,
    TrialExpired,
};

