#include "OMDAIAttachmentSkeletal.h"
#include "Components/SkeletalMeshComponent.h"

AOMDAIAttachmentSkeletal::AOMDAIAttachmentSkeletal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->Mesh = (USkeletalMeshComponent*)RootComponent;
    this->FXMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FX Mesh"));
    this->FXMesh->SetupAttachment(RootComponent);
}


