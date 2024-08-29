#include "OMDTrapMountablePawn.h"
#include "OMDAbilitySystemComponent.h"

AOMDTrapMountablePawn::AOMDTrapMountablePawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->abilitySystem = CreateDefaultSubobject<UOMDAbilitySystemComponent>(TEXT("Ability System"));
    this->RotationScalar = 1.00f;
    this->CameraBoom = NULL;
}

void AOMDTrapMountablePawn::ToggleViews() {
}

void AOMDTrapMountablePawn::Server_ToggleView_Implementation(EOMDCameraStyle cameraStyle) {
}
bool AOMDTrapMountablePawn::Server_ToggleView_Validate(EOMDCameraStyle cameraStyle) {
    return true;
}

void AOMDTrapMountablePawn::Server_Interact_Implementation() {
}
bool AOMDTrapMountablePawn::Server_Interact_Validate() {
    return true;
}

void AOMDTrapMountablePawn::Server_DeactivatePrimary_Implementation() {
}
bool AOMDTrapMountablePawn::Server_DeactivatePrimary_Validate() {
    return true;
}

void AOMDTrapMountablePawn::Server_ActivatePrimary_Implementation() {
}
bool AOMDTrapMountablePawn::Server_ActivatePrimary_Validate() {
    return true;
}


