#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "EAggroGroup.h"
#include "ECharacterWeightClass.h"
#include "EComboPointType.h"
#include "EStatusEffectCategory.h"
#include "OMDAbilitySystemInterface.h"
#include "OMDDialogueInterface.h"
#include "OMDMapDisplayInterface.h"
#include "OMDSoftProtoPtr.h"
#include "OMDStatusEffectInterface.h"
#include "OMDTargetableInterface.h"
#include "OMDCharacter.generated.h"

class AActor;
class AController;
class UAIPerceptionStimuliSourceComponent;
class UOMDAbilitySystemComponent;
class UOMDDamageType;
class UOMDDialogueComponent;
class UOMDLaunchMovementComponent;
class UOMDMapDisplayComponent;
class UOMDStatusEffect;
class UOMDStatusEffectComponent;

UCLASS(Blueprintable)
class OMD_API AOMDCharacter : public ACharacter, public IOMDAbilitySystemInterface, public IOMDStatusEffectInterface, public IGenericTeamAgentInterface, public IOMDTargetableInterface, public IOMDDialogueInterface, public IOMDMapDisplayInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Protodata, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr protodata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsDead, meta=(AllowPrivateAccess=true))
    uint8 bIsDead: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Health, meta=(AllowPrivateAccess=true))
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanCauseCollateralDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthBarZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOMDDialogueComponent* DialogueComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EAggroGroup, int32> AggroGroupCanIgnore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOMDAbilitySystemComponent* abilitySystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterWeightClass WeightClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LaunchBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOMDLaunchMovementComponent* LaunchMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOMDMapDisplayComponent* MapDisplayComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOMDStatusEffectComponent* StatusEffectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOMDStatusEffect* CurrentVFXStatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOMDStatusEffect* CurrentAnimStatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOMDStatusEffect*> ExpiringStatusEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentVFXStatusEffect, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr CurrentVFXStatusEffectProto;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentAnimStatusEffect, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr CurrentAnimStatusEffectProto;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float StatusEffectMovementModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 VisualStatusEffectFlags;
    
public:
    AOMDCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetWeightClass(ECharacterWeightClass newWeightClass);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowAggro(bool AllowAggro);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void RequestDialogue(FName concept);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Protodata();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsDead();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Health(float oldHealth);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentVFXStatusEffect();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentAnimStatusEffect();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnLaunchSimulationStop(const FHitResult& ImpactResult);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnLaunchCollision(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_ReceiveRespawned();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_Ground();
    
public:
    UFUNCTION(BlueprintCallable)
    void Ground();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGenericTeamId GetGenericTeamId() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetAttackPoint(FVector attackSourceLocation, AActor* attackSource);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void GatherRadialTargets(UPARAM(Ref) TArray<AActor*>& OutTargets, const FVector& Origin, float Radius, const TArray<AActor*>& IgnoreActors, AController* InstigatedByController, TEnumAsByte<ECollisionChannel> visibilityChannel);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void BP_ServerDeath(float Damage, const FDamageEvent& DamageEvent, AController* eventInstigator, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_Respawned();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_RadialDamageTaken(float Damage, const UOMDDamageType* DamageType, const FRadialDamageParams& Params, FVector Origin, const TArray<FHitResult>& ComponentHits, AActor* DamageCauser, bool dotDamage);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_PointDamageTaken(float Damage, const UOMDDamageType* DamageType, const FVector& ShotDirection, const FHitResult& HitInfo, AActor* DamageCauser, bool dotDamage);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Launched();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_HealthChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Ground();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_Death();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_ControllerChanged(AController* NewController);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_AnyDamageTaken(float Damage, const UOMDDamageType* DamageType, AActor* DamageCauser, bool dotDamage);
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveStatusEffectComboPoint(UClass* StatusEffectClass, EComboPointType comboPointType) override PURE_VIRTUAL(RemoveStatusEffectComboPoint,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool RemoveStatusEffect(int32 ID) override PURE_VIRTUAL(RemoveStatusEffect, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool HasVisualStatusEffect(EStatusEffectCategory StatusEffectCategory) const override PURE_VIRTUAL(HasVisualStatusEffect, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void HasStatusEffect(TArray<int32>& outArray, FOMDSoftProtoPtr statusEffectProtoData) const override PURE_VIRTUAL(HasStatusEffect,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    int32 GetStatusEffectIdByVisualCategory(EStatusEffectCategory StatusEffectCategory) const override PURE_VIRTUAL(GetStatusEffectIdByVisualCategory, return 0;);
    
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

