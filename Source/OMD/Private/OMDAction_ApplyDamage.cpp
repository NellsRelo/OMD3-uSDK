#include "OMDAction_ApplyDamage.h"
#include "Templates/SubclassOf.h"

UOMDAction_ApplyDamage::UOMDAction_ApplyDamage() {
    this->DamagedActor = NULL;
}

UOMDAction_ApplyDamage* UOMDAction_ApplyDamage::ApplyDamage(UOMDAbility* ability, AActor* NewDamagedActor, float BaseDamage, float ChanceToGib, EDeathAnimationCategory DeathAnimation, AActor* DamageCauser, TSubclassOf<UOMDDamageType> DamageTypeClass, bool IgnoreShielding, bool ignoreTeams) {
    return NULL;
}


