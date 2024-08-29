#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "GameFramework/OnlineReplStructs.h"
#include "EOMDScoreType.h"
#include "OMDEndGameParameters.h"
#include "OMDGameStats.h"
#include "OMDSoftProtoPtr.h"
#include "OMDGameState.generated.h"

class AOMDGameState;
class AOMDOnslaughtCoordinator;
class AOMDPlayerController;

UCLASS(Blueprintable)
class OMD_API AOMDGameState : public AGameStateBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOMDWaveChangedDelegate, AOMDGameState*, GameState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOMDRandomModeBuffSelectedDelegate, AOMDGameState*, GameState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOMDOnslaughtInitializedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOMDBossDelegate, AOMDGameState*, GameState, FOMDSoftProtoPtr, bossProto);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AOMDOnslaughtCoordinator* OnslaughtCoordinator;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bDidWin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 EnemiesSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RiftPoints, meta=(AllowPrivateAccess=true))
    int32 RiftPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 initialRiftPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 RiftProtectedCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 RiftLightningCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 RemainingFreeRiftSubtractions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsGoBreakActive, meta=(AllowPrivateAccess=true))
    bool bIsGoBreakActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsTimedBreakActive, meta=(AllowPrivateAccess=true))
    bool bIsTimedBreakActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float OnslaughtTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentWave, meta=(AllowPrivateAccess=true))
    int32 CurrentWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 MaxWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 EndlessIteration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 EndlessMaxWavePerIteration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float FirstWaveStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float CompletionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScorePerRiftPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScorePerRiftPointRandomMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScorePerSkull;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScorePerSecondOverPar;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimumKillstreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimumCombo;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDRandomModeBuffSelectedDelegate OnRandomModeBuffSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SelectedBuff, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr SelectedBuff;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDBossDelegate OnBossSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDBossDelegate OnBossDied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDWaveChangedDelegate OnCurrentWaveChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDOnslaughtInitializedDelegate OnOnslaughtInitialized;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerRespawnDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 KillStreakCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float KillStreakStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 TotalScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDEndGameParameters EndGameParams;
    
public:
    AOMDGameState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TimedBreak(bool isTimedBreakActive);
    
    UFUNCTION(BlueprintCallable)
    void SetTimedBreakActive(bool IsActive);
    
    UFUNCTION(BlueprintCallable)
    void SetRemainingFreeRiftSubtractions(int32 newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetInitialRiftPoints(int32 riftPointsInitial);
    
    UFUNCTION(BlueprintCallable)
    void SetGoBreakReady(AOMDPlayerController* Player);
    
    UFUNCTION(BlueprintCallable)
    void SetGoBreakActive(bool IsActive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RiftPointsChanged(int32 previousRiftPoints, int32 currentRiftPoints);
    
    UFUNCTION(BlueprintCallable)
    void RecordSkullsPickedUp(int32 count);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SelectedBuff();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RiftPoints(int32 previousRiftPoints);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsTimedBreakActive();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsGoBreakActive();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentWave();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnLoadingScreenRemoved();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadingScreenAdded();
    
    UFUNCTION(BlueprintCallable)
    void OnKillstreakEnded();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_TryEndGame(bool didWin, uint8 skulls, FOMDGameStats stats);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_StreamConnectSettingChanged(bool streamConnectIsEnabled, FUniqueNetIdRepl eventInstigator);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_NotifyBossSpawned(FOMDSoftProtoPtr bossProto);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void NetMulticast_HandleNewCombo(int32 Points, FUniqueNetIdRepl eventInstigator);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_GameStarting(bool bFailedTrapCheck);
    
    UFUNCTION(BlueprintCallable)
    void ModifyInitialRiftPoints(int32 riftPointsInitial, bool isTemporary);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitialRiftPointsSet(int32 initialRiftPointCount);
    
    UFUNCTION(BlueprintCallable)
    bool IncrementRiftProtection();
    
    UFUNCTION(BlueprintCallable)
    bool IncrementRiftLightning(FUniqueNetIdRepl uniquePlayerID, float Damage, float cooldown, float Radius);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GoBreak(bool isGoBreakActive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalScore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRiftPoints();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRiftIsProtected();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRiftHasLightning();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingFreeRiftSubtractions();
    
    UFUNCTION(BlueprintCallable)
    float GetParTimerValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetKillstreakPercentRemaining();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetKillStreakCountMin();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetKillStreakCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsWaitingOnPlayerToJoinBeforeFirstWave();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsLocalPlayerGoBreakReady();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsGameEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInitialRiftPoints();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCoinEarned();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GameEnded();
    
    UFUNCTION(BlueprintCallable)
    bool DecrementRiftProtection();
    
    UFUNCTION(BlueprintCallable)
    bool DecrementRiftLightning(FUniqueNetIdRepl uniquePlayerID);
    
    UFUNCTION(BlueprintCallable)
    void ClearEndGameTimers();
    
    UFUNCTION(BlueprintCallable)
    void AddScore(int32 Score, EOMDScoreType Type);
    
};

