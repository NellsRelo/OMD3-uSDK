#include "OMDAIAttachmentStatic.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

AOMDAIAttachmentStatic::AOMDAIAttachmentStatic() {
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->FXMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FX Mesh"));
}

