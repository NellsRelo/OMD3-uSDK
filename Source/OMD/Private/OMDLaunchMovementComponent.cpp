#include "OMDLaunchMovementComponent.h"

UOMDLaunchMovementComponent::UOMDLaunchMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WindResistance = 0.00f;
    this->WindResistanceStopSimulatingThreshold = 0.00f;
}


