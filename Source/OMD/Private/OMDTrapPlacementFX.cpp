#include "OMDTrapPlacementFX.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent







AOMDTrapPlacementFX::AOMDTrapPlacementFX() {
    this->InterpolateBlendAlpha = 0.00f;
    this->bIsGridVisible = false;
    this->bUseTriggerVolume = true;
    this->TrapInterpolateSpeed = 20.00f;
    this->MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComponent"));
    this->TriggerVolume = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TriggerVolume"));
    this->CurrentStatus = EPlacementStatus::Placeable;
}

