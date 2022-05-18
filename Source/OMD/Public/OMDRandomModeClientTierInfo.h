#pragma once
#include "CoreMinimal.h"
#include "OMDRandomModeClientTierInfo.generated.h"

USTRUCT(BlueprintType)
struct FOMDRandomModeClientTierInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<int32> SelectedBuffs;
    
    UPROPERTY()
    int32 SelectedDebuff;
    
    UPROPERTY()
    int32 SelectedMission;
    
    UPROPERTY()
    int32 TierScore;
    
    UPROPERTY()
    int32 EnemiesKilled;
    
    UPROPERTY()
    int32 TrapsPlaced;
    
    UPROPERTY()
    int32 PlayerDeaths;
    
    UPROPERTY()
    int32 TimeSpent;
    
    OMD_API FOMDRandomModeClientTierInfo();
};

