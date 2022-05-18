#include "OMDAIAttachment.h"

class UMeshComponent;

UMeshComponent* AOMDAIAttachment::GetMesh() const {
    return NULL;
}

UMeshComponent* AOMDAIAttachment::GetFXMesh() const {
    return NULL;
}



AOMDAIAttachment::AOMDAIAttachment() {
    this->bPlayerInteractable = false;
}

