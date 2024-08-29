#include "OMDLobbyPlayerState.h"
#include "Net/UnrealNetwork.h"

AOMDLobbyPlayerState::AOMDLobbyPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDriverName = TEXT("BeaconNetDriver");
    this->bIsReady = false;
}

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


