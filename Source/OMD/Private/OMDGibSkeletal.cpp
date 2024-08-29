#include "OMDGibSkeletal.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SkeletalMeshComponent.h"

AOMDGibSkeletal::AOMDGibSkeletal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->Mesh = (USkeletalMeshComponent*)RootComponent;
    this->FXMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FX Mesh"));
    this->blood = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("blood"));
    this->FXMesh->SetupAttachment(RootComponent);
    this->blood->SetupAttachment(RootComponent);
}


