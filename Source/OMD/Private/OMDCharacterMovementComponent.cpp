#include "OMDCharacterMovementComponent.h"

void UOMDCharacterMovementComponent::StopMovement() {
}

void UOMDCharacterMovementComponent::ResumeDefaultMovement() {
}

UOMDCharacterMovementComponent::UOMDCharacterMovementComponent() {
    this->AnimationSpeedScale = 1.00f;
    this->ReverseSpeedScale = 0.70f;
    this->ReverseMinAngle = 100.00f;
    this->SprintingSpeedScale = 1.50f;
    this->SprintingMaxAngle = 50.00f;
    this->TargetingSpeedScale = 0.50f;
}

