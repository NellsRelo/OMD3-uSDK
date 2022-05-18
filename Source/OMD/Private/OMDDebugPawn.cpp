#include "OMDDebugPawn.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FloatingPawnMovement -FallbackName=FloatingPawnMovement

AOMDDebugPawn::AOMDDebugPawn() {
    this->MovementComponent = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("MovementComponent"));
}

