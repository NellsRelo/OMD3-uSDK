#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerController -FallbackName=PlayerController
#include "OMDCinematicPlayerController.generated.h"

UCLASS()
class OMD_API AOMDCinematicPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    AOMDCinematicPlayerController();
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_NotifyReady();
    
    UFUNCTION(Client, Reliable)
    void Client_NotifyReadyToTravel();
    
};

