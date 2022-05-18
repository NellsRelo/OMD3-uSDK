#include "OMDLobbyPlayerState.h"
#include "Net/UnrealNetwork.h"

void AOMDLobbyPlayerState::OnRep_Skin() {
}

void AOMDLobbyPlayerState::OnRep_IsReady() {
}

void AOMDLobbyPlayerState::OnRep_Character() {
}

void AOMDLobbyPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOMDLobbyPlayerState, PlayerId);
    DOREPLIFETIME(AOMDLobbyPlayerState, PlayerName);
    DOREPLIFETIME(AOMDLobbyPlayerState, Character);
    DOREPLIFETIME(AOMDLobbyPlayerState, Skin);
    DOREPLIFETIME(AOMDLobbyPlayerState, bIsReady);
}

AOMDLobbyPlayerState::AOMDLobbyPlayerState() {
    this->bIsReady = false;
}

