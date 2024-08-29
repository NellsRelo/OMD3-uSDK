#include "OMDCinematicPlayerController.h"

AOMDCinematicPlayerController::AOMDCinematicPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
}

void AOMDCinematicPlayerController::Server_NotifyReady_Implementation() {
}
bool AOMDCinematicPlayerController::Server_NotifyReady_Validate() {
    return true;
}

void AOMDCinematicPlayerController::Client_NotifyReadyToTravel_Implementation() {
}


