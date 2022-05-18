#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=GenericTeamId -FallbackName=GenericTeamId
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=GenericTeamAgentInterface -FallbackName=GenericTeamAgentInterface
#include "GenericTeamAgentInterface.h"
#include "OMDTargetableInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "OMDAbilityActor.generated.h"

class AController;

UCLASS()
class OMD_API AOMDAbilityActor : public AActor, public IGenericTeamAgentInterface, public IOMDTargetableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DestructionDelayTime;
    
    UPROPERTY(Replicated)
    FUniqueNetIdRepl NetworkOwner;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    float Health;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxHealth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HealthBarZOffset;
    
public:
    AOMDAbilityActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetGenericTeamID(FGenericTeamId toSetTo);
    
protected:
    UFUNCTION()
    void OnDestructionDelayTimer();
    
public:
    UFUNCTION(BlueprintPure)
    AController* GetNetworkOwner() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnBeginDestruction();
    
    
    // Fix for true pure virtual functions not being implemented
};

