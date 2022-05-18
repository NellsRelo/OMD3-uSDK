#pragma once
#include "CoreMinimal.h"
#include "OMDLeaderboardRowInfo.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDLeaderboardRowInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString PlayerName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Rank;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int64 HighScore;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsCurrentUser;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int64 EndlessWavesCompleted;
    
    FOMDLeaderboardRowInfo();
};

