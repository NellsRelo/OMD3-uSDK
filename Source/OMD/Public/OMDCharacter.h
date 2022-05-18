#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Character -FallbackName=Character
#include "OMDStatusEffectInterface.h"
#include "OMDAbilitySystemInterface.h"
#include "OMDMapDisplayInterface.h"
#include "OMDDialogueInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=GenericTeamId -FallbackName=GenericTeamId
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=GenericTeamAgentInterface -FallbackName=GenericTeamAgentInterface
#include "OMDTargetableInterface.h"
#include "OMDSoftProtoPtr.h"
#include "EAggroGroup.h"
#include "ECharacterWeightClass.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EStatusEffectCategory.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageEvent -FallbackName=DamageEvent
#include "EComboPointType.h"
#include "GenericTeamAgentInterface.h"
#include "GameFramework/Character.h"
#include "Perception/AIPerceptionComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RadialDamageParams -FallbackName=RadialDamageParams
#include "OMDCharacter.generated.h"

class UOMDDialogueComponent;
class UAIPerceptionStimuliSourceComponent;
class UOMDAbilitySystemComponent;
class UOMDLaunchMovementComponent;
class UOMDMapDisplayComponent;
class UOMDStatusEffectComponent;
class UOMDStatusEffect;
class AActor;
class AController;
class UOMDDamageType;

UCLASS()
class OMD_API AOMDCharacter : public ACharacter, public IOMDAbilitySystemInterface, public IOMDStatusEffectInterface, public IGenericTeamAgentInterface, public IOMDTargetableInterface, public IOMDDialogueInterface, public IOMDMapDisplayInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_Protodata)
    FOMDSoftProtoPtr protodata;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_IsDead)
    uint8 bIsDead: 1;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, ReplicatedUsing=OnRep_Health)
    float Health;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bCanCauseCollateralDamage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HealthBarZOffset;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOMDDialogueComponent* DialogueComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource;
    
    UPROPERTY(Transient)
    TMap<EAggroGroup, int32> AggroGroupCanIgnore;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOMDAbilitySystemComponent* abilitySystem;
    
    UPROPERTY(BlueprintReadOnly)
    ECharacterWeightClass WeightClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName LaunchBoneName;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOMDLaunchMovementComponent* LaunchMovementComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOMDMapDisplayComponent* MapDisplayComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOMDStatusEffectComponent* StatusEffectComponent;
    
    UPROPERTY()
    UOMDStatusEffect* CurrentVFXStatusEffect;
    
    UPROPERTY()
    UOMDStatusEffect* CurrentAnimStatusEffect;
    
    UPROPERTY()
    TArray<UOMDStatusEffect*> ExpiringStatusEffects;
    
    UPROPERTY(ReplicatedUsing=OnRep_CurrentVFXStatusEffect)
    FOMDSoftProtoPtr CurrentVFXStatusEffectProto;
    
    UPROPERTY(ReplicatedUsing=OnRep_CurrentAnimStatusEffect)
    FOMDSoftProtoPtr CurrentAnimStatusEffectProto;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    float StatusEffectMovementModifier;
    
public:
    AOMDCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetWeightClass(ECharacterWeightClass newWeightClass);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowAggro(bool AllowAggro);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void RequestDialogue(FName concept);
    
protected:
    UFUNCTION()
    void OnRep_Protodata();
    
    UFUNCTION()
    void OnRep_IsDead();
    
    UFUNCTION()
    void OnRep_Health(float oldHealth);
    
    UFUNCTION()
    void OnRep_CurrentVFXStatusEffect();
    
    UFUNCTION()
    void OnRep_CurrentAnimStatusEffect();
    
public:
    UFUNCTION()
    void OnLaunchSimulationStop(const FHitResult& ImpactResult);
    
protected:
    UFUNCTION()
    void OnLaunchCollision(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_ReceiveRespawned();
    
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_Ground();
    
public:
    UFUNCTION()
    void Ground();
    
    UFUNCTION(BlueprintPure)
    float GetMaxHealth() const;
    
    UFUNCTION(BlueprintPure)
    float GetHealth() const;
    
    UFUNCTION(BlueprintPure)
    FGenericTeamId GetGenericTeamId() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetAttackPoint(FVector attackSourceLocation, AActor* attackSource);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void GatherRadialTargets(UPARAM(Ref) TArray<AActor*>& OutTargets, const FVector& Origin, float Radius, const TArray<AActor*>& IgnoreActors, AController* InstigatedByController, TEnumAsByte<ECollisionChannel> visibilityChannel);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent)
    void BP_ServerDeath(float Damage, const FDamageEvent& DamageEvent, AController* eventInstigator, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_Respawned();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_RadialDamageTaken(float Damage, const UOMDDamageType* DamageType, const FRadialDamageParams& Params, FVector Origin, const TArray<FHitResult>& ComponentHits, AActor* DamageCauser, bool dotDamage);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_PointDamageTaken(float Damage, const UOMDDamageType* DamageType, const FVector& ShotDirection, const FHitResult& HitInfo, AActor* DamageCauser, bool dotDamage);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_Launched();
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_HealthChanged();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_Ground();
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_Death();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_ControllerChanged(AController* NewController);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_AnyDamageTaken(float Damage, const UOMDDamageType* DamageType, AActor* DamageCauser, bool dotDamage);
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveStatusEffectComboPoint(UClass* StatusEffectClass, EComboPointType comboPointType) override PURE_VIRTUAL(RemoveStatusEffectComboPoint,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool RemoveStatusEffect(int32 ID) override PURE_VIRTUAL(RemoveStatusEffect, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    int32 HasVisualStatusEffect(EStatusEffectCategory StatusEffectCategory) const override PURE_VIRTUAL(HasVisualStatusEffect, return 0;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void HasStatusEffect(TArray<int32>& outArray, FOMDSoftProtoPtr statusEffectProtoData) const override PURE_VIRTUAL(HasStatusEffect,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AActor* GetStatusEffectCauser(int32 ID) const override PURE_VIRTUAL(GetStatusEffectCauser, return NULL;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool CanRemoveStatusEffect(int32 ID) const override PURE_VIRTUAL(CanRemoveStatusEffect, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool CanApplyStatusEffect(FOMDSoftProtoPtr NewProtodata, AActor* effectCauser, AController* NewInstigator) const override PURE_VIRTUAL(CanApplyStatusEffect, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ApplyStatusEffectComboPoint(UClass* StatusEffectClass, EComboPointType comboPointType) override PURE_VIRTUAL(ApplyStatusEffectComboPoint,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    int32 ApplyStatusEffect(FOMDSoftProtoPtr NewProtodata, AActor* effectCauser, AController* NewInstigator, float overrideDuration) override PURE_VIRTUAL(ApplyStatusEffect, return 0;);
    
};

