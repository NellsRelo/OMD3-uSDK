#include "OMDStatusEffect.h"
#include "Templates/SubclassOf.h"

UOMDStatusEffect::UOMDStatusEffect() {
    this->StartTime = 0.00f;
    this->Duration = 0.00f;
    this->ExpirationTime = 0.00f;
    this->CurrentState = EStatusEffectState::Dormant;
}

void UOMDStatusEffect::UpdateExpiration(float DeltaTime) {
}

bool UOMDStatusEffect::IsContinousMana() const {
    return false;
}

bool UOMDStatusEffect::IsContinousDamage() const {
    return false;
}

void UOMDStatusEffect::GetVulnerabilities(TArray<FOMDDamageVulnerability>& Vulnerabilities) const {
}

void UOMDStatusEffect::GetVisualCategoryImmunities(TArray<EStatusEffectCategory>& immunities) const {
}

EStatusEffectCategory UOMDStatusEffect::GetVisualCategory() const {
    return EStatusEffectCategory::None;
}

int32 UOMDStatusEffect::GetVFXWeight() const {
    return 0;
}

AActor* UOMDStatusEffect::GetOwner() const {
    return NULL;
}

float UOMDStatusEffect::GetMovementModValue() const {
    return 0.0f;
}

float UOMDStatusEffect::GetManaPerTick() const {
    return 0.0f;
}

float UOMDStatusEffect::GetManaInterval() const {
    return 0.0f;
}

int32 UOMDStatusEffect::GetId() const {
    return 0;
}

float UOMDStatusEffect::GetExpirationTime() const {
    return 0.0f;
}

float UOMDStatusEffect::GetDOTInterval() const {
    return 0.0f;
}

EDeathAnimationCategory UOMDStatusEffect::GetDeathAnimationCategory() const {
    return EDeathAnimationCategory::None;
}

TSubclassOf<UOMDDamageType> UOMDStatusEffect::GetDamageType() const {
    return NULL;
}

float UOMDStatusEffect::GetDamagePerTick() const {
    return 0.0f;
}

EStatusEffectState UOMDStatusEffect::GetCurrentState() const {
    return EStatusEffectState::Dormant;
}

float UOMDStatusEffect::GetCurrentRuntime() const {
    return 0.0f;
}

int32 UOMDStatusEffect::GetAnimWeight() const {
    return 0;
}

UBehaviorTree* UOMDStatusEffect::GetAlternateBehavior() const {
    return NULL;
}







void UOMDStatusEffect::BeginExpiration() {
}


