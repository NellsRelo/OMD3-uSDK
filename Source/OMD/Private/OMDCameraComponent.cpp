#include "OMDCameraComponent.h"

UOMDCameraComponent::UOMDCameraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShowBlackBars = false;
}

FVector2D UOMDCameraComponent::GetViewportSize() const {
    return FVector2D{};
}


