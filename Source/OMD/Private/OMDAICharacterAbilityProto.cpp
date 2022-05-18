#include "OMDAICharacterAbilityProto.h"

FOMDAICharacterAbilityProto::FOMDAICharacterAbilityProto() {
    this->cooldown = 0.00f;
    this->bUsesExternalTargeting = false;
    this->bCanMoveToTarget = false;
    this->bCanContinueIfTargetIsDead = false;
    this->bOrientToTarget = false;
    this->bIsRangedAbility = false;
    this->AbilityMinimumRange = 0.00f;
    this->AbilityEnterRange = 0.00f;
    this->AbilityExitRange = 0.00f;
    this->MontagePlaybackSpeed = 0.00f;
    this->Damage = 0.00f;
    this->GibChance = 0.00f;
    this->DeathAnimation = EDeathAnimationCategory::None;
    this->Radius = 0.00f;
    this->StatusEffect0Duration = 0.00f;
    this->StatusEffect1Duration = 0.00f;
    this->bUseProjectile = false;
    this->pierceCount = 0;
    this->ProjectileLifetime = 0.00f;
    this->ProjectileSpeed = 0.00f;
    this->ProjectileHomingAccellerationMagnitude = 0.00f;
    this->bProjectileShouldArc = false;
    this->ProjectileArc = 0.00f;
    this->bIsEmpty = false;
}

