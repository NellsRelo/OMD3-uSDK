#include "OMDDamageableProjectile.h"

AOMDDamageableProjectile::AOMDDamageableProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AOMDDamageableProjectile::NetMulticast_DamageTaken_Implementation(float Damage, bool isRadialDamage, AController* eventInstigator, AActor* DamageCauser) {
}

void AOMDDamageableProjectile::BP_DamageTaken_Implementation(float Damage, bool isRadialDamage, AController* eventInstigator, AActor* DamageCauser) {
}


