#include "OMDAISpawner.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "OMDMapDisplayComponent.h"

AOMDAISpawner::AOMDAISpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("SpawnVolume"));
    this->indexInLevel = 1;
    this->maxSpawnPerRow = -1;
    this->bIsActive = true;
    this->bCurrentlyVisibleOnMinimap = false;
    this->SpawnDirection = NULL;
    this->BoxComponent = (UBoxComponent*)RootComponent;
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
    this->RiftFX->SetupAttachment(RootComponent);
}

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


