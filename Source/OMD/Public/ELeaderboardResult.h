#pragma once
#include "CoreMinimal.h"
#include "ELeaderboardResult.generated.h"

UENUM()
enum class ELeaderboardResult : uint8 {
    None,
    Success,
    GenericFailure,
    LeaderboardsInaccessible,
};

