#include "OMDAICharacter.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "Net/UnrealNetwork.h"

AOMDAICharacter::AOMDAICharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->StandardPhysicsAsset = NULL;
    this->RagdolledPhysicsAsset = NULL;
    this->Skeleton = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("Skeleton"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->FXMesh = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("FX Mesh"));
    this->MeshBudgeted = NULL;
    this->Optimized = false;
    this->OptimizedNavWalking = false;
    this->bIsResurrected = false;
    this->Spawner = NULL;
    this->OnslaughtCoordinator = NULL;
    this->bIsPrespawn = false;
    this->prespawnController = NULL;
    this->HeadshotFlyoffClass = NULL;
    this->ComboFlyoffClass = NULL;
    this->ImmunityFlyoffClass = NULL;
    this->CoinFlyoffClass = NULL;
    this->DamageCapFlyoffClass = NULL;
    this->Shield = NULL;
    this->Shielded = false;
    this->RangeModifier = 1.00f;
    this->bIsAttacking = false;
    this->CustomizationSeed = 0;
    this->FXMesh->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponentBudgeted>(this));
    this->Skeleton->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponentBudgeted>(this));
}

void AOMDAICharacter::UnFreeze() {
}

bool AOMDAICharacter::SpawnParticularPickup(UClass* pickupClass) {
    return false;
}

bool AOMDAICharacter::ShouldHaveProtodata() {
    return false;
}

bool AOMDAICharacter::ShouldBeEffectedByCyclopeanRaceAbility() const {
    return false;
}

void AOMDAICharacter::SetProtodata(const FOMDSoftProtoPtr& proto) {
}

void AOMDAICharacter::SetIsAttacking(bool isAttacking) {
}

void AOMDAICharacter::SetHasBeenResurrected() {
}

void AOMDAICharacter::SetAITeam(EGenericTeams Team) {
}

void AOMDAICharacter::Server_RemoveComboPointsOfType_Implementation(EComboPointType comboPointType) {
}
bool AOMDAICharacter::Server_RemoveComboPointsOfType_Validate(EComboPointType comboPointType) {
    return true;
}

void AOMDAICharacter::Server_RemoveComboPointsByInstance_Implementation(AActor* causerInstance, EComboPointType comboPointType, const FString& UniqueId) {
}
bool AOMDAICharacter::Server_RemoveComboPointsByInstance_Validate(AActor* causerInstance, EComboPointType comboPointType, const FString& UniqueId) {
    return true;
}

void AOMDAICharacter::Server_RemoveComboPointsByClass_Implementation(UClass* causerClass, EComboPointType comboPointType, const FString& UniqueId) {
}
bool AOMDAICharacter::Server_RemoveComboPointsByClass_Validate(UClass* causerClass, EComboPointType comboPointType, const FString& UniqueId) {
    return true;
}

void AOMDAICharacter::Server_AddComboPoint_Implementation(UClass* causerClass, float Timer, const FString& UniqueId, AActor* causerInstance, EComboPointCountType countType, EComboPointType comboPointType) {
}
bool AOMDAICharacter::Server_AddComboPoint_Validate(UClass* causerClass, float Timer, const FString& UniqueId, AActor* causerInstance, EComboPointCountType countType, EComboPointType comboPointType) {
    return true;
}

void AOMDAICharacter::RevertTargetingType() {
}

void AOMDAICharacter::OverrideTargetingType(const EAITargetingType NewType) {
}

void AOMDAICharacter::OnRep_Shielded(bool previousValue) {
}

void AOMDAICharacter::OnRep_IsAttacking() {
}

void AOMDAICharacter::NetMulticast_UnFreeze_Implementation() {
}

void AOMDAICharacter::NetMulticast_SpawnedFromRiftFX_Implementation(FVector spawnFromRiftLocation) {
}

void AOMDAICharacter::NetMulticast_Freeze_Implementation() {
}

void AOMDAICharacter::NetMulticast_EnteredRift_Implementation(FVector NewRiftLocation, float Velocity) {
}

void AOMDAICharacter::NetMulticast_EnableRiftRushCollisionSettings_Implementation() {
}

void AOMDAICharacter::NetMulticast_EnableInvincibleSettings_Implementation() {
}

void AOMDAICharacter::NetMulticast_DisableRiftRushCollisionSettings_Implementation() {
}

void AOMDAICharacter::NetMulticast_DisableInvincibleSettings_Implementation() {
}

void AOMDAICharacter::NetMulticast_CacheRiftRushCollisionSettings_Implementation() {
}

void AOMDAICharacter::NetMulticast_CacheInvincibleSettings_Implementation() {
}

void AOMDAICharacter::Multicast_SpawnImmunityFlyoff_Implementation() {
}

void AOMDAICharacter::Multicast_SpawnDamageCapFlyoff_Implementation() {
}

void AOMDAICharacter::Multicast_SpawnComboFlyoff_Implementation(int32 amount) {
}

void AOMDAICharacter::Multicast_SpawnCoinFlyoff_Implementation(int32 amount) {
}

bool AOMDAICharacter::IsWispAiCharacter() {
    return false;
}

bool AOMDAICharacter::IsStandardAiCharacter() {
    return false;
}

bool AOMDAICharacter::IsFlyer() const {
    return false;
}

bool AOMDAICharacter::IsBoss() const {
    return false;
}

bool AOMDAICharacter::IsBarricadeDestroyer() const {
    return false;
}

bool AOMDAICharacter::HasRunnerMovement() const {
    return false;
}

void AOMDAICharacter::GiveShield() {
}

ECharacterWeightClass AOMDAICharacter::GetWeightClass() const {
    return ECharacterWeightClass::Light;
}

EAITargetingType AOMDAICharacter::GetTargetingType() const {
    return EAITargetingType::ClassicOrc;
}

TArray<FOMDAICharacterAbilityProto> AOMDAICharacter::GetSpecialAbilitiesProtos() const {
    return TArray<FOMDAICharacterAbilityProto>();
}

int32 AOMDAICharacter::GetSpawnOnDeathCount() const {
    return 0;
}

FOMDSoftProtoPtr AOMDAICharacter::GetSpawnOnDeathAICharacter() const {
    return FOMDSoftProtoPtr{};
}

bool AOMDAICharacter::GetRunsOverBarricades() const {
    return false;
}

FName AOMDAICharacter::GetProtoName() const {
    return NAME_None;
}

FOMDAICharacterAbilityProto AOMDAICharacter::GetPrimaryAbilityProto() const {
    return FOMDAICharacterAbilityProto{};
}

TArray<FOMDAICharacterAbilityProto> AOMDAICharacter::GetOnDeathAbilitiesProtos() const {
    return TArray<FOMDAICharacterAbilityProto>();
}

bool AOMDAICharacter::GetIsAttacking() {
    return false;
}

TArray<FOMDGibInformation> AOMDAICharacter::GetGibInformation() const {
    return TArray<FOMDGibInformation>();
}

FText AOMDAICharacter::GetDisplayName() const {
    return FText::GetEmpty();
}

int32 AOMDAICharacter::GetBaseCoinValue() const {
    return 0;
}

float AOMDAICharacter::GetAttackRange() const {
    return 0.0f;
}

UBehaviorTree* AOMDAICharacter::GetAIBehavior() const {
    return NULL;
}

float AOMDAICharacter::GetAggroRadius() const {
    return 0.0f;
}

EAggroGroup AOMDAICharacter::GetAggroGroup() const {
    return EAggroGroup::NormalMelee;
}

void AOMDAICharacter::Freeze() {
}

void AOMDAICharacter::EndGetUp() {
}

void AOMDAICharacter::EnableRiftRushCollisionSettings() {
}

void AOMDAICharacter::EnableInvincibleSettings() {
}

void AOMDAICharacter::DisableRiftRushCollisionSettings() {
}

void AOMDAICharacter::DisableInvincibleSettings() {
}

void AOMDAICharacter::DisableCharacterCollision(bool bDisable) {
}

UOMDAbilityParameters* AOMDAICharacter::CreateAbilityParams(FOMDAICharacterAbilityProto protoToUse) {
    return NULL;
}

void AOMDAICharacter::CacheRiftRushCollisionSettings() {
}

void AOMDAICharacter::CacheInvincibleSettings() {
}







void AOMDAICharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOMDAICharacter, Optimized);
    DOREPLIFETIME(AOMDAICharacter, OptimizedNavWalking);
    DOREPLIFETIME(AOMDAICharacter, bIsResurrected);
    DOREPLIFETIME(AOMDAICharacter, bIsPrespawn);
    DOREPLIFETIME(AOMDAICharacter, RiftLocation);
    DOREPLIFETIME(AOMDAICharacter, DeathParams);
    DOREPLIFETIME(AOMDAICharacter, Shielded);
    DOREPLIFETIME(AOMDAICharacter, bIsAttacking);
    DOREPLIFETIME(AOMDAICharacter, CustomizationSeed);
}


