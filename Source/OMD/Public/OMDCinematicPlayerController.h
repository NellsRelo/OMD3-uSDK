#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "OMDCinematicPlayerController.generated.h"

UCLASS(Blueprintable)
class OMD_API AOMDCinematicPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    AOMDCinematicPlayerController(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_NotifyReady();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_NotifyReadyToTravel();
    
};

