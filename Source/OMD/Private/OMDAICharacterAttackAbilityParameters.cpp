#include "OMDAICharacterAttackAbilityParameters.h"

UOMDAICharacterAttackAbilityParameters::UOMDAICharacterAttackAbilityParameters() {
    this->Source = NULL;
    this->Destination = NULL;
    this->cooldown = 0.00f;
    this->bIsRangedAbility = false;
    this->MontagePlaybackSpeed = 0.00f;
    this->Damage = 0.00f;
    this->DamageType = NULL;
    this->GibChance = 0.00f;
    this->DeathAnimation = EDeathAnimationCategory::None;
    this->Radius = 0.00f;
    this->StatusEffect0Duration = 0.00f;
    this->StatusEffect1Duration = 0.00f;
    this->bUseProjectile = false;
    this->projectile = NULL;
    this->ToSpawnOnProjectileImpact = NULL;
    this->pierceCount = 0;
    this->ProjectileLifetime = 0.00f;
    this->ProjectileSpeed = 0.00f;
    this->ProjectileHomingAccellerationMagnitude = 0.00f;
    this->bProjectileShouldArc = false;
    this->ProjectileArc = 0.00f;
    this->DamageCauser = NULL;
}


