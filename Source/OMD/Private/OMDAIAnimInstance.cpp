#include "OMDAIAnimInstance.h"

UOMDAIAnimInstance::UOMDAIAnimInstance() {
    this->Speed = 0.00f;
    this->NormalizedSpeed = 0.00f;
    this->bIsMoving = false;
    this->bIsFlinching = false;
    this->FlinchDirection = EFlinchDirection::Undefined;
    this->bIsDead = false;
    this->bIsAttacking = false;
    this->bUseGroundedPoseSnapshot = false;
    this->bUseFrozenPoseSnapshot = false;
    this->bIsShielded = false;
    this->ShieldBlend = 0.00f;
    this->AttackMontage = NULL;
    this->StatusEffectCategory = EStatusEffectCategory::None;
    this->DeathAnimationCategory = EDeathAnimationCategory::None;
}

void UOMDAIAnimInstance::UpdateDeathAnimationCategoryBools() {
}

void UOMDAIAnimInstance::StopAttack() {
}

void UOMDAIAnimInstance::SetStatusEffectCategory(EStatusEffectCategory newCategory) {
}

void UOMDAIAnimInstance::SetIsShielded(bool isShielded) {
}

void UOMDAIAnimInstance::DoFlinch(EFlinchDirection Direction) {
}

void UOMDAIAnimInstance::DoDie() {
}

void UOMDAIAnimInstance::DoAttack() {
}


