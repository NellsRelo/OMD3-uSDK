#pragma once
#include "CoreMinimal.h"
#include "OMDLeaderboardReadInfo.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDLeaderboardReadInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FName StatName;
    
    UPROPERTY(BlueprintReadOnly)
    bool LargeLeaderboards;
    
    UPROPERTY(BlueprintReadOnly)
    bool SelfScoreLeaderboard;
    
    UPROPERTY(BlueprintReadOnly)
    bool SoloLeaderboards;
    
    UPROPERTY(BlueprintReadOnly)
    bool FriendsLeaderboards;
    
    UPROPERTY(BlueprintReadOnly)
    int32 PageNumber;
    
    FOMDLeaderboardReadInfo();
};

