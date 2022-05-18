#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerState -FallbackName=PlayerState
#include "OMDCinematicPlayerState.generated.h"

UCLASS()
class OMD_API AOMDCinematicPlayerState : public APlayerState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(ReplicatedUsing=OnRep_bIsReady)
    bool bIsReady;
    
public:
    AOMDCinematicPlayerState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnRep_bIsReady();
    
};

