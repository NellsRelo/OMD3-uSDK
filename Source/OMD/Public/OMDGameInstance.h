#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineBaseTypes.h"
#include "Engine/GameInstance.h"
#include "EBeaconAckStatus.h"
#include "EBeaconDisconnectReason.h"
#include "EBeaconType.h"
#include "EGameDifficulty.h"
#include "EJoinFailureReason.h"
#include "EMissionLaunchMode.h"
#include "EOMDMessageBoxResult.h"
#include "EOMDSaveOperationError.h"
#include "ESessionFailureReason.h"
#include "EUserPermissionsErrorTypes.h"
#include "OMDGameStats.h"
#include "OMDMissionStats.h"
#include "OMDOnlineSearchResult.h"
#include "OMDSoftProtoPtr.h"
#include "OMDStatsRegistry.h"
#include "Templates/SubclassOf.h"
#include "OMDGameInstance.generated.h"

class AGameModeBase;
class APlayerController;
class UMaterial;
class UOMDEntitlementCache;
class UOMDOnlineManager;
class UOMDSaveGame;
class UWorld;

UCLASS(Blueprintable, NonTransient)
class OMD_API UOMDGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUserLoginComplete);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FUserLoginChangedDelegate, int32, localUser, bool, bWasLoggedIn, bool, bIsLoggedIn);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FShaderPipelineDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReceivedClientAckDelegate, EBeaconAckStatus, Status);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMissionChangedDelegate, FOMDSoftProtoPtr, Mission);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLeaderboardPermissionsCacheUpdated);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FJoinedAsClientDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDifficultyChangedDelegate, EGameDifficulty, Difficulty);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShaderPipelineDelegate OnShaderPipelinePrecompileBegan;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShaderPipelineDelegate OnShaderPipelinePrecompileComplete;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UOMDSaveGame> DefaultSaveGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOMDSaveGame* SaveGame;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionChangedDelegate OnMissionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDifficultyChangedDelegate OnDifficultyChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReceivedClientAckDelegate OnReceivedClientAck;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJoinedAsClientDelegate OnJoinedAsClientDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOMDSoftProtoPtr> CampaignList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr CurrentCampaign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr CurrentMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr StoryCampaign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr WeeklyChallengeCampaign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr EndlessCampaign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr DLCCampaign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr RandomModeCampaign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOMDSoftProtoPtr> HostUnlockedMissions;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDGameStats LastGameStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDMissionStats OldMissionStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDidWin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDidCompleteCampaign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDidGrantItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RiftPointSkulls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BonusSkulls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBonusSkullHighScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBonusSkullHighCombo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBonusSkullKillStreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBonusSkullCompletionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBonusSkullPerfectVictory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBonusSkullPerfectVictoryNoDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBonusSkullEndlessWavesCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BonusSkullsMinionsKilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BonusSkullsEndlessWaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ApprenticeBonusSkulls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WarMageBonusSkulls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 initialRiftPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDStatsRegistry playerStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGameHasUserFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInPostGameMenus;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveWeeklyChallengeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeeklyChallengeUTCOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeeklyChallengeStartYear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeeklyChallengeStartMonth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeeklyChallengeStartDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DaysInWeeklyChallengeWeek;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOMDEntitlementCache* EntitlementCache;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bJustFinishedRandomModeCampaign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomModeSetupAsClient;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AIOverlapPerfMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AIMovementComponentMaxSkippedFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AILerpmeshSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AITargetingEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ProjUsePool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PerfShowHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BackKeyActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AcceptKeyActions;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLeaderboardPermissionsCacheUpdated OnLeaderboardPermissionsCacheUpdated;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserLoginChangedDelegate OnUserLoginChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserLoginComplete OnUserLoginComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterial> TrapGridRevealMaterial;
    
public:
    UOMDGameInstance();

    UFUNCTION(BlueprintCallable)
    void UpdateWCEngagementActivities();
    
    UFUNCTION(BlueprintCallable)
    void UpdateTrophyEngagementActivities();
    
    UFUNCTION(BlueprintCallable)
    void UpdateScrambleEngagmentActivities();
    
    UFUNCTION(BlueprintCallable)
    bool UpdateMissionGrants();
    
    UFUNCTION(BlueprintCallable)
    void UpdateEndlessEngagementActivities(bool bNewHighScore);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCampaignEngagementActivities(const FOMDSoftProtoPtr& Mission, const FOMDSoftProtoPtr& campaign, EGameDifficulty Difficulty, uint8 newSkulls, bool bNewHighScore);
    
    UFUNCTION(BlueprintCallable)
    void ShowInviteFriendOverlay();
    
    UFUNCTION(BlueprintCallable)
    void ShowCoOpProfile();
    
    UFUNCTION(BlueprintCallable)
    void SetSessionPlayedWC();
    
    UFUNCTION(BlueprintCallable)
    void SetSessionPlayedScramble();
    
    UFUNCTION(BlueprintCallable)
    void SetSessionPlayedEndless();
    
    UFUNCTION(BlueprintCallable)
    void SetSessionNewHS();
    
    UFUNCTION(BlueprintCallable)
    void SetOnlinePlayerReady(bool bIsReady);
    
    UFUNCTION(BlueprintCallable)
    void SetGameIntegrity(float newIntegrity);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentMission(FOMDSoftProtoPtr Mission);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentDifficulty(EGameDifficulty Difficulty);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentCampaign(FOMDSoftProtoPtr campaign);
    
    UFUNCTION(BlueprintCallable)
    void SetCachedLeaderboardLoginState(bool NewState);
    
    UFUNCTION(BlueprintCallable)
    void SelectMissionAndDebuffForTierByProto(int32 tier, FOMDSoftProtoPtr debuffProto, int32 missionChoice);
    
    UFUNCTION(BlueprintCallable)
    void SelectMissionAndDebuffForTier(int32 tier, int32 debuffChoice, int32 missionChoice);
    
    UFUNCTION(BlueprintCallable)
    void SelectAdditionalBuffForTierByProto(int32 tier, FOMDSoftProtoPtr buffProto);
    
    UFUNCTION(BlueprintCallable)
    void SelectAdditionalBuffForTier(int32 tier, int32 buff);
    
    UFUNCTION(BlueprintCallable)
    void ReturnToDefaultMap();
    
    UFUNCTION(BlueprintCallable)
    void RetrySave();
    
    UFUNCTION(BlueprintCallable)
    bool ResetSaveGame();
    
    UFUNCTION(BlueprintCallable)
    void RerollDebuffFromTier(int32 tierToReroll, int32 choiceToStartAt);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool RequireLeaderboardPermissions();
    
    UFUNCTION(BlueprintCallable)
    bool ReleaseOnlineGame();
    
    UFUNCTION(BlueprintCallable)
    void RefreshPurchaseReceipts(APlayerController* Player);
    
    UFUNCTION(BlueprintCallable)
    void RefreshLeaderboardPermissionsCache(bool notifyOnComplete);
    
    UFUNCTION(BlueprintCallable)
    void ReconnectToHost();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Perf_GetHUDVisibility();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSessionParticipantLeft();
    
    UFUNCTION(BlueprintCallable)
    void OnSessionParticipantJoined();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnReceivedSessionFailure(ESessionFailureReason failureReason);
    
    UFUNCTION(BlueprintCallable)
    void OnPreClientTravel(const FString& pendingURL, ETravelType TravelType, bool bIsSeamlessTravel);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerDisconnectedNonTravel(const FString& PlayerName);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerConnected(const FString& PlayerName);
    
    UFUNCTION(BlueprintCallable)
    void OnOnlineGameHostedComplete(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    void OnOnlineGameHostedBegan(bool isPendingCreate);
    
    UFUNCTION(BlueprintCallable)
    void OnJoinedAsClient();
    
    UFUNCTION()
    void OnHostStreamSubscriptionReady(const int64& ClientPlayerId, const FString& streamUrl);
    
    UFUNCTION(BlueprintCallable)
    void OnGamesListComplete(const TArray<FOMDOnlineSearchResult>& SearchResults);
    
    UFUNCTION(BlueprintCallable)
    void OnGameJoinComplete(bool bWasSuccessful, EJoinFailureReason reason);
    
    UFUNCTION(BlueprintCallable)
    void OnGameJoinBegan(bool bPendingJoin);
    
    UFUNCTION(BlueprintCallable)
    void OnGameDestroyedComplete(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    void OnFriendInviteAccepted(const FOMDOnlineSearchResult& searchResult);
    
    UFUNCTION(BlueprintCallable)
    void OnClientLaunchGame(const FString& travelURL);
    
    UFUNCTION(BlueprintCallable)
    void OnBeaconFailedToConnect(EBeaconType Type, EBeaconDisconnectReason DisconnectReason);
    
    UFUNCTION(BlueprintCallable)
    void NotifyGameWillLaunch();
    
    UFUNCTION(BlueprintCallable)
    void NotifyDebuffChoices();
    
    UFUNCTION(BlueprintCallable)
    bool JoinOnlineGame(const FOMDOnlineSearchResult& searchResult);
    
    UFUNCTION(BlueprintCallable)
    bool IsValidGame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShaderPipelinePrecompileComplete() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSavingEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerReadyToTravel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInRandomModeCampaign() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEntitledToSkin(FOMDSoftProtoPtr OMDPlayerSkinProto) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEntitledToRandomModeModifier(FOMDSoftProtoPtr OMDRandomModeModifierProto) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEntitledToMission(FOMDSoftProtoPtr OMDMissionProto) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEntitledToItem(FOMDSoftProtoPtr OMDItemProto) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEntitledToCampaign(FOMDSoftProtoPtr OMDCampaignProto) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAutoLoginComplete() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeRandomMode();
    
    UFUNCTION(BlueprintCallable)
    void IncrementSessionMissions();
    
    UFUNCTION(BlueprintCallable)
    void IncrementItemsUpgraded();
    
    UFUNCTION(BlueprintCallable)
    void HostOnlineGame(const FString& serverName, const FString& mapName, bool bIsLan, int32 MaxPlayers, bool bShouldAdvertise);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasInviteFriendOverlay() const;
    
    UFUNCTION(BlueprintCallable)
    bool HasFinishedCurrentCampaign();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEntitlement(FOMDSoftProtoPtr OMDEntitlementProto) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCachedLeaderboardPermissions();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleClientLeftGameAcknowledged(EOMDMessageBoxResult Result);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleClientAck(EBeaconAckStatus Status);
    
    UFUNCTION(BlueprintPure)
    int64 GetPostgamePlayerStat(const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPlayerNickname(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    UOMDOnlineManager* GetOnlineManager();
    
    UFUNCTION(BlueprintCallable)
    void GetOnlineGamesList(const TArray<FOMDSoftProtoPtr>& buckets, FOMDSoftProtoPtr Mission, EGameDifficulty Difficulty, bool bFilterDifficulty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetNextWeeklyChallengeTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNextWeeklyChallengeIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOMDSoftProtoPtr GetNextWeeklyChallenge() const;
    
    UFUNCTION(BlueprintCallable)
    FOMDSoftProtoPtr GetNextMission();
    
    UFUNCTION(BlueprintCallable)
    FString GetMissionLevelName(TSoftObjectPtr<UWorld> worldObj);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMissionLaunchMode GetMissionLaunchMode() const;
    
    UFUNCTION(BlueprintCallable)
    float GetGameIntegrity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentWeeklyChallengeIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOMDSoftProtoPtr GetCurrentWeeklyChallenge() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FOMDSoftProtoPtr> GetCurrentMissionList();
    
    UFUNCTION(BlueprintCallable)
    FString GetCurrentMissionLevelName();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCampaignProgress();
    
    UFUNCTION(BlueprintCallable)
    void ForceReturnToDefaultMap();
    
    UFUNCTION(BlueprintCallable)
    void FinishAcceptingFriendInvite();
    
    UFUNCTION(BlueprintCallable)
    FOMDSoftProtoPtr FindCampaignByName(FText campaignName, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void EstablishOnlineLink(EBeaconType BeaconType);
    
    UFUNCTION(BlueprintCallable)
    void EnableSaving();
    
    UFUNCTION(BlueprintCallable)
    void DoServerTravel(const FString& travelPath, TSoftClassPtr<AGameModeBase> GameModeClass);
    
    UFUNCTION(BlueprintCallable)
    bool DoMisionGrants(bool bIsPremission);
    
    UFUNCTION(BlueprintCallable)
    void DoClientTravel(const FString& travelURL);
    
    UFUNCTION(BlueprintCallable)
    bool DestroyOnlineGame(bool notify);
    
    UFUNCTION(BlueprintCallable)
    void CompleteRandomMode(bool didWin);
    
    UFUNCTION(BlueprintCallable)
    void ClientLeftGame();
    
    UFUNCTION(BlueprintCallable)
    void ClearLeaderboardPermissionsCache();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanLaunchGame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAccessLeaderboards();
    
    UFUNCTION(BlueprintCallable)
    void CacheLeaderboardPermissions(bool Result, EUserPermissionsErrorTypes primaryResult, const TArray<EUserPermissionsErrorTypes>& allResults);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UserSettingsSaveFinished(bool Result);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UserLoginChanged(int32 localUser, bool bWasLoggedIn, bool bIsLoggedIn, bool bWasInSession);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BP_ShouldAcceptFriendInvite();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShaderPipelinePrecompileComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShaderPipelinePrecompileBegan();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ScreenChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SaveStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SaveFinished(bool Result);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SaveFailedToLoad(EOMDSaveOperationError saveGameReason, EOMDSaveOperationError userSettingsReason);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnStartingToHost(bool isCreatePending);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnSessionParticipantLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnSessionParticipantJoined();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnSessionFailure(ESessionFailureReason reason);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPreClientTravel(const FString& pendingURL, ETravelType TravelType, bool bIsSeamlessTravel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPlayerDisconnectedNonTravel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnLacksEntitlementForCampaign(FOMDSoftProtoPtr OMDCampaignProto);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnJoiningGame(const FOMDOnlineSearchResult& searchResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnGamesListFound(const TArray<FOMDOnlineSearchResult>& SearchResults);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnGameJoined(bool bSuccess, EJoinFailureReason reason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnGameJoinBegan(bool bPendingJoin);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnGameHosted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnGameFailedToHost();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnGameDestroyed(bool bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnFriendInviteSent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnFriendInviteAccepted(const FOMDOnlineSearchResult& searchResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnClientUpdateRandomMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnClientMissionAndDebuffChosen(int32 tier, int32 missionIndex, int32 debuffIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnClientLaunchGame(const FString& travelURL);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnClientInitializeRandomMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnClientDebuffRerolled(int32 tier, int32 newDebuffIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnClientBuffChosen(int32 tier, int32 buffIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnBeaconFailedToConnect(EBeaconDisconnectReason DisconnectReason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnActivityIntentReceived_Trophy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnActivityIntentReceived_Scramble();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnActivityIntentReceived_Campaign();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_LevelLoadFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_LevelAddedToWorld();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_InitiateLeaderboardPermissionsCheck();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_FriendInviteInvalid();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_EndGame();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ControllerConnectionChange(bool bConnected, int32 ControllerId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_CompletedCurrentCampaign();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ClientLeftGame();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_CinematicFinished();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_BeginAcceptingFriendInvite();
    
    UFUNCTION(BlueprintCallable)
    void BeginRandomModeGame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AI_GetOverlapPerfMode() const;
    
    UFUNCTION(BlueprintCallable)
    bool AdvanceMission();
    
    UFUNCTION(BlueprintCallable)
    void AdjustGameIntegrity(float adjustment);
    
    UFUNCTION(BlueprintCallable)
    void AddSessionSkulls(int32 skulls);
    
    UFUNCTION(BlueprintCallable)
    void AddSessionKills(int32 kills);
    
    UFUNCTION(BlueprintCallable)
    void AcceptPendingInviteIfValid();
    
};

