#include "OMDAIPawn.h"
#include "OMDAIPawnMovementComponent.h"
#include "Components/CapsuleComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

AOMDAIPawn::AOMDAIPawn() {
    this->MovementComponent = CreateDefaultSubobject<UOMDAIPawnMovementComponent>(TEXT("MovementComponent0"));
    this->CollisionComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionComponent0"));
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComponent0"));
    this->BehaviorTree = NULL;
    this->Spawner = NULL;
}

