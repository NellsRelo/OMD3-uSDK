#pragma once
#include "CoreMinimal.h"
#include "OMDAICharacter.h"
#include "OMDAICharacterAbilityProto.h"
#include "OMDAICharacterGuardian.generated.h"

class AOMDTrap;

UCLASS()
class OMD_API AOMDAICharacterGuardian : public AOMDAICharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_IsRecovering)
    bool bIsRecovering;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_IsIdleOnPodium)
    bool bIsIdleOnPodium;
    
    UPROPERTY()
    FOMDAICharacterAbilityProto RecoveryAbilityProto;
    
public:
    AOMDAICharacterGuardian();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetIsRecovering(bool newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIsIdleOnPodium(bool newValue);
    
protected:
    UFUNCTION()
    void OnRep_IsRecovering();
    
    UFUNCTION()
    void OnRep_IsIdleOnPodium();
    
public:
    UFUNCTION(BlueprintPure)
    AOMDTrap* GetSpawnedFromTrap() const;
    
};

