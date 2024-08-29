#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ECharacterMovementAbilities.h"
#include "ETrapPlacementStatusType.h"
#include "EquippedItemDelegateDelegate.h"
#include "OMDAbilityProto.h"
#include "OMDCharacter.h"
#include "OMDEquippedItemInfo.h"
#include "OMDSoftProtoPtr.h"
#include "OMDPlayerCharacter.generated.h"

class AActor;
class AOMDAICharacter;
class AOMDInventory;
class AOMDPickup;
class AOMDPlayerAttachment;
class AOMDPlayerState;
class AOMDTrap;
class AOMDTrapPlacementFX;
class AOMDWeapon;
class UAnimMontage;
class UAudioComponent;
class UCameraComponent;
class UMaterialParameterCollection;
class UNavPowerPlayerMovementComponent;
class UOMDInventoryItem;
class USkeletalMeshComponent;
class USpringArmComponent;

UCLASS(Blueprintable)
class OMD_API AOMDPlayerCharacter : public AOMDCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PlayOutdoorAudio;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentBloomAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* TrapSummonIndicatorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AOMDTrapPlacementFX* TrapPlacementFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrapPlacementMaxDistance;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* CameraBoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* FollowCamera;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* FXMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Skeleton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMoveAbilityActive: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bIsSprinting: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bIsTargeting: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ECharacterMovementAbilities MoveAbilityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ManaCostOnMoveAbilityUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ManaCostPerSecondForMoveAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MoveAbilityCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float BaseAimAssistSensitivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float PitchAimAssistDragMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float YawAimAssistDragMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float PitchAimAssistSnapDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float YawAimAssistSnapDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float StrafeAimAssistSnapDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNavPowerPlayerMovementComponent* NavPowerPlayerMovementComp;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> EndGameMontages;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquippedItemDelegate OnEquippedItemChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* TrapGridRevealParameterCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FOMDSoftProtoPtr, FOMDEquippedItemInfo> ItemMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EquippedItem, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr EquippedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_WorldInventory, meta=(AllowPrivateAccess=true))
    AOMDInventory* WorldInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AOMDWeapon* CurrentWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AOMDWeapon*> CurrentWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrapRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrapPlacementStatusType TrapPlacementStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float BroadcastMana;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentTarget, meta=(AllowPrivateAccess=true))
    AActor* CurrentTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AActor*> NearbyActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NearbyActorsRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCommRoseActive;
    
public:
    AOMDPlayerCharacter(const FObjectInitializer& ObjectInitializer);

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
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_TriggerCommRosePing(FGuid pingProto);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetTargeting(bool bNewTargeting);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetSprinting(bool bNewSprinting);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetNewMaxJump(int32 newMaxJumpCount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetMoveAbilityActive(bool bActive);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetEquippedItem(FOMDSoftProtoPtr Item);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetCurrentTarget(AActor* NewTarget);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_SetBroadcastMana(float amount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_MoveAbility_Landed(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Interact();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_DoPickup(AOMDPickup* Pickup);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_DoActivatePrimaryStatsProcessing(const FOMDAbilityProto abilityProto);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WorldInventory();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EquippedItem(FOMDSoftProtoPtr previousItem);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentTarget(AActor* previousTarget);
    
    UFUNCTION(BlueprintCallable)
    void OnCommRoseClosed(bool shouldPing, FGuid selectionGuid);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_TriggerCommRosePing(FGuid pingProto);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetMoveAbilityActive(bool bActive);
    
    UFUNCTION(BlueprintCallable)
    void LoadoutItemRemoved(UOMDInventoryItem* Item);
    
    UFUNCTION(BlueprintCallable)
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCooldown(UOMDInventoryItem* Item) const;
    
    UFUNCTION(BlueprintCallable)
    void GiveMana(float amount);
    
protected:
    UFUNCTION(BlueprintCallable)
    float GetTrapRotation(bool canBeHorizontal, bool canBeVertical);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingAmmo(UOMDInventoryItem* Item) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AOMDPlayerState* GetOMDPlayerState() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxMana() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxAmmo(UOMDInventoryItem* Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetManaRegenRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMana() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLaunchLocation(int32 weaponIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLaunchDirection(int32 weaponIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UOMDInventoryItem* GetInventoryItem(const FOMDSoftProtoPtr& Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthRegenRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFreeManaDecrementsRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AOMDPlayerAttachment*> GetEquippedItemAttachments();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UOMDInventoryItem* GetEquippedItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentBloomAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCooldownProgress(UOMDInventoryItem* Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBroadcastMana() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void Freeze();
    
public:
    UFUNCTION(BlueprintCallable)
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
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_NotifyAICharacterKilled(AOMDAICharacter* minion);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_GiveMana(float amount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_TrapPlaced(AOMDTrap* Trap);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Server_MoveAbilityLanded(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Server_MoveAbilityEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Server_MoveAbilityBegin();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnSprintChanged(bool currentlySprinting);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnGameEnded(int32 skulls);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_MoveAbilityLanded(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_MoveAbilityEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_MoveAbilityBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_EquippedItemShown(FOMDSoftProtoPtr Item);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_EquippedItemHidden(FOMDSoftProtoPtr Item);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_EquippedItemChanged(UOMDInventoryItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void AttachmentsLoaded(FOMDSoftProtoPtr Item);
    
};

