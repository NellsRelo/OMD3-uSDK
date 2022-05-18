#pragma once
#include "CoreMinimal.h"
#include "OMDModalWidget.h"
#include "EGameDifficulty.h"
#include "OMDSoftProtoPtr.h"
#include "OMDLeaderboardWidget.generated.h"

UCLASS(EditInlineNew)
class OMD_API UOMDLeaderboardWidget : public UOMDModalWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 EntriesPerPage;
    
    UPROPERTY(BlueprintReadOnly)
    int32 lastPage;
    
    UPROPERTY(BlueprintReadOnly)
    int32 CurrentPage;
    
    UPROPERTY(BlueprintReadOnly)
    bool bShowingFriends;
    
    UPROPERTY(BlueprintReadOnly)
    EGameDifficulty CurrentDifficulty;
    
    UPROPERTY(BlueprintReadOnly)
    bool bSoloGame;
    
    UPROPERTY(BlueprintReadOnly)
    bool bWeeklyChallenge;
    
    UPROPERTY(BlueprintReadOnly)
    bool bRandomMode;
    
    UPROPERTY(BlueprintReadOnly)
    FOMDSoftProtoPtr CurrentCampaign;
    
    UPROPERTY(BlueprintReadOnly)
    FOMDSoftProtoPtr CurrentMission;
    
    UPROPERTY(BlueprintReadOnly)
    FText CurrentMissionName;
    
public:
    UOMDLeaderboardWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateSoloFilter(bool isSolo);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMissionFilter(FOMDSoftProtoPtr newMission);
    
    UFUNCTION(BlueprintCallable)
    void UpdateGameModeFilter(bool isStory);
    
    UFUNCTION(BlueprintCallable)
    void UpdateDifficultyFilter(EGameDifficulty newDifficulty);
    
    UFUNCTION(BlueprintCallable)
    void ToggleFriendsFilter();
    
    UFUNCTION(BlueprintCallable)
    void SetPageBasedOnRank(int32 Rank);
    
    UFUNCTION(BlueprintCallable)
    void SetLastPageFromCount(int32 EntryCount);
    
    UFUNCTION(BlueprintCallable)
    void SetLastPage(int32 NewLastPage);
    
    UFUNCTION(BlueprintCallable)
    void RefreshLeaderboards(bool resetPage);
    
    UFUNCTION(BlueprintCallable)
    void PageUp();
    
    UFUNCTION(BlueprintCallable)
    void PageDown();
    
    UFUNCTION(BlueprintCallable)
    void MoveToPage(int32 newPage);
    
    UFUNCTION(BlueprintCallable)
    bool IsAltEntry(int32 entryIdx);
    
    UFUNCTION(BlueprintCallable)
    int32 GetStartingRankForPage(int32 page);
    
    UFUNCTION(BlueprintCallable)
    int32 GetPageForRank(int32 Rank);
    
    UFUNCTION(BlueprintCallable)
    int32 GetLastIdx(int32 EntryCount);
    
    UFUNCTION(BlueprintCallable)
    int32 GetFirstIdx();
    
    UFUNCTION(BlueprintCallable)
    void FindCurrentPlayerGlobalRank();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_UpdateSoloFilter();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_UpdateMissionFilter();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_UpdateDifficultyFilter();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_RefreshLeaderboards();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_InitializeFilters();
    
};

