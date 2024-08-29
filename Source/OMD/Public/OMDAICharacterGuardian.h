#pragma once
#include "CoreMinimal.h"
#include "OMDAICharacter.h"
#include "OMDAICharacterAbilityProto.h"
#include "OMDAICharacterGuardian.generated.h"

class AOMDTrap;

UCLASS(Blueprintable)
class OMD_API AOMDAICharacterGuardian : public AOMDAICharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsRecovering, meta=(AllowPrivateAccess=true))
    bool bIsRecovering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsIdleOnPodium, meta=(AllowPrivateAccess=true))
    bool bIsIdleOnPodium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDAICharacterAbilityProto RecoveryAbilityProto;
    
public:
    AOMDAICharacterGuardian(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetIsRecovering(bool newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIsIdleOnPodium(bool newValue);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsRecovering();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsIdleOnPodium();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AOMDTrap* GetSpawnedFromTrap() const;
    
};

