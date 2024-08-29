#include "OMDPlayerCharacter.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "Components/AudioComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "NavPowerPlayerMovementComponent.h"
#include "Net/UnrealNetwork.h"
#include "OMDPlayerCharacterMovementComponent.h"

AOMDPlayerCharacter::AOMDPlayerCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UOMDPlayerCharacterMovementComponent>(TEXT("CharMoveComp"))) {
    this->bAlwaysRelevant = true;
    this->bUseControllerRotationYaw = true;
    this->bCanCauseCollateralDamage = true;
    this->PlayOutdoorAudio = false;
    this->AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("PlayerAudioComponent"));
    this->CurrentBloomAngle = 0.00f;
    this->TrapSummonIndicatorClass = NULL;
    this->TrapPlacementFX = NULL;
    this->TrapPlacementMaxDistance = 5000.00f;
    this->CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
    this->FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
    this->FXMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FX Mesh"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->Skeleton = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Skeleton"));
    this->bMoveAbilityActive = false;
    this->bIsSprinting = false;
    this->bIsTargeting = false;
    this->MoveAbilityType = ECharacterMovementAbilities::None;
    this->ManaCostOnMoveAbilityUse = 0.00f;
    this->ManaCostPerSecondForMoveAbility = 0.00f;
    this->MoveAbilityCooldown = 0.00f;
    this->BaseAimAssistSensitivity = 0.00f;
    this->PitchAimAssistDragMult = 0.00f;
    this->YawAimAssistDragMult = 0.00f;
    this->PitchAimAssistSnapDistance = 0.00f;
    this->YawAimAssistSnapDistance = 0.00f;
    this->StrafeAimAssistSnapDistance = 0.00f;
    this->NavPowerPlayerMovementComp = CreateDefaultSubobject<UNavPowerPlayerMovementComponent>(TEXT("NavPowerPlayerMovement"));
    this->TrapGridRevealParameterCollection = NULL;
    this->WorldInventory = NULL;
    this->CurrentWeapon = NULL;
    this->TrapRotation = 0.00f;
    this->TrapPlacementStatus = ETrapPlacementStatusType::None;
    this->BroadcastMana = 0.00f;
    this->CurrentTarget = NULL;
    this->NearbyActorsRadius = 3600.00f;
    this->bIsCommRoseActive = false;
    this->AudioComponent->SetupAttachment(RootComponent);
    this->CameraBoom->SetupAttachment(RootComponent);
    this->FXMesh->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponentBudgeted>(this));
    this->FollowCamera->SetupAttachment(CameraBoom);
    this->NavPowerPlayerMovementComp->SetupAttachment(RootComponent);
    this->Skeleton->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponentBudgeted>(this));
}

void AOMDPlayerCharacter::UnFreeze() {
}

void AOMDPlayerCharacter::ToggleTargeting() {
}

void AOMDPlayerCharacter::ToggleSprinting() {
}

void AOMDPlayerCharacter::Target() {
}

void AOMDPlayerCharacter::StopTargeting() {
}

void AOMDPlayerCharacter::StopSprinting() {
}

void AOMDPlayerCharacter::SprintInputReleased() {
}

void AOMDPlayerCharacter::Sprint() {
}

bool AOMDPlayerCharacter::SpendMana(float amount) {
    return false;
}

void AOMDPlayerCharacter::ShowEquippedItem() {
}

void AOMDPlayerCharacter::SetTargeting(bool bNewTargeting) {
}

void AOMDPlayerCharacter::SetSprinting(bool bNewSprinting) {
}

void AOMDPlayerCharacter::SetPlayerInputValues(bool useControllerRotationYaw, bool useControllerRotationPitch, bool useControllerRotationRoll, bool allowPrimaryAbilityActivation, bool allowSecondaryAbilityActivation, bool allowEquipmentChange, bool allowMovement) {
}

void AOMDPlayerCharacter::SetNewMaxJump(int32 newMaxJumpCount) {
}

void AOMDPlayerCharacter::SetMoveAbilityActive(bool bActive) {
}

void AOMDPlayerCharacter::SetFreeManaDecrementsRemaining(int32 amount) {
}

void AOMDPlayerCharacter::SetCurrentTarget(AActor* NewTarget) {
}

void AOMDPlayerCharacter::SetCanSprint(bool bNewCanSprint) {
}

void AOMDPlayerCharacter::Server_TriggerCommRosePing_Implementation(FGuid pingProto) {
}
bool AOMDPlayerCharacter::Server_TriggerCommRosePing_Validate(FGuid pingProto) {
    return true;
}

void AOMDPlayerCharacter::Server_SetTargeting_Implementation(bool bNewTargeting) {
}
bool AOMDPlayerCharacter::Server_SetTargeting_Validate(bool bNewTargeting) {
    return true;
}

void AOMDPlayerCharacter::Server_SetSprinting_Implementation(bool bNewSprinting) {
}
bool AOMDPlayerCharacter::Server_SetSprinting_Validate(bool bNewSprinting) {
    return true;
}

void AOMDPlayerCharacter::Server_SetNewMaxJump_Implementation(int32 newMaxJumpCount) {
}
bool AOMDPlayerCharacter::Server_SetNewMaxJump_Validate(int32 newMaxJumpCount) {
    return true;
}

void AOMDPlayerCharacter::Server_SetMoveAbilityActive_Implementation(bool bActive) {
}
bool AOMDPlayerCharacter::Server_SetMoveAbilityActive_Validate(bool bActive) {
    return true;
}

void AOMDPlayerCharacter::Server_SetEquippedItem_Implementation(FOMDSoftProtoPtr Item) {
}
bool AOMDPlayerCharacter::Server_SetEquippedItem_Validate(FOMDSoftProtoPtr Item) {
    return true;
}

void AOMDPlayerCharacter::Server_SetCurrentTarget_Implementation(AActor* NewTarget) {
}
bool AOMDPlayerCharacter::Server_SetCurrentTarget_Validate(AActor* NewTarget) {
    return true;
}

void AOMDPlayerCharacter::Server_SetBroadcastMana_Implementation(float amount) {
}
bool AOMDPlayerCharacter::Server_SetBroadcastMana_Validate(float amount) {
    return true;
}

void AOMDPlayerCharacter::Server_MoveAbility_Landed_Implementation(const FHitResult& Hit) {
}
bool AOMDPlayerCharacter::Server_MoveAbility_Landed_Validate(const FHitResult& Hit) {
    return true;
}

void AOMDPlayerCharacter::Server_Interact_Implementation() {
}
bool AOMDPlayerCharacter::Server_Interact_Validate() {
    return true;
}

void AOMDPlayerCharacter::Server_DoPickup_Implementation(AOMDPickup* Pickup) {
}
bool AOMDPlayerCharacter::Server_DoPickup_Validate(AOMDPickup* Pickup) {
    return true;
}

void AOMDPlayerCharacter::Server_DoActivatePrimaryStatsProcessing_Implementation(const FOMDAbilityProto abilityProto) {
}
bool AOMDPlayerCharacter::Server_DoActivatePrimaryStatsProcessing_Validate(const FOMDAbilityProto abilityProto) {
    return true;
}

void AOMDPlayerCharacter::OnRep_WorldInventory() {
}

void AOMDPlayerCharacter::OnRep_EquippedItem(FOMDSoftProtoPtr previousItem) {
}

void AOMDPlayerCharacter::OnRep_CurrentTarget(AActor* previousTarget) {
}

void AOMDPlayerCharacter::OnCommRoseClosed(bool shouldPing, FGuid selectionGuid) {
}

void AOMDPlayerCharacter::Multicast_TriggerCommRosePing_Implementation(FGuid pingProto) {
}

void AOMDPlayerCharacter::Multicast_SetMoveAbilityActive_Implementation(bool bActive) {
}

void AOMDPlayerCharacter::LoadoutItemRemoved(UOMDInventoryItem* Item) {
}

void AOMDPlayerCharacter::LoadoutItemAdded(UOMDInventoryItem* Item) {
}

void AOMDPlayerCharacter::JumpInputReleased() {
}

void AOMDPlayerCharacter::JumpInputPressed() {
}

void AOMDPlayerCharacter::InfiniteMana() {
}

void AOMDPlayerCharacter::HideEquippedItem() {
}

bool AOMDPlayerCharacter::HasCooldown(UOMDInventoryItem* Item) const {
    return false;
}

void AOMDPlayerCharacter::GiveMana(float amount) {
}

float AOMDPlayerCharacter::GetTrapRotation(bool canBeHorizontal, bool canBeVertical) {
    return 0.0f;
}

int32 AOMDPlayerCharacter::GetRemainingAmmo(UOMDInventoryItem* Item) const {
    return 0;
}

AOMDPlayerState* AOMDPlayerCharacter::GetOMDPlayerState() const {
    return NULL;
}

float AOMDPlayerCharacter::GetMaxMana() const {
    return 0.0f;
}

int32 AOMDPlayerCharacter::GetMaxAmmo(UOMDInventoryItem* Item) const {
    return 0;
}

float AOMDPlayerCharacter::GetManaRegenRate() const {
    return 0.0f;
}

float AOMDPlayerCharacter::GetMana() const {
    return 0.0f;
}

FVector AOMDPlayerCharacter::GetLaunchLocation(int32 weaponIndex) const {
    return FVector{};
}

FVector AOMDPlayerCharacter::GetLaunchDirection(int32 weaponIndex) const {
    return FVector{};
}

UOMDInventoryItem* AOMDPlayerCharacter::GetInventoryItem(const FOMDSoftProtoPtr& Item) const {
    return NULL;
}

float AOMDPlayerCharacter::GetHealthRegenRate() const {
    return 0.0f;
}

int32 AOMDPlayerCharacter::GetFreeManaDecrementsRemaining() const {
    return 0;
}

TArray<AOMDPlayerAttachment*> AOMDPlayerCharacter::GetEquippedItemAttachments() {
    return TArray<AOMDPlayerAttachment*>();
}

UOMDInventoryItem* AOMDPlayerCharacter::GetEquippedItem() const {
    return NULL;
}

FText AOMDPlayerCharacter::GetDisplayName() const {
    return FText::GetEmpty();
}

float AOMDPlayerCharacter::GetCurrentBloomAngle() const {
    return 0.0f;
}

float AOMDPlayerCharacter::GetCooldownProgress(UOMDInventoryItem* Item) const {
    return 0.0f;
}

float AOMDPlayerCharacter::GetBroadcastMana() const {
    return 0.0f;
}

void AOMDPlayerCharacter::Freeze() {
}

void AOMDPlayerCharacter::EquippedItemChanged(int32 Index, UOMDInventoryItem* Item) {
}

void AOMDPlayerCharacter::EquipFirstWeapon() {
}

void AOMDPlayerCharacter::DisablePlayerCollision(bool bDisable) {
}

void AOMDPlayerCharacter::DeactivateSecondary() {
}

void AOMDPlayerCharacter::DeactivatePrimary() {
}

void AOMDPlayerCharacter::DeactivateAbilities() {
}

void AOMDPlayerCharacter::Client_NotifyAICharacterKilled_Implementation(AOMDAICharacter* minion) {
}

void AOMDPlayerCharacter::Client_GiveMana_Implementation(float amount) {
}













void AOMDPlayerCharacter::AttachmentsLoaded(FOMDSoftProtoPtr Item) {
}

void AOMDPlayerCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOMDPlayerCharacter, bIsSprinting);
    DOREPLIFETIME(AOMDPlayerCharacter, bIsTargeting);
    DOREPLIFETIME(AOMDPlayerCharacter, MoveAbilityType);
    DOREPLIFETIME(AOMDPlayerCharacter, ManaCostOnMoveAbilityUse);
    DOREPLIFETIME(AOMDPlayerCharacter, ManaCostPerSecondForMoveAbility);
    DOREPLIFETIME(AOMDPlayerCharacter, MoveAbilityCooldown);
    DOREPLIFETIME(AOMDPlayerCharacter, BaseAimAssistSensitivity);
    DOREPLIFETIME(AOMDPlayerCharacter, PitchAimAssistDragMult);
    DOREPLIFETIME(AOMDPlayerCharacter, YawAimAssistDragMult);
    DOREPLIFETIME(AOMDPlayerCharacter, PitchAimAssistSnapDistance);
    DOREPLIFETIME(AOMDPlayerCharacter, YawAimAssistSnapDistance);
    DOREPLIFETIME(AOMDPlayerCharacter, StrafeAimAssistSnapDistance);
    DOREPLIFETIME(AOMDPlayerCharacter, EquippedItem);
    DOREPLIFETIME(AOMDPlayerCharacter, WorldInventory);
    DOREPLIFETIME(AOMDPlayerCharacter, BroadcastMana);
    DOREPLIFETIME(AOMDPlayerCharacter, CurrentTarget);
    DOREPLIFETIME(AOMDPlayerCharacter, NearbyActors);
}


