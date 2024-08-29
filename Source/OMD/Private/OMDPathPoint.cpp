#include "OMDPathPoint.h"

AOMDPathPoint::AOMDPathPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ParentPath = NULL;
    this->PointIndex = 0;
    this->ReachRadius = 100.00f;
    this->FormationSize = 1;
    this->FormationSpacing = 1.50f;
    this->bIsStartPoint = false;
    this->bIsExitPoint = false;
    this->bFlyersOnly = false;
    this->bGroundOnly = false;
    this->FlightHeight = 400.00f;
}

void AOMDPathPoint::SetParentAIPath(AOMDAIPath* newParentPath) {
}


