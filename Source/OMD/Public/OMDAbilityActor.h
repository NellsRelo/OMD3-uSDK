#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "GenericTeamAgentInterface.h"
#include "GameFramework/Actor.h"
#include "GameFramework/OnlineReplStructs.h"
#include "OMDTargetableInterface.h"
#include "OMDAbilityActor.generated.h"

class AController;

UCLASS(Blueprintable)
class OMD_API AOMDAbilityActor : public AActor, public IGenericTeamAgentInterface, public IOMDTargetableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestructionDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl NetworkOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthBarZOffset;
    
public:
    AOMDAbilityActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetGenericTeamID(FGenericTeamId toSetTo);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDestructionDelayTimer();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AController* GetNetworkOwner() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnBeginDestruction();
    

    // Fix for true pure virtual functions not being implemented
};

