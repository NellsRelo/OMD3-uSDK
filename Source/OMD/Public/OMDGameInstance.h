#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EOMDMessageBoxResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstance -FallbackName=GameInstance
#include "OMDSoftProtoPtr.h"
#include "EBeaconDisconnectReason.h"
#include "EBeaconAckStatus.h"
#include "EGameDifficulty.h"
#include "OMDGameStats.h"
#include "OMDMissionStats.h"
#include "OMDStatsRegistry.h"
#include "ESessionFailureReason.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETravelType -FallbackName=ETravelType
#include "OMDOnlineSearchResult.h"
#include "EJoinFailureReason.h"
#include "EBeaconType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "EMissionLaunchMode.h"
#include "EUserPermissionsErrorTypes.h"
#include "EOMDSaveOperationError.h"
#include "OMDGameInstance.generated.h"

class UOMDSaveGame;
class UMaterial;
class UOMDOnlineManager;
class UWorld;
class AGameModeBase;

UCLASS(NonTransient)
class OMD_API UOMDGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FUserLoginChangedDelegate, int32, localUser, bool, bWasLoggedIn, bool, bIsLoggedIn);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FShaderPipelineDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReceivedClientAckDelegate, EBeaconAckStatus, Status);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMissionChangedDelegate, FOMDSoftProtoPtr, Mission);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLeaderboardPermissionsCacheUpdated);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FJoinedAsClientDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDifficultyChangedDelegate, EGameDifficulty, Difficulty);
    
    UPROPERTY(BlueprintAssignable)
    FShaderPipelineDelegate OnShaderPipelinePrecompileBegan;
    
    UPROPERTY(BlueprintAssignable)
    FShaderPipelineDelegate OnShaderPipelinePrecompileComplete;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UOMDSaveGame> DefaultSaveGame;
    
    UPROPERTY(BlueprintReadOnly)
    UOMDSaveGame* SaveGame;
    
public:
    UPROPERTY(BlueprintAssignable)
    FMissionChangedDelegate OnMissionChanged;
    
    UPROPERTY(BlueprintAssignable)
    FDifficultyChangedDelegate OnDifficultyChanged;
    
    UPROPERTY(BlueprintAssignable)
    FReceivedClientAckDelegate OnReceivedClientAck;
    
    UPROPERTY(BlueprintAssignable)
    FJoinedAsClientDelegate OnJoinedAsClientDelegate;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    TArray<FOMDSoftProtoPtr> CampaignList;
    
    UPROPERTY(BlueprintReadOnly)
    FOMDSoftProtoPtr CurrentCampaign;
    
    UPROPERTY(BlueprintReadOnly)
    FOMDSoftProtoPtr CurrentMission;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDSoftProtoPtr StoryCampaign;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDSoftProtoPtr WeeklyChallengeCampaign;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDSoftProtoPtr EndlessCampaign;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDSoftProtoPtr DLCCampaign;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDSoftProtoPtr RandomModeCampaign;
    
    UPROPERTY()
    TArray<FOMDSoftProtoPtr> HostUnlockedMissions;
    
public:
    UPROPERTY(BlueprintReadOnly)
    FOMDGameStats LastGameStats;
    
    UPROPERTY(BlueprintReadOnly)
    FOMDMissionStats OldMissionStats;
    
    UPROPERTY(BlueprintReadOnly)
    bool bDidWin;
    
    UPROPERTY(BlueprintReadOnly)
    bool bDidCompleteCampaign;
    
    UPROPERTY(BlueprintReadOnly)
    bool bDidGrantItem;
    
    UPROPERTY(BlueprintReadOnly)
    int32 RiftPointSkulls;
    
    UPROPERTY(BlueprintReadOnly)
    int32 BonusSkulls;
    
    UPROPERTY(BlueprintReadOnly)
    bool bBonusSkullHighScore;
    
    UPROPERTY(BlueprintReadOnly)
    bool bBonusSkullHighCombo;
    
    UPROPERTY(BlueprintReadOnly)
    bool bBonusSkullKillStreak;
    
    UPROPERTY(BlueprintReadOnly)
    bool bBonusSkullCompletionTime;
    
    UPROPERTY(BlueprintReadOnly)
    bool bBonusSkullPerfectVictory;
    
    UPROPERTY(BlueprintReadOnly)
    bool bBonusSkullPerfectVictoryNoDamage;
    
    UPROPERTY(BlueprintReadOnly)
    bool bBonusSkullEndlessWavesCompleted;
    
    UPROPERTY(BlueprintReadOnly)
    int32 BonusSkullsMinionsKilled;
    
    UPROPERTY(BlueprintReadOnly)
    int32 BonusSkullsEndlessWaves;
    
    UPROPERTY(BlueprintReadOnly)
    int32 ApprenticeBonusSkulls;
    
    UPROPERTY(BlueprintReadOnly)
    int32 WarMageBonusSkulls;
    
    UPROPERTY(BlueprintReadOnly)
    int32 initialRiftPoints;
    
    UPROPERTY()
    FOMDStatsRegistry playerStats;
    
    UPROPERTY(BlueprintReadWrite)
    bool bGameHasUserFocus;
    
    UPROPERTY(BlueprintReadWrite)
    bool bIsInPostGameMenus;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 ActiveWeeklyChallengeCount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 WeeklyChallengeUTCOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 WeeklyChallengeStartYear;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 WeeklyChallengeStartMonth;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 WeeklyChallengeStartDay;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 DaysInWeeklyChallengeWeek;
    
public:
    UPROPERTY(BlueprintReadWrite)
    bool bJustFinishedRandomModeCampaign;
    
    UPROPERTY()
    bool bRandomModeSetupAsClient;
    
protected:
    UPROPERTY()
    bool AIOverlapPerfMode;
    
    UPROPERTY()
    int32 AIMovementComponentMaxSkippedFrames;
    
    UPROPERTY()
    float AILerpmeshSpeed;
    
    UPROPERTY()
    bool AITargetingEnabled;
    
    UPROPERTY()
    bool ProjUsePool;
    
    UPROPERTY()
    bool PerfShowHUD;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FName> BackKeyActions;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FName> AcceptKeyActions;
    
public:
    UPROPERTY(BlueprintAssignable)
    FLeaderboardPermissionsCacheUpdated OnLeaderboardPermissionsCacheUpdated;
    
protected:
    UPROPERTY(BlueprintAssignable)
    FUserLoginChangedDelegate OnUserLoginChanged;
    
    UPROPERTY(EditDefaultsOnly)
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
    
    UFUNCTION()
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
    
    UFUNCTION(BlueprintPure)
    bool RequireLeaderboardPermissions();
    
    UFUNCTION(BlueprintCallable)
    bool ReleaseOnlineGame();
    
    UFUNCTION(BlueprintCallable)
    void RefreshLeaderboardPermissionsCache(bool notifyOnComplete);
    
    UFUNCTION(BlueprintCallable)
    void ReconnectToHost();
    
    UFUNCTION(BlueprintPure)
    bool Perf_GetHUDVisibility();
    
protected:
    UFUNCTION()
    void OnSessionParticipantLeft();
    
    UFUNCTION()
    void OnSessionParticipantJoined();
    
public:
    UFUNCTION()
    void OnReceivedSessionFailure(ESessionFailureReason failureReason);
    
    UFUNCTION()
    void OnPreClientTravel(const FString& pendingURL, TEnumAsByte<ETravelType> TravelType, bool bIsSeamlessTravel);
    
    UFUNCTION()
    void OnPlayerDisconnectedNonTravel(const FString& PlayerName);
    
    UFUNCTION()
    void OnPlayerConnected(const FString& PlayerName);
    
    UFUNCTION()
    void OnOnlineGameHostedComplete(bool bWasSuccessful);
    
    UFUNCTION()
    void OnOnlineGameHostedBegan(bool isPendingCreate);
    
    UFUNCTION(BlueprintCallable)
    void OnJoinedAsClient();
    
    UFUNCTION()
    void OnHostStreamSubscriptionReady(const int64& ClientPlayerId, const FString& streamUrl);
    
    UFUNCTION()
    void OnGamesListComplete(const TArray<FOMDOnlineSearchResult>& SearchResults);
    
    UFUNCTION()
    void OnGameJoinComplete(bool bWasSuccessful, EJoinFailureReason reason);
    
    UFUNCTION()
    void OnGameJoinBegan(bool bPendingJoin);
    
    UFUNCTION()
    void OnGameDestroyedComplete(bool bWasSuccessful);
    
    UFUNCTION()
    void OnFriendInviteAccepted(const FOMDOnlineSearchResult& searchResult);
    
    UFUNCTION()
    void OnClientLaunchGame(const FString& travelURL);
    
    UFUNCTION()
    void OnBeaconFailedToConnect(EBeaconType Type, EBeaconDisconnectReason DisconnectReason);
    
    UFUNCTION(BlueprintCallable)
    void NotifyGameWillLaunch();
    
    UFUNCTION(BlueprintCallable)
    void NotifyDebuffChoices();
    
    UFUNCTION(BlueprintCallable)
    bool JoinOnlineGame(const FOMDOnlineSearchResult& searchResult);
    
    UFUNCTION()
    bool IsValidGame();
    
    UFUNCTION(BlueprintPure)
    bool IsShaderPipelinePrecompileComplete() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSavingEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayerReadyToTravel() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInRandomModeCampaign() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEntitledToSkin(FOMDSoftProtoPtr OMDPlayerSkinProto) const;
    
    UFUNCTION(BlueprintPure)
    bool IsEntitledToRandomModeModifier(FOMDSoftProtoPtr OMDRandomModeModifierProto) const;
    
    UFUNCTION(BlueprintPure)
    bool IsEntitledToMission(FOMDSoftProtoPtr OMDMissionProto) const;
    
    UFUNCTION(BlueprintPure)
    bool IsEntitledToItem(FOMDSoftProtoPtr OMDItemProto) const;
    
    UFUNCTION(BlueprintPure)
    bool IsEntitledToCampaign(FOMDSoftProtoPtr OMDCampaignProto) const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeRandomMode();
    
    UFUNCTION(BlueprintCallable)
    void IncrementSessionMissions();
    
    UFUNCTION(BlueprintCallable)
    void IncrementItemsUpgraded();
    
    UFUNCTION(BlueprintCallable)
    void HostOnlineGame(const FString& serverName, const FString& mapName, bool bIsLan, int32 MaxPlayers, bool bShouldAdvertise);
    
    UFUNCTION(BlueprintPure)
    bool HasInviteFriendOverlay() const;
    
    UFUNCTION(BlueprintCallable)
    bool HasFinishedCurrentCampaign();
    
    UFUNCTION(BlueprintPure)
    bool HasEntitlement(FOMDSoftProtoPtr OMDEntitlementProto) const;
    
    UFUNCTION(BlueprintPure)
    bool HasCachedLeaderboardPermissions();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleClientLeftGameAcknowledged(EOMDMessageBoxResult Result);
    
public:
    UFUNCTION()
    void HandleClientAck(EBeaconAckStatus Status);
    
    UFUNCTION(BlueprintPure)
    int64 GetPostgamePlayerStat(const FString& Name);
    
    UFUNCTION(BlueprintPure)
    FString GetPlayerNickname(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    UOMDOnlineManager* GetOnlineManager();
    
    UFUNCTION(BlueprintCallable)
    void GetOnlineGamesList(const TArray<FOMDSoftProtoPtr>& buckets, FOMDSoftProtoPtr Mission, EGameDifficulty Difficulty, bool bFilterDifficulty);
    
    UFUNCTION(BlueprintPure)
    FDateTime GetNextWeeklyChallengeTime() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNextWeeklyChallengeIndex() const;
    
    UFUNCTION(BlueprintPure)
    FOMDSoftProtoPtr GetNextWeeklyChallenge() const;
    
    UFUNCTION(BlueprintCallable)
    FOMDSoftProtoPtr GetNextMission();
    
    UFUNCTION(BlueprintCallable)
    FString GetMissionLevelName(TSoftObjectPtr<UWorld> worldObj);
    
    UFUNCTION(BlueprintPure)
    EMissionLaunchMode GetMissionLaunchMode() const;
    
    UFUNCTION()
    float GetGameIntegrity();
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentWeeklyChallengeIndex() const;
    
    UFUNCTION(BlueprintPure)
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
    
    UFUNCTION(BlueprintPure)
    bool CanLaunchGame() const;
    
    UFUNCTION(BlueprintPure)
    bool CanAccessLeaderboards();
    
    UFUNCTION(BlueprintCallable)
    void CacheLeaderboardPermissions(bool Result, EUserPermissionsErrorTypes primaryResult, const TArray<EUserPermissionsErrorTypes>& allResults);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_UserSettingsSaveFinished(bool Result);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_UserLoginChanged(int32 localUser, bool bWasLoggedIn, bool bIsLoggedIn, bool bWasInSession);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    bool BP_ShouldAcceptFriendInvite();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_ShaderPipelinePrecompileComplete();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_ShaderPipelinePrecompileBegan();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_ScreenChanged();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_SaveStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_SaveFinished(bool Result);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_SaveFailedToLoad(EOMDSaveOperationError saveGameReason, EOMDSaveOperationError userSettingsReason);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnStartingToHost(bool isCreatePending);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnSessionParticipantLeft();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnSessionParticipantJoined();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnSessionFailure(ESessionFailureReason reason);
    
public:
    // TODO: Figure out how to get this to build. .gen.h file doesn't like it for some reason 
    //UFUNCTION(BlueprintImplementableEvent)
    //void BP_OnPreClientTravel(const FString& pendingURL, TEnumAsByte<ETravelType> TravelType, bool bIsSeamlessTravel);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnPlayerDisconnectedNonTravel();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnLacksEntitlementForCampaign(FOMDSoftProtoPtr OMDCampaignProto);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnJoiningGame(const FOMDOnlineSearchResult& searchResult);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnGamesListFound(const TArray<FOMDOnlineSearchResult>& SearchResults);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnGameJoined(bool bSuccess, EJoinFailureReason reason);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnGameJoinBegan(bool bPendingJoin);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnGameHosted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnGameFailedToHost();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnGameDestroyed(bool bSuccess);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnFriendInviteSent();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnFriendInviteAccepted(const FOMDOnlineSearchResult& searchResult);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnClientUpdateRandomMode();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnClientMissionAndDebuffChosen(int32 tier, int32 missionIndex, int32 debuffIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnClientLaunchGame(const FString& travelURL);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnClientInitializeRandomMode();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnClientDebuffRerolled(int32 tier, int32 newDebuffIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnClientBuffChosen(int32 tier, int32 buffIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnBeaconFailedToConnect(EBeaconDisconnectReason DisconnectReason);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnActivityIntentReceived_Trophy();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnActivityIntentReceived_Scramble();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnActivityIntentReceived_Campaign();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_LevelLoadFinished();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_LevelAddedToWorld();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_InitiateLeaderboardPermissionsCheck();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_FriendInviteInvalid();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_EndGame();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_ControllerConnectionChange(bool bConnected, int32 ControllerId);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_CompletedCurrentCampaign();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_ClientLeftGame();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_CinematicFinished();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_BeginAcceptingFriendInvite();
    
    UFUNCTION(BlueprintCallable)
    void BeginRandomModeGame();
    
    UFUNCTION(BlueprintPure)
    bool AI_GetOverlapPerfMode() const;
    
    UFUNCTION(BlueprintCallable)
    bool AdvanceMission();
    
    UFUNCTION()
    void AdjustGameIntegrity(float adjustment);
    
    UFUNCTION(BlueprintCallable)
    void AddSessionSkulls(int32 skulls);
    
    UFUNCTION(BlueprintCallable)
    void AddSessionKills(int32 kills);
    
    UFUNCTION(BlueprintCallable)
    void AcceptPendingInviteIfValid();
    
};

