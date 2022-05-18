#include "OMDAISpawner.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
#include "OMDMapDisplayComponent.h"

class APawn;

void AOMDAISpawner::PawnHasDied(APawn* deadPawn) {
}

void AOMDAISpawner::OnDelayedSpawnTimer() {
}

bool AOMDAISpawner::IsVorwickRift_Implementation() {
    return false;
}

int32 AOMDAISpawner::GetCurrentAliveCount() {
    return 0;
}

void AOMDAISpawner::BeginSpawning(TArray<APawn*>& spawedPawns) {
}

AOMDAISpawner::AOMDAISpawner() {
    this->indexInLevel = 1;
    this->maxSpawnPerRow = -1;
    this->bIsActive = true;
    this->bCurrentlyVisibleOnMinimap = false;
    this->SpawnDirection = NULL;
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("SpawnVolume"));
    this->bActivateAtStart = false;
    this->bSpawnAtCenter = false;
    this->MinSpawnCount = 0;
    this->MaxSpawnCount = 0;
    this->SpawnDuration = 0.00f;
    this->bInvulnerableOnSpawn = true;
    this->MinRespawnDelay = 0.00f;
    this->CurrentAliveCount = 0;
    this->MaxAliveCount = 0;
    this->NumInitiallySpawned = 0;
    this->RiftFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("RiftFX"));
    this->MapDisplayComponent = CreateDefaultSubobject<UOMDMapDisplayComponent>(TEXT("MapDisplay"));
}

