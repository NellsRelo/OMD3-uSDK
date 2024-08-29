#pragma once
#include "CoreMinimal.h"
#include "ELeaderboardResult.h"
#include "OMDLeaderboardInfo.h"
#include "OMDLeaderboardRowInfo.h"
#include "OMDLeaderboardReadCompleteDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOMDLeaderboardReadCompleteDelegate, ELeaderboardResult, Result, const FOMDLeaderboardInfo&, leaderboardInfo, const FOMDLeaderboardRowInfo&, currentPlayerRow, bool, fullLeaderboardRead, bool, selfRefOnly);

