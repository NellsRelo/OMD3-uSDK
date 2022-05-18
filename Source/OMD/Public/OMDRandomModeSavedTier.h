#pragma once
#include "CoreMinimal.h"
#include "OMDSoftProtoPtr.h"
#include "OMDRandomModeLevelEntry.h"
#include "OMDRandomModeSavedTier.generated.h"

USTRUCT(BlueprintType)
struct FOMDRandomModeSavedTier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<FOMDSoftProtoPtr> BuffCollection;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FOMDSoftProtoPtr> DebuffCollection;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FOMDRandomModeLevelEntry> MissionCollection;
    
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
    float TimeSpent;
    
    OMD_API FOMDRandomModeSavedTier();
};

