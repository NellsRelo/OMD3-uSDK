#include "OMDLobbyBeaconState.h"
#include "Net/UnrealNetwork.h"

AOMDLobbyBeaconState::AOMDLobbyBeaconState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDriverName = TEXT("BeaconNetDriver");
}

void AOMDLobbyBeaconState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOMDLobbyBeaconState, PlayerArray);
}


