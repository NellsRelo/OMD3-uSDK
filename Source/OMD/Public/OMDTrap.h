#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "EComboPointType.h"
#include "ESensedTargetSelectionType.h"
#include "EStatusEffectCategory.h"
#include "ETrapActivationType.h"
#include "ETrapPlacementFlags.h"
#include "ETrapState.h"
#include "ETrapTargetAcquisitionType.h"
#include "OMDAbilitySourceInterface.h"
#include "OMDAbilitySystemInterface.h"
#include "OMDComponentOverlappers.h"
#include "OMDMapDisplayInterface.h"
#include "OMDSoftProtoPtr.h"
#include "OMDStatusEffectInterface.h"
#include "OMDTargetableInterface.h"
#include "OMDTrap.generated.h"

class AController;
class AOMDTrap;
class AOMDTrapGrid;
class APawn;
class UAIPerceptionComponent;
class UAIPerceptionStimuliSourceComponent;
class UArrowComponent;
class UBoxComponent;
class UOMDAbilityAttributes;
class UOMDAbilitySystemComponent;
class UOMDDamageType;
class UOMDInventoryItem;
class UOMDMapDisplayComponent;
class UOMDStatusEffectComponent;
class UOMDTrapGridBoxComponent;
class UParticleSystemComponent;
class UPrimitiveComponent;
class UShapeComponent;
class USkeletalMeshComponentBudgeted;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class OMD_API AOMDTrap : public AActor, public IOMDAbilitySystemInterface, public IOMDAbilitySourceInterface, public IGenericTeamAgentInterface, public IOMDTargetableInterface, public IOMDStatusEffectInterface, public IOMDMapDisplayInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUpdateOverlapsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateOverlapsMainTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateOverlapsSecondaryTriggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> OverlappingActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UShapeComponent*, FOMDComponentOverlappers> ComponentOverlappingActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> BeginOverlapActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> EndOverlapActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* GeneratedBoxCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponentBudgeted* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AOMDTrapGrid> MainTrapGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UOMDTrapGridBoxComponent> MainTrapGridBoxComponent;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AOMDTrapGrid>> seamedTrapGrids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* SummonParticleSystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* TriggerDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bPlayerPlaced;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bScenarioDisablesSelling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl TrapOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIPerceptionComponent* PerceptionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* TriggerBoxComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* PerceptionPosition;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOMDAbilitySystemComponent* abilitySystem;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr protodata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHalfSizePlacement;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ETrapActivationType ActivationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ETrapTargetAcquisitionType TargetAcquisitionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESensedTargetSelectionType SensedTargetSelectionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCanBeReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ETrapState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsTriggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsOnCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOMDMapDisplayComponent* MapDisplayComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseWideIcon: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float BaseHealthModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float BaseHealthMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOMDStatusEffectComponent* StatusEffectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AOMDTrap* ParentTrap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AOMDTrap*> ChildTraps;
    
public:
    AOMDTrap(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UsesCharges() const;
    
    UFUNCTION(BlueprintCallable)
    void UpdateOverlapsComponents();
    
    UFUNCTION(BlueprintCallable)
    void UpdateOverlaps();
    
protected:
    UFUNCTION(BlueprintCallable)
    AOMDTrap* TryPlaceAdjacentTrap(FOMDSoftProtoPtr trapToPlace, int32 side);
    
public:
    UFUNCTION(BlueprintCallable)
    bool TryManualActivation();
    
    UFUNCTION(BlueprintCallable)
    void SetResetDelayModifier(float Value);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetState(bool shouldHeal);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemovePermanentDisable();
    
    UFUNCTION(BlueprintCallable)
    void RemoveFromDamageActorList(AActor* Actor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTriggerDurationTimer();
    
    UFUNCTION(BlueprintCallable)
    void OnSenseActor(const TArray<AActor*>& UpdatedActors);
    
    UFUNCTION(BlueprintCallable)
    void OnResetTimer();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCooldownTimer();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnComponentEndOverlap(UShapeComponent* shapeComp, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnComponentBeginOverlap(UShapeComponent* shapeComp, AActor* OtherActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnChargesTimer();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnActorEnter(AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnActorEnd(AActor* OtherActor);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_IsTriggered(bool triggered);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_IsReset(bool Reset);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_IsReady(bool ready);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_IsOnCooldown(bool cooldown);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_IsDisabled(bool Disabled);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_IsActivated(bool activated);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_DispatchDamageTaken(float Damage, const FDamageEvent& DamageEvent, AController* eventInstigator, AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShootable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlacementType(ETrapPlacementFlags trapPlacementFlags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnCooldown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void HealTrap();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAggroCap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTriggerDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUniqueNetIdRepl GetTrapOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSightRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetResetDelay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AController* GetOwningController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxCharges() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UOMDInventoryItem* GetInventoryItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetInteractText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetDamageActorList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentCharges() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCooldown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCollateralDamageValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCoinValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetChargeCooldown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBaseHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UOMDAbilityAttributes* GetAttributes() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetAttackPoint(FVector attackSourceLocation, AActor* attackSource);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateAbility();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ChangeTrapTriggerDisplay(bool NewIsActive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSell(bool bSellingByPlayer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanInteract(APawn* Pawn) const;
    
    UFUNCTION(BlueprintCallable)
    void CancelAbility();
    
    UFUNCTION(BlueprintCallable)
    bool CanBeDisabled();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_TriggerVolumeDynamicallyAdjusted(bool Hit, FHitResult HitResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Sold();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ReEnabled();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Placed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnTrapTriggered(bool triggered);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnTrapReset(bool Reset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnTrapReady(bool ready);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnTrapOnCooldown(bool cooldown);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnTrapActivate(bool activated);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Killed();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HealthHitZero(float Damage, const UOMDDamageType* DamageType, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_Healed(float Damage, const UOMDDamageType* DamageType, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText BP_GetInteractText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Disabled(bool Disabled);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_DamageTaken(float Damage, const UOMDDamageType* DamageType, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_CollateralDamageTaken(float Damage, const UOMDDamageType* DamageType, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_CanSellHover(bool targeted);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BP_CanSell() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_CanInteractHover(bool targeted);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BP_CanInteract(APawn* Pawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_BreakChange(bool bIsGoBreakActive, bool bIsTimedBreakActive);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddToDamageActorList(AActor* Actor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddDisable(float Time);
    

    // Fix for true pure virtual functions not being implemented
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

