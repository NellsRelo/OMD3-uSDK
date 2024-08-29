#include "OMDCinematicPlayerState.h"
#include "Net/UnrealNetwork.h"

AOMDCinematicPlayerState::AOMDCinematicPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsReady = false;
}

void AOMDCinematicPlayerState::OnRep_bIsReady() {
}

void AOMDCinematicPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOMDCinematicPlayerState, bIsReady);
}


