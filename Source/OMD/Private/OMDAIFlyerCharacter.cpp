#include "OMDAIFlyerCharacter.h"

void AOMDAIFlyerCharacter::OnHitGroundDeath(const FHitResult& ImpactResult, const FVector& ImpactVelocity) {
}


AOMDAIFlyerCharacter::AOMDAIFlyerCharacter() {
    this->bIsSmallCharacter = false;
    this->CurrentElement = EChromaticaElements::Fire;
}

