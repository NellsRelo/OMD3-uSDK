#pragma once
#include "CoreMinimal.h"
#include "OnlineBeaconHostObject.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=OnlineBeaconHostObject -FallbackName=OnlineBeaconHostObject
#include "OMDOnlineBeaconHostObj.generated.h"

class AOMDLobbyBeaconState;

UCLASS(NonTransient)
class OMD_API AOMDOnlineBeaconHostObj : public AOnlineBeaconHostObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    AOMDLobbyBeaconState* LobbyState;
    
public:
    AOMDOnlineBeaconHostObj();
};

