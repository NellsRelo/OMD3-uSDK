#include "OMDTrapRemovalFX.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"

AOMDTrapRemovalFX::AOMDTrapRemovalFX(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComponent"));
    this->MeshComponent->SetupAttachment(RootComponent);
}

void AOMDTrapRemovalFX::NetMulticast_Sold_Implementation() {
}

void AOMDTrapRemovalFX::NetMulticast_Killed_Implementation() {
}




