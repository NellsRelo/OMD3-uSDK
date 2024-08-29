#include "OMDGibStatic.h"
#include "Components/StaticMeshComponent.h"

AOMDGibStatic::AOMDGibStatic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->Mesh = (UStaticMeshComponent*)RootComponent;
    this->FXMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FX Mesh"));
    this->FXMesh->SetupAttachment(RootComponent);
}


