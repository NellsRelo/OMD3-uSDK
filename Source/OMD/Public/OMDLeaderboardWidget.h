#pragma once
#include "CoreMinimal.h"
#include "EGameDifficulty.h"
#include "OMDModalWidget.h"
#include "OMDSoftProtoPtr.h"
#include "OMDLeaderboardWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OMD_API UOMDLeaderboardWidget : public UOMDModalWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EntriesPerPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 lastPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowingFriends;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameDifficulty CurrentDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSoloGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWeeklyChallenge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr CurrentCampaign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr CurrentMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdateSoloFilter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdateMissionFilter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdateDifficultyFilter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_RefreshLeaderboards();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_InitializeFilters();
    
};

