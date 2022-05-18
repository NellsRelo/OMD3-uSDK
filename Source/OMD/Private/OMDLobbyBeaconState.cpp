#include "OMDLobbyBeaconState.h"
#include "Net/UnrealNetwork.h"

void AOMDLobbyBeaconState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOMDLobbyBeaconState, PlayerArray);
}

AOMDLobbyBeaconState::AOMDLobbyBeaconState() {
}

