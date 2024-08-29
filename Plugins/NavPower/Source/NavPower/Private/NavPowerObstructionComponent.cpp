#include "NavPowerObstructionComponent.h"

UNavPowerObstructionComponent::UNavPowerObstructionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PassthroughFlags = 0;
    this->bStartsOff = false;
    this->ObstructionFlags = 0;
}

void UNavPowerObstructionComponent::RemoveObstruction() {
}

void UNavPowerObstructionComponent::CreateObstruction() {
}


