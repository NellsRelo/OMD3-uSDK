#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EOnslaughtDifficulty.h"
#include "OMDSoftProtoPtr.h"
#include "OnslaughtFormationRow.h"
#include "SpawnerInfo.h"
#include "Templates/SubclassOf.h"
#include "OMDOnslaughtCoordinator.generated.h"

class AOMDAICharacter;
class AOMDAIWispCharacter;
class APawn;

UCLASS(Blueprintable)
class OMD_API AOMDOnslaughtCoordinator : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAICharacters_PS4_XBOXONE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAICharacters_Coop_PS4_XBOXONE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 maxAICharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultWaveTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultGroupTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultEntityTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultEntitySideSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultPostGoBreakTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultStartingCoin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RiftPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AOMDAIWispCharacter> WispClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AOMDAIWispCharacter> OptimizedWispClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AOMDAIWispCharacter> FlyerWispClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AOMDAIWispCharacter> OptimizedFlyerWispClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AOMDAIWispCharacter> HeavyWispClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AOMDAIWispCharacter> OptimizedHeavyWispClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBetweenWisps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FSpawnerInfo> SpawnerInfoMap;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AOMDAIWispCharacter>> SpawnedWisps;
    
public:
    AOMDOnslaughtCoordinator(const FObjectInitializer& ObjectInitializer);

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
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreWave(int32 WaveNumber, int32 SpawnerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostWave(int32 WaveNumber, int32 SpawnerIndex);
    
    UFUNCTION(BlueprintCallable)
    void PawnHasDied(APawn* deadPawn);
    
protected:
    UFUNCTION(BlueprintCallable)
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
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Onslaught_Start(int32 WaveNumber, int32 SpawnerIndex);
    
    UFUNCTION(BlueprintCallable)
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSet<FOMDSoftProtoPtr> GetEnemyClasses();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEndlessIteration();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoOnslaughtAction(const FString& ActionName);
    
};

