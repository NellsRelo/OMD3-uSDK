#include "OMDCharacter.h"
#include "Net/UnrealNetwork.h"
#include "OMDDialogueComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIPerceptionStimuliSourceComponent -FallbackName=AIPerceptionStimuliSourceComponent
#include "OMDAbilitySystemComponent.h"
#include "OMDLaunchMovementComponent.h"
#include "OMDMapDisplayComponent.h"
#include "OMDStatusEffectComponent.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"

class AActor;
class AController;

void AOMDCharacter::SetWeightClass(ECharacterWeightClass newWeightClass) {
}

void AOMDCharacter::SetAllowAggro(bool AllowAggro) {
}

void AOMDCharacter::RequestDialogue(FName concept) {
}

void AOMDCharacter::OnRep_Protodata() {
}

void AOMDCharacter::OnRep_IsDead() {
}

void AOMDCharacter::OnRep_Health(float oldHealth) {
}

void AOMDCharacter::OnRep_CurrentVFXStatusEffect() {
}

void AOMDCharacter::OnRep_CurrentAnimStatusEffect() {
}

void AOMDCharacter::OnLaunchSimulationStop(const FHitResult& ImpactResult) {
}

void AOMDCharacter::OnLaunchCollision(const FHitResult& ImpactResult, const FVector& ImpactVelocity) {
}

void AOMDCharacter::NetMulticast_ReceiveRespawned_Implementation() {
}

void AOMDCharacter::NetMulticast_Ground_Implementation() {
}

void AOMDCharacter::Ground() {
}

float AOMDCharacter::GetMaxHealth() const {
    return 0.0f;
}

float AOMDCharacter::GetHealth() const {
    return 0.0f;
}

FGenericTeamId AOMDCharacter::GetGenericTeamId() const {
    return FGenericTeamId{};
}

FVector AOMDCharacter::GetAttackPoint(FVector attackSourceLocation, AActor* attackSource) {
    return FVector{};
}

void AOMDCharacter::GatherRadialTargets(TArray<AActor*>& OutTargets, const FVector& Origin, float Radius, const TArray<AActor*>& IgnoreActors, AController* InstigatedByController, TEnumAsByte<ECollisionChannel> visibilityChannel) {
}











void AOMDCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOMDCharacter, protodata);
    DOREPLIFETIME(AOMDCharacter, bIsDead);
    DOREPLIFETIME(AOMDCharacter, Health);
    DOREPLIFETIME(AOMDCharacter, CurrentVFXStatusEffectProto);
    DOREPLIFETIME(AOMDCharacter, CurrentAnimStatusEffectProto);
    DOREPLIFETIME(AOMDCharacter, StatusEffectMovementModifier);
}

AOMDCharacter::AOMDCharacter() {
    this->bIsDead = false;
    this->Health = 0.00f;
    this->bCanCauseCollateralDamage = false;
    this->HealthBarZOffset = 0.00f;
    this->DialogueComponent = CreateDefaultSubobject<UOMDDialogueComponent>(TEXT("DialogueComponent"));
    this->AIPerceptionStimuliSource = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("StimuliSource"));
    this->abilitySystem = CreateDefaultSubobject<UOMDAbilitySystemComponent>(TEXT("abilitySystem"));
    this->WeightClass = ECharacterWeightClass::Immovable;
    this->LaunchMovementComponent = CreateDefaultSubobject<UOMDLaunchMovementComponent>(TEXT("LaunchMovement"));
    this->MapDisplayComponent = CreateDefaultSubobject<UOMDMapDisplayComponent>(TEXT("MapDisplay"));
    this->StatusEffectComponent = CreateDefaultSubobject<UOMDStatusEffectComponent>(TEXT("StatusEffectComponent"));
    this->CurrentVFXStatusEffect = NULL;
    this->CurrentAnimStatusEffect = NULL;
    this->StatusEffectMovementModifier = 1.00f;
}

