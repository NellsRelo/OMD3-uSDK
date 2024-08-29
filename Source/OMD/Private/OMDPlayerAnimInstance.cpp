#include "OMDPlayerAnimInstance.h"

UOMDPlayerAnimInstance::UOMDPlayerAnimInstance() {
    this->Speed = 0.00f;
    this->NormalizedSpeed = 0.00f;
    this->bIsInAir = false;
    this->bMovementAbilityActive = false;
    this->bUseMovementAbilityLowerBodyLocomotion = false;
    this->MovementAbility = ECharacterMovementAbilities::None;
    this->bIsCombatReady = false;
    this->bUseFrozenPoseSnapshot = false;
    this->ForwardLocomotionValue = 0.00f;
    this->RightLocomotionValue = 0.00f;
    this->PelvisTwist = 0.00f;
    this->AimPitch = 0.00f;
    this->AimYaw = 0.00f;
    this->RootYawOffset = 0.00f;
    this->bIsFlinching = false;
    this->bInMountableTrap = false;
    this->StatusEffectCategory = EStatusEffectCategory::None;
    this->HandToIK = ESide::None;
    this->bUseFootIK = false;
    this->IdleUpperBodyAnimation = NULL;
    this->IdleUpperBodyCombatReadyAnimation = NULL;
    this->LocomotionUpperBodyAnimation = NULL;
    this->StopUpperBodyAnimation = NULL;
    this->LocomotionUpperBodyCombatReadyAnimation = NULL;
    this->LocomotionUpperBodyCombatReadyTimerLength = 0.00f;
    this->AimOffsetUpperBodyAnimation = NULL;
    this->AimOffsetUpperBodyCombatReadyAnimation = NULL;
    this->JumpEnterUpperBodyAnimation = NULL;
    this->JumpIdleUpperBodyAnimation = NULL;
    this->JumpLandUpperBodyAnimation = NULL;
    this->StunAnimation = NULL;
}

void UOMDPlayerAnimInstance::UpdateItemData(UOMDInventoryItem* Item) {
}

void UOMDPlayerAnimInstance::SetStatusEffectCategory(EStatusEffectCategory newCategory) {
}

void UOMDPlayerAnimInstance::LoadAnimationSet(FOMDSoftProtoPtr animationSet) {
}

void UOMDPlayerAnimInstance::EquipNewItem(UAnimMontage* equipMontage) {
}


