#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EDeathAnimationCategory.h"
#include "EStatusEffectCategory.h"
#include "EStatusEffectState.h"
#include "OMDDamageVulnerability.h"
#include "Templates/SubclassOf.h"
#include "OMDStatusEffect.generated.h"

class AActor;
class AController;
class UBehaviorTree;
class UOMDDamageType;

UCLASS(Blueprintable)
class OMD_API UOMDStatusEffect : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ExpirationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> effectCauser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AController> Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EStatusEffectState CurrentState;
    
public:
    UOMDStatusEffect();

    UFUNCTION(BlueprintCallable)
    void UpdateExpiration(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsContinousMana() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsContinousDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetVulnerabilities(TArray<FOMDDamageVulnerability>& Vulnerabilities) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetVisualCategoryImmunities(TArray<EStatusEffectCategory>& immunities) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStatusEffectCategory GetVisualCategory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetVFXWeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovementModValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetManaPerTick() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetManaInterval() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetExpirationTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDOTInterval() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDeathAnimationCategory GetDeathAnimationCategory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UOMDDamageType> GetDamageType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDamagePerTick() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStatusEffectState GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentRuntime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAnimWeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBehaviorTree* GetAlternateBehavior() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_OnTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnServerRemove();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnServerDeath();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnServerApply();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_OnRemove();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_OnApply();
    
    UFUNCTION(BlueprintCallable)
    void BeginExpiration();
    
};

