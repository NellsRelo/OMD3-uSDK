#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EStatusEffectState.h"
#include "OMDDamageVulnerability.h"
#include "EStatusEffectCategory.h"
#include "EDeathAnimationCategory.h"
#include "OMDStatusEffect.generated.h"

class UOMDDamageType;
class AController;
class AActor;
class UBehaviorTree;

UCLASS(Blueprintable)
class OMD_API UOMDStatusEffect : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    float StartTime;
    
    UPROPERTY(BlueprintReadOnly)
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    float ExpirationTime;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<AActor> effectCauser;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<AController> Instigator;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EStatusEffectState CurrentState;
    
public:
    UOMDStatusEffect();
    UFUNCTION(BlueprintCallable)
    void UpdateExpiration(float DeltaTime);
    
    UFUNCTION(BlueprintPure)
    bool IsContinousMana() const;
    
    UFUNCTION(BlueprintPure)
    bool IsContinousDamage() const;
    
    UFUNCTION(BlueprintPure)
    void GetVulnerabilities(TArray<FOMDDamageVulnerability>& Vulnerabilities) const;
    
    UFUNCTION(BlueprintPure)
    void GetVisualCategoryImmunities(TArray<EStatusEffectCategory>& immunities) const;
    
    UFUNCTION(BlueprintPure)
    EStatusEffectCategory GetVisualCategory() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetVFXWeight() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetOwner() const;
    
    UFUNCTION(BlueprintPure)
    float GetMovementModValue() const;
    
    UFUNCTION(BlueprintPure)
    float GetManaPerTick() const;
    
    UFUNCTION(BlueprintPure)
    float GetManaInterval() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetID() const;
    
    UFUNCTION(BlueprintPure)
    float GetExpirationTime() const;
    
    UFUNCTION(BlueprintPure)
    float GetDOTInterval() const;
    
    UFUNCTION(BlueprintPure)
    EDeathAnimationCategory GetDeathAnimationCategory() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UOMDDamageType> GetDamageType() const;
    
    UFUNCTION(BlueprintPure)
    float GetDamagePerTick() const;
    
    UFUNCTION(BlueprintPure)
    EStatusEffectState GetCurrentState() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentRuntime() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAnimWeight() const;
    
    UFUNCTION(BlueprintPure)
    UBehaviorTree* GetAlternateBehavior() const;
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_OnTick(float DeltaTime);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnServerRemove();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnServerDeath();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnServerApply();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_OnRemove();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_OnApply();
    
    UFUNCTION(BlueprintCallable)
    void BeginExpiration();
    
};

