#include "OMDTrap.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "OMDAbilitySystemComponent.h"
#include "OMDMapDisplayComponent.h"
#include "OMDStatusEffectComponent.h"

AOMDTrap::AOMDTrap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->bIsUpdateOverlapsEnabled = true;
    this->bUpdateOverlapsMainTrigger = true;
    this->bUpdateOverlapsSecondaryTriggers = true;
    this->GeneratedBoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("GeneratedBoxCollision"));
    this->MeshComponent = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("MeshComponent"));
    this->SummonParticleSystemComponent = NULL;
    this->TriggerDisplay = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TriggerDisplay"));
    this->bPlayerPlaced = false;
    this->bScenarioDisablesSelling = false;
    this->PerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPercpetion Component"));
    this->TriggerBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
    this->PerceptionPosition = CreateDefaultSubobject<UArrowComponent>(TEXT("Perception Location"));
    this->abilitySystem = CreateDefaultSubobject<UOMDAbilitySystemComponent>(TEXT("abilitySystem"));
    this->bUseHalfSizePlacement = false;
    this->Health = 0.00f;
    this->ActivationType = ETrapActivationType::Timed;
    this->TargetAcquisitionType = ETrapTargetAcquisitionType::Overlap;
    this->SensedTargetSelectionType = ESensedTargetSelectionType::Random;
    this->bCanBeReset = true;
    this->CurrentState = ETrapState::Ready;
    this->bIsTriggered = false;
    this->bIsReset = false;
    this->bIsActivated = false;
    this->bIsOnCooldown = false;
    this->bIsReady = false;
    this->bIsDisabled = false;
    this->MapDisplayComponent = CreateDefaultSubobject<UOMDMapDisplayComponent>(TEXT("MapDisplay"));
    this->bUseWideIcon = false;
    this->AIPerceptionStimuliSource = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("StimuliSource"));
    this->BaseHealthModifier = 0.00f;
    this->BaseHealthMultiplier = 0.00f;
    this->StatusEffectComponent = CreateDefaultSubobject<UOMDStatusEffectComponent>(TEXT("StatusEffectComponent"));
    this->ParentTrap = NULL;
    this->GeneratedBoxCollision->SetupAttachment(RootComponent);
    this->MeshComponent->SetupAttachment(RootComponent);
    this->PerceptionPosition->SetupAttachment(RootComponent);
    this->TriggerBoxComponent->SetupAttachment(RootComponent);
    this->TriggerDisplay->SetupAttachment(RootComponent);
}

bool AOMDTrap::UsesCharges() const {
    return false;
}

void AOMDTrap::UpdateOverlapsComponents() {
}

void AOMDTrap::UpdateOverlaps() {
}

AOMDTrap* AOMDTrap::TryPlaceAdjacentTrap(FOMDSoftProtoPtr trapToPlace, int32 side) {
    return NULL;
}

bool AOMDTrap::TryManualActivation() {
    return false;
}

void AOMDTrap::SetResetDelayModifier(float Value) {
}

void AOMDTrap::ResetState(bool shouldHeal) {
}

void AOMDTrap::RemovePermanentDisable() {
}

void AOMDTrap::RemoveFromDamageActorList(AActor* Actor) {
}

void AOMDTrap::OnTriggerDurationTimer() {
}

void AOMDTrap::OnSenseActor(const TArray<AActor*>& UpdatedActors) {
}

void AOMDTrap::OnResetTimer() {
}

void AOMDTrap::OnEndOverlap(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AOMDTrap::OnCooldownTimer() {
}



void AOMDTrap::OnChargesTimer() {
}

void AOMDTrap::OnBeginOverlap(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit) {
}

void AOMDTrap::OnActorEnter(AActor* OtherActor) {
}

void AOMDTrap::OnActorEnd(AActor* OtherActor) {
}

void AOMDTrap::NetMulticast_IsTriggered_Implementation(bool triggered) {
}

void AOMDTrap::NetMulticast_IsReset_Implementation(bool Reset) {
}

void AOMDTrap::NetMulticast_IsReady_Implementation(bool ready) {
}

void AOMDTrap::NetMulticast_IsOnCooldown_Implementation(bool cooldown) {
}

void AOMDTrap::NetMulticast_IsDisabled_Implementation(bool Disabled) {
}

void AOMDTrap::NetMulticast_IsActivated_Implementation(bool activated) {
}

void AOMDTrap::NetMulticast_DispatchDamageTaken_Implementation(float Damage, const FDamageEvent& DamageEvent, AController* eventInstigator, AActor* DamageCauser) {
}

bool AOMDTrap::IsShootable() {
    return false;
}

bool AOMDTrap::IsReady() const {
    return false;
}

bool AOMDTrap::IsPlacementType(ETrapPlacementFlags trapPlacementFlags) const {
    return false;
}

bool AOMDTrap::IsOnCooldown() const {
    return false;
}

bool AOMDTrap::IsActive() const {
    return false;
}

void AOMDTrap::HealTrap() {
}

bool AOMDTrap::HasAggroCap() const {
    return false;
}

float AOMDTrap::GetTriggerDuration() const {
    return 0.0f;
}

FUniqueNetIdRepl AOMDTrap::GetTrapOwner() const {
    return FUniqueNetIdRepl{};
}

float AOMDTrap::GetSightRadius() const {
    return 0.0f;
}

float AOMDTrap::GetResetDelay() const {
    return 0.0f;
}

AController* AOMDTrap::GetOwningController() const {
    return NULL;
}

float AOMDTrap::GetMaxHealth() const {
    return 0.0f;
}

int32 AOMDTrap::GetMaxCharges() const {
    return 0;
}

UOMDInventoryItem* AOMDTrap::GetInventoryItem() const {
    return NULL;
}

FText AOMDTrap::GetInteractText() const {
    return FText::GetEmpty();
}

FText AOMDTrap::GetDisplayName() const {
    return FText::GetEmpty();
}

TArray<AActor*> AOMDTrap::GetDamageActorList() const {
    return TArray<AActor*>();
}

int32 AOMDTrap::GetCurrentCharges() const {
    return 0;
}

float AOMDTrap::GetCooldown() const {
    return 0.0f;
}

float AOMDTrap::GetCollateralDamageValue() const {
    return 0.0f;
}

int32 AOMDTrap::GetCoinValue() const {
    return 0;
}

float AOMDTrap::GetChargeCooldown() const {
    return 0.0f;
}

float AOMDTrap::GetBaseHealth() const {
    return 0.0f;
}

UOMDAbilityAttributes* AOMDTrap::GetAttributes() const {
    return NULL;
}

FVector AOMDTrap::GetAttackPoint(FVector attackSourceLocation, AActor* attackSource) {
    return FVector{};
}

void AOMDTrap::DeactivateAbility() {
}

void AOMDTrap::ChangeTrapTriggerDisplay_Implementation(bool NewIsActive) {
}

bool AOMDTrap::CanSell(bool bSellingByPlayer) const {
    return false;
}

bool AOMDTrap::CanInteract(APawn* Pawn) const {
    return false;
}

void AOMDTrap::CancelAbility() {
}

bool AOMDTrap::CanBeDisabled() {
    return false;
}













FText AOMDTrap::BP_GetInteractText_Implementation() const {
    return FText::GetEmpty();
}





bool AOMDTrap::BP_CanSell_Implementation() const {
    return false;
}


bool AOMDTrap::BP_CanInteract_Implementation(APawn* Pawn) const {
    return false;
}


void AOMDTrap::AddToDamageActorList(AActor* Actor) {
}

void AOMDTrap::AddDisable(float Time) {
}

void AOMDTrap::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOMDTrap, MainTrapGrid);
    DOREPLIFETIME(AOMDTrap, MainTrapGridBoxComponent);
    DOREPLIFETIME(AOMDTrap, seamedTrapGrids);
    DOREPLIFETIME(AOMDTrap, bPlayerPlaced);
    DOREPLIFETIME(AOMDTrap, bScenarioDisablesSelling);
    DOREPLIFETIME(AOMDTrap, TrapOwner);
    DOREPLIFETIME(AOMDTrap, protodata);
    DOREPLIFETIME(AOMDTrap, Health);
    DOREPLIFETIME(AOMDTrap, CurrentState);
    DOREPLIFETIME(AOMDTrap, bIsTriggered);
    DOREPLIFETIME(AOMDTrap, bIsReset);
    DOREPLIFETIME(AOMDTrap, bIsActivated);
    DOREPLIFETIME(AOMDTrap, bIsOnCooldown);
    DOREPLIFETIME(AOMDTrap, bIsReady);
    DOREPLIFETIME(AOMDTrap, bIsDisabled);
    DOREPLIFETIME(AOMDTrap, BaseHealthModifier);
    DOREPLIFETIME(AOMDTrap, BaseHealthMultiplier);
    DOREPLIFETIME(AOMDTrap, ParentTrap);
    DOREPLIFETIME(AOMDTrap, ChildTraps);
}


