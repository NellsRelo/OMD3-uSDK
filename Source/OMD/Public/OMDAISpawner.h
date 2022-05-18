#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "OMDMapDisplayInterface.h"
#include "OMDSoftProtoPtr.h"
#include "OMDAISpawner.generated.h"

class UBoxComponent;
class UArrowComponent;
class AOMDDoor;
class AOMDPathPoint;
class UParticleSystemComponent;
class UOMDMapDisplayComponent;
class APawn;

UCLASS()
class OMD_API AOMDAISpawner : public AActor, public IOMDMapDisplayInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCNBAISPawnerOnAllPawnsDeadSignature, const FString&, SpawnerName);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 indexInLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 maxSpawnPerRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCurrentlyVisibleOnMinimap;
    
protected:
    UPROPERTY(Export)
    UArrowComponent* SpawnDirection;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UBoxComponent* BoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bActivateAtStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSpawnAtCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MinSpawnCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxSpawnCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpawnDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOMDSoftProtoPtr SpawnProtodata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bInvulnerableOnSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinRespawnDelay;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 CurrentAliveCount;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 MaxAliveCount;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 NumInitiallySpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<AOMDPathPoint> StartingPathPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<AOMDPathPoint> StartingFlyerPathPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<AOMDDoor> StartingDoor;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UParticleSystemComponent* RiftFX;
    
public:
    UPROPERTY(BlueprintAssignable)
    FCNBAISPawnerOnAllPawnsDeadSignature OnAllPawnsDead;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOMDMapDisplayComponent* MapDisplayComponent;
    
public:
    AOMDAISpawner();
    UFUNCTION(BlueprintCallable)
    void PawnHasDied(APawn* deadPawn);
    
protected:
    UFUNCTION()
    void OnDelayedSpawnTimer();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsVorwickRift();
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentAliveCount();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void BeginSpawning(TArray<APawn*>& spawedPawns);
    
    
    // Fix for true pure virtual functions not being implemented
};

