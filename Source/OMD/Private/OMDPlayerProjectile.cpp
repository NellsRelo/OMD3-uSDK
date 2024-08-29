#include "OMDPlayerProjectile.h"

AOMDPlayerProjectile::AOMDPlayerProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanInteractWithTraps = true;
    this->bCanHeadshot = false;
}


