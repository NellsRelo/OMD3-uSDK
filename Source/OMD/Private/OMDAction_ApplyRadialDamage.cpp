#include "OMDAction_ApplyRadialDamage.h"
#include "Templates/SubclassOf.h"

class UOMDAbility;
class AActor;
class UOMDAction_ApplyRadialDamage;
class UOMDDamageType;

UOMDAction_ApplyRadialDamage* UOMDAction_ApplyRadialDamage::ApplyRadialDamage(UOMDAbility* ability, float BaseDamage, float ChanceToGib, EDeathAnimationCategory DeathAnimation, const FVector& Origin, float OuterRadius, AActor* NewDamageCauser, AActor* NewOverrideContextActor, TArray<AActor*> NewAdditionalActorsToIgnore, TSubclassOf<UOMDDamageType> NewDamageTypeClass, float ImpulseForceOnDeath, float impulseForceFalloff, FVector HitDirectionOverride, FVector hitDirectionOriginOffset, float MinimumDamage, float InnerRadius, float DamageFalloff, TEnumAsByte<ECollisionChannel> damagePreventionChannel, bool ignoreTeams, bool damageProjectiles) {
    return NULL;
}

UOMDAction_ApplyRadialDamage::UOMDAction_ApplyRadialDamage() {
    this->DamageTypeClass = NULL;
    this->DamageCauser = NULL;
    this->overrideContextActor = NULL;
}

