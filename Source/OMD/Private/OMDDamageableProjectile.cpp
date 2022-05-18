#include "OMDDamageableProjectile.h"

class AController;
class AActor;

void AOMDDamageableProjectile::NetMulticast_DamageTaken_Implementation(float Damage, bool isRadialDamage, AController* eventInstigator, AActor* DamageCauser) {
}

void AOMDDamageableProjectile::BP_DamageTaken_Implementation(float Damage, bool isRadialDamage, AController* eventInstigator, AActor* DamageCauser) {
}

AOMDDamageableProjectile::AOMDDamageableProjectile() {
}

