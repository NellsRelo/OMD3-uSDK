#include "OMDCinematicPlayerState.h"
#include "Net/UnrealNetwork.h"

void AOMDCinematicPlayerState::OnRep_bIsReady() {
}

void AOMDCinematicPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOMDCinematicPlayerState, bIsReady);
}

AOMDCinematicPlayerState::AOMDCinematicPlayerState() {
    this->bIsReady = false;
}

