#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerState -FallbackName=PlayerState
#include "OMDSoftProtoPtr.h"
#include "GameFramework/PlayerState.h"
#include "OMDPlayerState.generated.h"

class AOMDPlayerState;
class AOMDInventory;

UCLASS(Transient)
class OMD_API AOMDPlayerState : public APlayerState {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOMDStateChangedDelegate, AOMDPlayerState*, PlayerState);
    
    UPROPERTY(BlueprintReadOnly)
    uint8 bUseNPE: 1;
    
protected:
    UPROPERTY(BlueprintAssignable)
    FOMDStateChangedDelegate CurrentCharacterChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOMDStateChangedDelegate CurrentSkinChanged;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_CurrentCharacter)
    FOMDSoftProtoPtr CurrentCharacter;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_CurrentSkin)
    FOMDSoftProtoPtr CurrentSkin;
    
public:
    UPROPERTY(BlueprintReadOnly, Replicated)
    AOMDInventory* WorldInventory;
    
protected:
    UPROPERTY(Replicated, Transient)
    float HealthRegenRate;
    
    UPROPERTY(Replicated, Transient)
    float MaxHealthModifier;
    
    UPROPERTY(Replicated, Transient)
    float ManaCapacityMultiplier;
    
public:
    AOMDPlayerState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetMaxHealthModifier(float modifier);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetManaCapacityMultiplier(float multiplier);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetHealthRegenRate(float Rate);
    
protected:
    UFUNCTION()
    void OnRep_CurrentSkin();
    
    UFUNCTION()
    void OnRep_CurrentCharacter();
    
};

