#include "OMDOnlineBeaconHostObj.h"
#include "OMDOnlineBeaconClient.h"

AOMDOnlineBeaconHostObj::AOMDOnlineBeaconHostObj(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClientBeaconActorClass = AOMDOnlineBeaconClient::StaticClass();
    this->LobbyState = NULL;
}


