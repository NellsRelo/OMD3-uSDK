#include "OMDTrapGridBoxComponent.h"

UOMDTrapGridBoxComponent::UOMDTrapGridBoxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mobility = EComponentMobility::Static;
    this->TrapPlacementTypes = 1;
    this->TrapWarMachineTypes = 254;
    this->TrapGridRevealPlane = NULL;
}


