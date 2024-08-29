#pragma once
#include "CoreMinimal.h"
#include "OMDLeaderboardRowInfo.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDLeaderboardRowInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rank;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 HighScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCurrentUser;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 EndlessWavesCompleted;
    
    FOMDLeaderboardRowInfo();
};

