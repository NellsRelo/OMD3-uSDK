#include "OMDGibSkeletal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent

AOMDGibSkeletal::AOMDGibSkeletal() {
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->FXMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FX Mesh"));
    this->blood = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("blood"));
}

