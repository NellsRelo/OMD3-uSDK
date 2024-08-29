#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "OMDSoftProtoPtr.h"
#include "OMDPlayerState.generated.h"

class AOMDInventory;
class AOMDPlayerState;

UCLASS(Blueprintable, Transient)
class OMD_API AOMDPlayerState : public APlayerState {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOMDStateChangedDelegate, AOMDPlayerState*, PlayerState);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseNPE: 1;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDStateChangedDelegate CurrentCharacterChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDStateChangedDelegate CurrentSkinChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentCharacter, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr CurrentCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentSkin, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr CurrentSkin;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AOMDInventory* WorldInventory;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float HealthRegenRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float MaxHealthModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float ManaCapacityMultiplier;
    
public:
    AOMDPlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetMaxHealthModifier(float modifier);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetManaCapacityMultiplier(float multiplier);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetHealthRegenRate(float Rate);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentSkin();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentCharacter();
    
};

