#pragma once
#include "CoreMinimal.h"
#include "OnlineBeaconHostObject.h"
#include "OMDOnlineBeaconHostObj.generated.h"

class AOMDLobbyBeaconState;

UCLASS(Blueprintable, NonTransient)
class OMD_API AOMDOnlineBeaconHostObj : public AOnlineBeaconHostObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AOMDLobbyBeaconState* LobbyState;
    
public:
    AOMDOnlineBeaconHostObj(const FObjectInitializer& ObjectInitializer);

};

