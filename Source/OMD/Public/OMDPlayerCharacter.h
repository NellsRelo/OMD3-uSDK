#pragma once
#include "CoreMinimal.h"
#include "OMDCharacter.h"
#include "ETrapPlacementStatusType.h"
#include "ECharacterMovementAbilities.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EquippedItemDelegateDelegate.h"
#include "OMDAbilityProto.h"
#include "OMDSoftProtoPtr.h"
#include "OMDEquippedItemInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "OMDPlayerCharacter.generated.h"

class UAudioComponent;
class UCameraComponent;
class AOMDTrapPlacementFX;
class USpringArmComponent;
class USkeletalMeshComponent;
class UNavPowerPlayerMovementComponent;
class UAnimMontage;
class AActor;
class UMaterialParameterCollection;
class AOMDInventory;
class AOMDWeapon;
class AOMDPickup;
class AOMDAICharacter;
class UOMDInventoryItem;
class AOMDPlayerState;
class AOMDPlayerAttachment;
class AOMDTrap;

UCLASS()
class OMD_API AOMDPlayerCharacter : public AOMDCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool PlayOutdoorAudio;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, Transient, VisibleInstanceOnly)
    UAudioComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float CurrentBloomAngle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UClass* TrapSummonIndicatorClass;
    
    UPROPERTY()
    AOMDTrapPlacementFX* TrapPlacementFX;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TrapPlacementMaxDistance;
    
private:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export, meta=(AllowPrivateAccess=true))
    USpringArmComponent* CameraBoom;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export, meta=(AllowPrivateAccess=true))
    UCameraComponent* FollowCamera;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* FXMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* Skeleton;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 bMoveAbilityActive: 1;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    uint8 bIsSprinting: 1;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    uint8 bIsTargeting: 1;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    ECharacterMovementAbilities MoveAbilityType;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    float ManaCostOnMoveAbilityUse;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    float ManaCostPerSecondForMoveAbility;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    float MoveAbilityCooldown;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    float BaseAimAssistSensitivity;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    float PitchAimAssistDragMult;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    float YawAimAssistDragMult;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    float PitchAimAssistSnapDistance;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    float YawAimAssistSnapDistance;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    float StrafeAimAssistSnapDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    UNavPowerPlayerMovementComponent* NavPowerPlayerMovementComp;
    
private:
    UPROPERTY(Transient)
    TArray<UAnimMontage*> EndGameMontages;
    
public:
    UPROPERTY(BlueprintAssignable)
    FEquippedItemDelegate OnEquippedItemChanged;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    UMaterialParameterCollection* TrapGridRevealParameterCollection;
    
    UPROPERTY(Transient)
    TMap<FOMDSoftProtoPtr, FOMDEquippedItemInfo> ItemMap;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, ReplicatedUsing=OnRep_EquippedItem)
    FOMDSoftProtoPtr EquippedItem;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_WorldInventory)
    AOMDInventory* WorldInventory;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    AOMDWeapon* CurrentWeapon;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    TArray<AOMDWeapon*> CurrentWeapons;
    
    UPROPERTY()
    float TrapRotation;
    
    UPROPERTY(BlueprintReadOnly)
    ETrapPlacementStatusType TrapPlacementStatus;
    
    UPROPERTY(Replicated)
    float BroadcastMana;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_CurrentTarget)
    AActor* CurrentTarget;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    TArray<AActor*> NearbyActors;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float NearbyActorsRadius;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsCommRoseActive;
    
public:
    AOMDPlayerCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void UnFreeze();
    
public:
    UFUNCTION(BlueprintCallable)
    void ToggleTargeting();
    
    UFUNCTION(BlueprintCallable)
    void ToggleSprinting();
    
    UFUNCTION(BlueprintCallable)
    void Target();
    
    UFUNCTION(BlueprintCallable)
    void StopTargeting();
    
    UFUNCTION(BlueprintCallable)
    void StopSprinting();
    
    UFUNCTION(BlueprintCallable)
    void SprintInputReleased();
    
    UFUNCTION(BlueprintCallable)
    void Sprint();
    
    UFUNCTION(BlueprintCallable)
    bool SpendMana(float amount);
    
    UFUNCTION(BlueprintCallable)
    void ShowEquippedItem();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetTargeting(bool bNewTargeting);
    
    UFUNCTION(BlueprintCallable)
    void SetSprinting(bool bNewSprinting);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerInputValues(bool useControllerRotationYaw, bool useControllerRotationPitch, bool useControllerRotationRoll, bool allowPrimaryAbilityActivation, bool allowSecondaryAbilityActivation, bool allowEquipmentChange, bool allowMovement);
    
    UFUNCTION(BlueprintCallable)
    void SetNewMaxJump(int32 newMaxJumpCount);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetMoveAbilityActive(bool bActive);
    
    UFUNCTION(BlueprintCallable)
    void SetFreeManaDecrementsRemaining(int32 amount);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentTarget(AActor* NewTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetCanSprint(bool bNewCanSprint);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_TriggerCommRosePing(FGuid pingProto);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetTargeting(bool bNewTargeting);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetSprinting(bool bNewSprinting);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetNewMaxJump(int32 newMaxJumpCount);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetMoveAbilityActive(bool bActive);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetEquippedItem(FOMDSoftProtoPtr Item);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetCurrentTarget(AActor* NewTarget);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void Server_SetBroadcastMana(float amount);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_MoveAbility_Landed(const FHitResult& Hit);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_Interact();
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_DoPickup(AOMDPickup* Pickup);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_DoActivatePrimaryStatsProcessing(const FOMDAbilityProto abilityProto);
    
    UFUNCTION()
    void OnRep_WorldInventory();
    
    UFUNCTION()
    void OnRep_EquippedItem(FOMDSoftProtoPtr previousItem);
    
    UFUNCTION()
    void OnRep_CurrentTarget(AActor* previousTarget);
    
    UFUNCTION()
    void OnCommRoseClosed(bool shouldPing, FGuid selectionGuid);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_TriggerCommRosePing(FGuid pingProto);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetMoveAbilityActive(bool bActive);
    
    UFUNCTION()
    void LoadoutItemRemoved(UOMDInventoryItem* Item);
    
    UFUNCTION()
    void LoadoutItemAdded(UOMDInventoryItem* Item);
    
public:
    UFUNCTION(BlueprintCallable)
    void JumpInputReleased();
    
    UFUNCTION(BlueprintCallable)
    void JumpInputPressed();
    
    UFUNCTION(BlueprintCallable, Exec)
    void InfiniteMana();
    
    UFUNCTION(BlueprintCallable)
    void HideEquippedItem();
    
    UFUNCTION(BlueprintPure)
    bool HasCooldown(UOMDInventoryItem* Item) const;
    
    UFUNCTION(BlueprintCallable)
    void GiveMana(float amount);
    
protected:
    UFUNCTION(BlueprintCallable)
    float GetTrapRotation(bool canBeHorizontal, bool canBeVertical);
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetRemainingAmmo(UOMDInventoryItem* Item) const;
    
protected:
    UFUNCTION(BlueprintPure)
    AOMDPlayerState* GetOMDPlayerState() const;
    
public:
    UFUNCTION(BlueprintPure)
    float GetMaxMana() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxAmmo(UOMDInventoryItem* Item) const;
    
    UFUNCTION(BlueprintPure)
    float GetManaRegenRate() const;
    
    UFUNCTION(BlueprintPure)
    float GetMana() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLaunchLocation(int32 weaponIndex) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLaunchDirection(int32 weaponIndex) const;
    
    UFUNCTION(BlueprintPure)
    UOMDInventoryItem* GetInventoryItem(const FOMDSoftProtoPtr& Item) const;
    
    UFUNCTION(BlueprintPure)
    float GetHealthRegenRate() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetFreeManaDecrementsRemaining() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AOMDPlayerAttachment*> GetEquippedItemAttachments();
    
    UFUNCTION(BlueprintPure)
    UOMDInventoryItem* GetEquippedItem() const;
    
    UFUNCTION(BlueprintPure)
    FText GetDisplayName() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentBloomAngle() const;
    
    UFUNCTION(BlueprintPure)
    float GetCooldownProgress(UOMDInventoryItem* Item) const;
    
    UFUNCTION(BlueprintPure)
    float GetBroadcastMana() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void Freeze();
    
public:
    UFUNCTION()
    void EquippedItemChanged(int32 Index, UOMDInventoryItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void EquipFirstWeapon();
    
    UFUNCTION(BlueprintCallable)
    void DisablePlayerCollision(bool bDisable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DeactivateSecondary();
    
    UFUNCTION(BlueprintCallable)
    void DeactivatePrimary();
    
public:
    UFUNCTION(BlueprintCallable)
    void DeactivateAbilities();
    
protected:
    UFUNCTION(Client, Reliable)
    void Client_NotifyAICharacterKilled(AOMDAICharacter* minion);
    
    UFUNCTION(Client, Reliable)
    void Client_GiveMana(float amount);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_TrapPlaced(AOMDTrap* Trap);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_Server_MoveAbilityLanded(const FHitResult& Hit);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_Server_MoveAbilityEnd();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_Server_MoveAbilityBegin();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnSprintChanged(bool currentlySprinting);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnGameEnded(int32 skulls);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_MoveAbilityLanded(const FHitResult& Hit);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_MoveAbilityEnd();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_MoveAbilityBegin();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_EquippedItemShown(FOMDSoftProtoPtr Item);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_EquippedItemHidden(FOMDSoftProtoPtr Item);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_EquippedItemChanged(UOMDInventoryItem* Item);
    
    UFUNCTION()
    void AttachmentsLoaded(FOMDSoftProtoPtr Item);
    
};

