#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "OMDSoftProtoPtr.h"
#include "SpawnerInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EOnslaughtDifficulty.h"
#include "OnslaughtFormationRow.h"
#include "OMDOnslaughtCoordinator.generated.h"

class AOMDAIWispCharacter;
class AOMDAICharacter;
class APawn;

UCLASS()
class OMD_API AOMDOnslaughtCoordinator : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 MaxAICharacters_PS4_XBOXONE;
    
    UPROPERTY(EditAnywhere)
    int32 MaxAICharacters_Coop_PS4_XBOXONE;
    
    UPROPERTY(EditAnywhere)
    int32 maxAICharacters;
    
    UPROPERTY(EditAnywhere)
    float DefaultWaveTimer;
    
    UPROPERTY(EditAnywhere)
    float DefaultGroupTimer;
    
    UPROPERTY(EditAnywhere)
    float DefaultEntityTimer;
    
    UPROPERTY(EditAnywhere)
    float DefaultEntitySideSpacing;
    
    UPROPERTY(EditAnywhere)
    float DefaultPostGoBreakTimer;
    
    UPROPERTY(EditAnywhere)
    int32 DefaultStartingCoin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 RiftPoints;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AOMDAIWispCharacter> WispClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AOMDAIWispCharacter> OptimizedWispClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AOMDAIWispCharacter> FlyerWispClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AOMDAIWispCharacter> OptimizedFlyerWispClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AOMDAIWispCharacter> HeavyWispClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AOMDAIWispCharacter> OptimizedHeavyWispClass;
    
    UPROPERTY(EditAnywhere)
    float DelayBetweenWisps;
    
    UPROPERTY()
    TMap<int32, FSpawnerInfo> SpawnerInfoMap;
    
protected:
    UPROPERTY()
    TArray<TWeakObjectPtr<AOMDAIWispCharacter>> SpawnedWisps;
    
public:
    AOMDOnslaughtCoordinator();
    UFUNCTION(BlueprintCallable)
    bool SpawnEntityFromEntity(AOMDAICharacter* fromEntity, FOMDSoftProtoPtr OMDAICharacterProto, int32 numToSpawn, TArray<APawn*>& outSpawned);
    
    UFUNCTION(BlueprintCallable)
    bool SpawnEntityForEntity(AOMDAICharacter* ControllingCharacter, FVector positionToSpawn, FRotator rotationToSpawn, FOMDSoftProtoPtr AICharacterProtoToSpawn, int32 numToSpawn, bool bMarkAsResurrected, TArray<APawn*>& outSpawned);
    
    UFUNCTION(BlueprintCallable)
    void SetFirstWaveCoin(int32 firstWaveCoin);
    
    UFUNCTION(BlueprintCallable)
    void SetAllAICharactersClass(FName Name);
    
    UFUNCTION(BlueprintCallable)
    void SetAllAICharactersAmount(int32 amountPerSpawn);
    
    UFUNCTION(BlueprintCallable)
    void ResetOnslaught();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PreWave(int32 WaveNumber, int32 SpawnerIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PostWave(int32 WaveNumber, int32 SpawnerIndex);
    
    UFUNCTION(BlueprintCallable)
    void PawnHasDied(APawn* deadPawn);
    
protected:
    UFUNCTION()
    void OnWispSpawnTimer();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnslaughtWaveBreak(float waveBreakTimer, EOnslaughtDifficulty Difficulty);
    
    UFUNCTION(BlueprintCallable)
    void OnslaughtStartGroup(float waitUntilPreviousGroupDeadPercent);
    
    UFUNCTION(BlueprintCallable)
    void OnslaughtSpawnEntitiesFormation(TArray<FOnslaughtFormationRow> spawnEntityRows, EOnslaughtDifficulty Difficulty);
    
    UFUNCTION(BlueprintCallable)
    void OnslaughtSpawnEntities(FOMDSoftProtoPtr OMDAICharacterProto, int32 count, bool SpawnWithShield, int32 EndlessAddCount, float EndlessPromotePercent, EOnslaughtDifficulty Difficulty);
    
    UFUNCTION(BlueprintCallable)
    void OnslaughtGoBreak(EOnslaughtDifficulty Difficulty);
    
    UFUNCTION(BlueprintCallable)
    void OnslaughtGiveCoin(int32 amount, EOnslaughtDifficulty Difficulty);
    
    UFUNCTION(BlueprintCallable)
    void OnslaughtEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnslaughtDelay(float Delay, EOnslaughtDifficulty Difficulty);
    
    UFUNCTION(BlueprintCallable)
    void OnslaughtAction(const FString& ActionName, EOnslaughtDifficulty Difficulty);
    
    UFUNCTION(BlueprintImplementableEvent)
    void Onslaught_Start(int32 WaveNumber, int32 SpawnerIndex);
    
    UFUNCTION()
    void OnRiftEntered(AActor* Actor, FVector RiftLocation);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumPawnsWaitingForSpawn();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumPawnsApprovedForSpawn();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumPawnsAlive();
    
    UFUNCTION(BlueprintCallable)
    int32 GetMaxAICharacters();
    
    UFUNCTION(BlueprintCallable)
    int32 GetFirstWaveCoin();
    
    UFUNCTION(BlueprintPure)
    TSet<FOMDSoftProtoPtr> GetEnemyClasses();
    
    UFUNCTION(BlueprintPure)
    int32 GetEndlessIteration();
    
    UFUNCTION(BlueprintImplementableEvent)
    void DoOnslaughtAction(const FString& ActionName);
    
};

