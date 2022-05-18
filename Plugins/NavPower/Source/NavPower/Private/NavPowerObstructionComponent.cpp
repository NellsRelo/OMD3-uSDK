#include "NavPowerObstructionComponent.h"

void UNavPowerObstructionComponent::RemoveObstruction() {
}

void UNavPowerObstructionComponent::CreateObstruction() {
}

UNavPowerObstructionComponent::UNavPowerObstructionComponent() {
    this->PassthroughFlags = 0;
    this->bStartsOff = false;
    this->ObstructionFlags = 0;
}

