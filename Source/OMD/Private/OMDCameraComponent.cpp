#include "OMDCameraComponent.h"

FVector2D UOMDCameraComponent::GetViewportSize() const {
    return FVector2D{};
}

UOMDCameraComponent::UOMDCameraComponent() {
    this->bShowBlackBars = false;
}

