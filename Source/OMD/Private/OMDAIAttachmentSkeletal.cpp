#include "OMDAIAttachmentSkeletal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

AOMDAIAttachmentSkeletal::AOMDAIAttachmentSkeletal() {
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->FXMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FX Mesh"));
}

