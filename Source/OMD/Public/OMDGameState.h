#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameStateBase -FallbackName=GameStateBase
#include "OMDSoftProtoPtr.h"
#include "OMDEndGameParameters.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "OMDGameStats.h"
#include "EOMDScoreType.h"
#include "GameFramework/GameStateBase.h"
#include "OMDGameState.generated.h"

class AOMDGameState;
class AOMDOnslaughtCoordinator;
class AOMDPlayerController;

UCLASS()
class OMD_API AOMDGameState : public AGameStateBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOMDWaveChangedDelegate, AOMDGameState*, GameState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOMDRandomModeBuffSelectedDelegate, AOMDGameState*, GameState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOMDOnslaughtInitializedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOMDBossDelegate, AOMDGameState*, GameState, FOMDSoftProtoPtr, bossProto);
    
    UPROPERTY()
    AOMDOnslaughtCoordinator* OnslaughtCoordinator;
    
protected:
    UPROPERTY(BlueprintReadOnly, Replicated)
    bool bDidWin;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    int32 EnemiesSpawned;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_RiftPoints)
    int32 RiftPoints;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    int32 initialRiftPoints;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    int32 RiftProtectedCount;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    int32 RiftLightningCount;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    int32 RemainingFreeRiftSubtractions;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_IsGoBreakActive)
    bool bIsGoBreakActive;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_IsTimedBreakActive)
    bool bIsTimedBreakActive;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    float OnslaughtTimer;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_CurrentWave)
    int32 CurrentWave;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    int32 MaxWave;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    int32 EndlessIteration;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    int32 EndlessMaxWavePerIteration;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    float FirstWaveStartTime;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    float CompletionTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ScorePerRiftPoint;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ScorePerRiftPointRandomMode;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ScorePerSkull;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ScorePerSecondOverPar;
    
public:
    UPROPERTY(EditDefaultsOnly)
    int32 MinimumKillstreak;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MinimumCombo;
    
    UPROPERTY(BlueprintAssignable)
    FOMDRandomModeBuffSelectedDelegate OnRandomModeBuffSelected;
    
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_SelectedBuff)
    FOMDSoftProtoPtr SelectedBuff;
    
    UPROPERTY(BlueprintAssignable)
    FOMDBossDelegate OnBossSpawned;
    
    UPROPERTY(BlueprintAssignable)
    FOMDBossDelegate OnBossDied;
    
    UPROPERTY(BlueprintAssignable)
    FOMDWaveChangedDelegate OnCurrentWaveChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOMDOnslaughtInitializedDelegate OnOnslaughtInitialized;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    float PlayerRespawnDelay;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    int32 KillStreakCount;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    float KillStreakStartTime;
    
    UPROPERTY(Replicated)
    int32 TotalScore;
    
    UPROPERTY(EditDefaultsOnly)
    FOMDEndGameParameters EndGameParams;
    
public:
    AOMDGameState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintImplementableEvent)
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
    
    UFUNCTION(BlueprintImplementableEvent)
    void RiftPointsChanged(int32 previousRiftPoints, int32 currentRiftPoints);
    
    UFUNCTION(BlueprintCallable)
    void RecordSkullsPickedUp(int32 count);
    
    UFUNCTION()
    void OnRep_SelectedBuff();
    
protected:
    UFUNCTION()
    void OnRep_RiftPoints(int32 previousRiftPoints);
    
    UFUNCTION()
    void OnRep_IsTimedBreakActive();
    
    UFUNCTION()
    void OnRep_IsGoBreakActive();
    
    UFUNCTION()
    void OnRep_CurrentWave();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnLoadingScreenRemoved();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadingScreenAdded();
    
    UFUNCTION()
    void OnKillstreakEnded();
    
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_TryEndGame(bool didWin, uint8 skulls, FOMDGameStats stats);
    
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_StreamConnectSettingChanged(bool streamConnectIsEnabled, FUniqueNetIdRepl eventInstigator);
    
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_NotifyBossSpawned(FOMDSoftProtoPtr bossProto);
    
protected:
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_HandleNewCombo(int32 Points, FUniqueNetIdRepl eventInstigator);
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_GameStarting(bool bFailedTrapCheck);
    
    UFUNCTION(BlueprintCallable)
    void ModifyInitialRiftPoints(int32 riftPointsInitial, bool isTemporary);
    
    UFUNCTION(BlueprintImplementableEvent)
    void InitialRiftPointsSet(int32 initialRiftPointCount);
    
    UFUNCTION(BlueprintCallable)
    bool IncrementRiftProtection();
    
    UFUNCTION(BlueprintCallable)
    bool IncrementRiftLightning(FUniqueNetIdRepl uniquePlayerID, float Damage, float cooldown, float Radius);
    
    UFUNCTION(BlueprintImplementableEvent)
    void GoBreak(bool isGoBreakActive);
    
    UFUNCTION(BlueprintPure)
    int32 GetTotalScore() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRiftPoints();
    
    UFUNCTION(BlueprintPure)
    bool GetRiftIsProtected();
    
    UFUNCTION(BlueprintPure)
    bool GetRiftHasLightning();
    
    UFUNCTION(BlueprintPure)
    int32 GetRemainingFreeRiftSubtractions();
    
    UFUNCTION(BlueprintCallable)
    float GetParTimerValue();
    
    UFUNCTION(BlueprintPure)
    float GetKillstreakPercentRemaining();
    
    UFUNCTION(BlueprintPure)
    int32 GetKillStreakCountMin();
    
    UFUNCTION(BlueprintPure)
    int32 GetKillStreakCount();
    
    UFUNCTION(BlueprintPure)
    bool GetIsWaitingOnPlayerToJoinBeforeFirstWave();
    
    UFUNCTION(BlueprintPure)
    bool GetIsLocalPlayerGoBreakReady();
    
    UFUNCTION(BlueprintPure)
    bool GetIsGameEnded();
    
    UFUNCTION(BlueprintPure)
    int32 GetInitialRiftPoints();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCoinEarned();
    
    UFUNCTION(BlueprintImplementableEvent)
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

