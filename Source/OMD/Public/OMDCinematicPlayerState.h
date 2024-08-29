#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "OMDCinematicPlayerState.generated.h"

UCLASS(Blueprintable)
class OMD_API AOMDCinematicPlayerState : public APlayerState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bIsReady, meta=(AllowPrivateAccess=true))
    bool bIsReady;
    
public:
    AOMDCinematicPlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_bIsReady();
    
};

