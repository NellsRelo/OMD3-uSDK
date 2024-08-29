#pragma once
#include "CoreMinimal.h"
#include "OMDMissionStats.generated.h"

USTRUCT(BlueprintType)
struct FOMDMissionStats {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Score;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 SoloScore;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 CoOpScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 skulls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Combo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KillStreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CompletionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndlessWavesCompleted;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 WCWeeklyScoreSolo;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 WCWeeklyScoreCoOp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WCWeeksSinceStartSolo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WCWeeksSinceStartCoOp;
    
    OMD_API FOMDMissionStats();
};

