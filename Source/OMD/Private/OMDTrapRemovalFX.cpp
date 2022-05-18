#include "OMDTrapRemovalFX.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

void AOMDTrapRemovalFX::NetMulticast_Sold_Implementation() {
}

void AOMDTrapRemovalFX::NetMulticast_Killed_Implementation() {
}



AOMDTrapRemovalFX::AOMDTrapRemovalFX() {
    this->MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComponent"));
}

