#include "OMDAIPawn.h"
#include "Components/CapsuleComponent.h"
#include "Engine/EngineTypes.h"
#include "Components/SkeletalMeshComponent.h"
#include "OMDAIPawnMovementComponent.h"

AOMDAIPawn::AOMDAIPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionComponent0"));
    this->MovementComponent = CreateDefaultSubobject<UOMDAIPawnMovementComponent>(TEXT("MovementComponent0"));
    this->CollisionComponent = (UCapsuleComponent*)RootComponent;
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComponent0"));
    this->BehaviorTree = NULL;
    this->Spawner = NULL;
    this->Mesh->SetupAttachment(RootComponent);
}


