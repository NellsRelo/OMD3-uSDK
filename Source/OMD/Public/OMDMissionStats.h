#pragma once
#include "CoreMinimal.h"
#include "OMDMissionStats.generated.h"

USTRUCT(BlueprintType)
struct FOMDMissionStats {
    GENERATED_BODY()
public:
    UPROPERTY()
    int64 Score;
    
    UPROPERTY(BlueprintReadOnly)
    int64 SoloScore;
    
    UPROPERTY(BlueprintReadOnly)
    int64 CoOpScore;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 skulls;
    
    UPROPERTY(BlueprintReadOnly)
    int32 Combo;
    
    UPROPERTY(BlueprintReadOnly)
    int32 KillStreak;
    
    UPROPERTY(BlueprintReadOnly)
    float CompletionTime;
    
    UPROPERTY(BlueprintReadOnly)
    int32 EndlessWavesCompleted;
    
    UPROPERTY(BlueprintReadOnly)
    int64 WCWeeklyScoreSolo;
    
    UPROPERTY(BlueprintReadOnly)
    int64 WCWeeklyScoreCoOp;
    
    UPROPERTY(BlueprintReadOnly)
    int32 WCWeeksSinceStartSolo;
    
    UPROPERTY(BlueprintReadOnly)
    int32 WCWeeksSinceStartCoOp;
    
    OMD_API FOMDMissionStats();
};

