#pragma once
#include "CoreMinimal.h"
#include "OMDGameStats.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDGameStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 BaseScore;
    
    UPROPERTY(BlueprintReadOnly)
    int32 ComboBonus;
    
    UPROPERTY(BlueprintReadOnly)
    int32 HeadshotBonus;
    
    UPROPERTY(BlueprintReadOnly)
    int32 KillStreakBonus;
    
    UPROPERTY(BlueprintReadOnly)
    int32 RiftPointBonus;
    
    UPROPERTY(BlueprintReadOnly)
    int32 SkullBonus;
    
    UPROPERTY(BlueprintReadOnly)
    int32 TimeBonus;
    
    UPROPERTY(BlueprintReadOnly)
    int32 TotalScore;
    
    UPROPERTY(BlueprintReadOnly)
    int32 CoinEarned;
    
    UPROPERTY(BlueprintReadOnly)
    int32 LargestCombo;
    
    UPROPERTY(BlueprintReadOnly)
    int32 NumberOfCombos;
    
    UPROPERTY(BlueprintReadOnly)
    int32 LargestKillStreak;
    
    UPROPERTY(BlueprintReadOnly)
    int32 NumberOfKillStreaks;
    
    UPROPERTY(BlueprintReadOnly)
    int32 EndlessWavesCompleted;
    
    UPROPERTY(BlueprintReadOnly)
    float CompletionTime;
    
    UPROPERTY(BlueprintReadOnly)
    int32 SkullsPickedUp;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 PerfectVictory: 1;
    
    FOMDGameStats();
};

