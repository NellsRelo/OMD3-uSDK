#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "OMDLobbyPlayerArray.h"
#include "OMDLobbyBeaconState.generated.h"

UCLASS(Blueprintable, NotPlaceable, Transient)
class OMD_API AOMDLobbyBeaconState : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FOMDLobbyPlayerArray PlayerArray;
    
    AOMDLobbyBeaconState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

