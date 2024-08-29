#include "OMDAIFlyerCharacter.h"

AOMDAIFlyerCharacter::AOMDAIFlyerCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsSmallCharacter = false;
    this->CurrentElement = EChromaticaElements::Fire;
}

void AOMDAIFlyerCharacter::OnHitGroundDeath(const FHitResult& ImpactResult, const FVector& ImpactVelocity) {
}



