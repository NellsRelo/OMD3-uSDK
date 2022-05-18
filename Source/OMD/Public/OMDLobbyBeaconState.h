#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "OMDLobbyPlayerArray.h"
#include "OMDLobbyBeaconState.generated.h"

UCLASS(NotPlaceable, Transient)
class OMD_API AOMDLobbyBeaconState : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Replicated)
    FOMDLobbyPlayerArray PlayerArray;
    
    AOMDLobbyBeaconState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

