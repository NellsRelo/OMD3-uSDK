#include "OMDTrapPlacementFX.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"

AOMDTrapPlacementFX::AOMDTrapPlacementFX(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->InterpolateBlendAlpha = 0.00f;
    this->bIsGridVisible = false;
    this->bUseTriggerVolume = true;
    this->TrapInterpolateSpeed = 20.00f;
    this->MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComponent"));
    this->TriggerVolume = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TriggerVolume"));
    this->CurrentStatus = EPlacementStatus::Placeable;
    this->MeshComponent->SetupAttachment(RootComponent);
    this->TriggerVolume->SetupAttachment(RootComponent);
}








