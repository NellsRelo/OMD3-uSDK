#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "OMDStatusEffectInterface.h"
#include "OMDAbilitySystemInterface.h"
#include "OMDAbilitySourceInterface.h"
#include "OMDComponentOverlappers.h"
#include "OMDMapDisplayInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=GenericTeamAgentInterface -FallbackName=GenericTeamAgentInterface
#include "OMDTargetableInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "OMDSoftProtoPtr.h"
#include "ETrapActivationType.h"
#include "ETrapTargetAcquisitionType.h"
#include "ESensedTargetSelectionType.h"
#include "ETrapState.h"
#include "EStatusEffectCategory.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageEvent -FallbackName=DamageEvent
#include "ETrapPlacementFlags.h"
#include "EComboPointType.h"
#include "GenericTeamAgentInterface.h"
#include "OMDTrap.generated.h"

class APawn;
class UShapeComponent;
class UOMDAbilityAttributes;
class UPrimitiveComponent;
class UBoxComponent;
class USkeletalMeshComponentBudgeted;
class AOMDTrapGrid;
class UAIPerceptionStimuliSourceComponent;
class UOMDTrapGridBoxComponent;
class UParticleSystemComponent;
class UStaticMeshComponent;
class UAIPerceptionComponent;
class UOMDStatusEffectComponent;
class UArrowComponent;
class UOMDAbilitySystemComponent;
class UOMDMapDisplayComponent;
class AOMDTrap;
class AController;
class UOMDInventoryItem;
class UOMDDamageType;

UCLASS()
class OMD_API AOMDTrap : public AActor, public IOMDAbilitySystemInterface, public IOMDAbilitySourceInterface, public IGenericTeamAgentInterface, public IOMDTargetableInterface, public IOMDStatusEffectInterface, public IOMDMapDisplayInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsUpdateOverlapsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUpdateOverlapsMainTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUpdateOverlapsSecondaryTriggers;
    
    UPROPERTY()
    TArray<AActor*> OverlappingActors;
    
    UPROPERTY()
    TMap<UShapeComponent*, FOMDComponentOverlappers> ComponentOverlappingActors;
    
    UPROPERTY()
    TArray<AActor*> BeginOverlapActors;
    
    UPROPERTY()
    TArray<AActor*> EndOverlapActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UBoxComponent* GeneratedBoxCollision;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponentBudgeted* MeshComponent;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly, Replicated)
    TWeakObjectPtr<AOMDTrapGrid> MainTrapGrid;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly, Export, Replicated)
    TWeakObjectPtr<UOMDTrapGridBoxComponent> MainTrapGridBoxComponent;
    
    UPROPERTY(Replicated)
    TArray<TWeakObjectPtr<AOMDTrapGrid>> seamedTrapGrids;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient, VisibleAnywhere)
    UParticleSystemComponent* SummonParticleSystemComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* TriggerDisplay;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    bool bPlayerPlaced;
    
protected:
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    bool bScenarioDisablesSelling;
    
    UPROPERTY(Replicated)
    FUniqueNetIdRepl TrapOwner;
    
    UPROPERTY(Export, VisibleDefaultsOnly)
    UAIPerceptionComponent* PerceptionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UBoxComponent* TriggerBoxComponent;
    
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UArrowComponent* PerceptionPosition;
    
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UOMDAbilitySystemComponent* abilitySystem;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    FOMDSoftProtoPtr protodata;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUseHalfSizePlacement;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    float Health;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ETrapActivationType ActivationType;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ETrapTargetAcquisitionType TargetAcquisitionType;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ESensedTargetSelectionType SensedTargetSelectionType;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bCanBeReset;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    ETrapState CurrentState;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    bool bIsTriggered;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    bool bIsReset;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    bool bIsActivated;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    bool bIsOnCooldown;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    bool bIsReady;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    bool bIsDisabled;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOMDMapDisplayComponent* MapDisplayComponent;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bUseWideIcon: 1;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    float BaseHealthModifier;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    float BaseHealthMultiplier;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOMDStatusEffectComponent* StatusEffectComponent;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    AOMDTrap* ParentTrap;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    TArray<AOMDTrap*> ChildTraps;
    
public:
    AOMDTrap();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintPure)
    bool UsesCharges() const;
    
    UFUNCTION()
    void UpdateOverlapsComponents();
    
    UFUNCTION()
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
    UFUNCTION()
    void OnTriggerDurationTimer();
    
    UFUNCTION()
    void OnSenseActor(const TArray<AActor*>& UpdatedActors);
    
    UFUNCTION()
    void OnResetTimer();
    
public:
    UFUNCTION()
    void OnEndOverlap(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
protected:
    UFUNCTION()
    void OnCooldownTimer();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnComponentEndOverlap(UShapeComponent* shapeComp, AActor* OtherActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnComponentBeginOverlap(UShapeComponent* shapeComp, AActor* OtherActor);
    
protected:
    UFUNCTION()
    void OnChargesTimer();
    
public:
    UFUNCTION()
    void OnBeginOverlap(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit);
    
    UFUNCTION()
    void OnActorEnter(AActor* OtherActor);
    
    UFUNCTION()
    void OnActorEnd(AActor* OtherActor);
    
protected:
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_IsTriggered(bool triggered);
    
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_IsReset(bool Reset);
    
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_IsReady(bool ready);
    
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_IsOnCooldown(bool cooldown);
    
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_IsDisabled(bool Disabled);
    
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_IsActivated(bool activated);
    
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_DispatchDamageTaken(float Damage, const FDamageEvent& DamageEvent, AController* eventInstigator, AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsShootable();
    
    UFUNCTION(BlueprintPure)
    bool IsReady() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlacementType(ETrapPlacementFlags trapPlacementFlags) const;
    
    UFUNCTION(BlueprintPure)
    bool IsOnCooldown() const;
    
    UFUNCTION(BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void HealTrap();
    
    UFUNCTION(BlueprintPure)
    bool HasAggroCap() const;
    
    UFUNCTION(BlueprintPure)
    float GetTriggerDuration() const;
    
    UFUNCTION(BlueprintPure)
    FUniqueNetIdRepl GetTrapOwner() const;
    
    UFUNCTION(BlueprintPure)
    float GetSightRadius() const;
    
    UFUNCTION(BlueprintPure)
    float GetResetDelay() const;
    
    UFUNCTION(BlueprintPure)
    AController* GetOwningController() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxHealth() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxCharges() const;
    
    UFUNCTION(BlueprintPure)
    UOMDInventoryItem* GetInventoryItem() const;
    
    UFUNCTION(BlueprintPure)
    FText GetInteractText() const;
    
    UFUNCTION(BlueprintPure)
    FText GetDisplayName() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AActor*> GetDamageActorList() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentCharges() const;
    
    UFUNCTION(BlueprintPure)
    float GetCooldown() const;
    
    UFUNCTION(BlueprintPure)
    float GetCollateralDamageValue() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCoinValue() const;
    
    UFUNCTION(BlueprintPure)
    float GetChargeCooldown() const;
    
    UFUNCTION(BlueprintPure)
    float GetBaseHealth() const;
    
    UFUNCTION(BlueprintPure)
    UOMDAbilityAttributes* GetAttributes() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetAttackPoint(FVector attackSourceLocation, AActor* attackSource);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateAbility();
    
    UFUNCTION(BlueprintNativeEvent)
    void ChangeTrapTriggerDisplay(bool NewIsActive);
    
    UFUNCTION(BlueprintPure)
    bool CanSell(bool bSellingByPlayer) const;
    
    UFUNCTION(BlueprintPure)
    bool CanInteract(APawn* Pawn) const;
    
    UFUNCTION(BlueprintCallable)
    void CancelAbility();
    
    UFUNCTION(BlueprintCallable)
    bool CanBeDisabled();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_TriggerVolumeDynamicallyAdjusted(bool Hit, FHitResult HitResult);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_Sold();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_ReEnabled();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_Placed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnTrapTriggered(bool triggered);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnTrapReset(bool Reset);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnTrapReady(bool ready);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnTrapOnCooldown(bool cooldown);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnTrapActivate(bool activated);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_Killed();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_HealthHitZero(float Damage, const UOMDDamageType* DamageType, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_Healed(float Damage, const UOMDDamageType* DamageType, AActor* DamageCauser);
    
    UFUNCTION(BlueprintNativeEvent)
    FText BP_GetInteractText() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_Disabled(bool Disabled);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_DamageTaken(float Damage, const UOMDDamageType* DamageType, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_CollateralDamageTaken(float Damage, const UOMDDamageType* DamageType, AActor* DamageCauser);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_CanSellHover(bool targeted);
    
    UFUNCTION(BlueprintNativeEvent)
    bool BP_CanSell() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_CanInteractHover(bool targeted);
    
    UFUNCTION(BlueprintNativeEvent)
    bool BP_CanInteract(APawn* Pawn) const;
    
    UFUNCTION(BlueprintImplementableEvent)
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

