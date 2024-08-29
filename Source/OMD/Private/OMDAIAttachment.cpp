#include "OMDAIAttachment.h"

AOMDAIAttachment::AOMDAIAttachment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bPlayerInteractable = false;
}

UMeshComponent* AOMDAIAttachment::GetMesh() const {
    return NULL;
}

UMeshComponent* AOMDAIAttachment::GetFXMesh() const {
    return NULL;
}




