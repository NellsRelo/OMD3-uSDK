#include "OMDGibStatic.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

AOMDGibStatic::AOMDGibStatic() {
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->FXMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FX Mesh"));
}

