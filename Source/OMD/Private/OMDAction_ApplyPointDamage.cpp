#include "OMDAction_ApplyPointDamage.h"
#include "Templates/SubclassOf.h"

UOMDAction_ApplyPointDamage::UOMDAction_ApplyPointDamage() {
    this->DamagedActor = NULL;
}

UOMDAction_ApplyPointDamage* UOMDAction_ApplyPointDamage::ApplyPointDamage(UOMDAbility* ability, AActor* NewDamagedActor, float BaseDamage, float ChanceToGib, EDeathAnimationCategory DeathAnimation, const FVector& hitFromDirection, const FHitResult& HitInfo, AActor* DamageCauser, TSubclassOf<UOMDDamageType> DamageTypeClass, float ImpulseForceOnDeath, bool ignoreTeams) {
    return NULL;
}


