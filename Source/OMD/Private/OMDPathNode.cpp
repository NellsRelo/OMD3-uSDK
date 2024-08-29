#include "OMDPathNode.h"

FOMDPathNode::FOMDPathNode() {
    this->PointIndex = 0;
    this->Radius = 0.00f;
    this->FormationSize = 0;
    this->FormationSpacing = 0.00f;
    this->bIsStartNode = false;
    this->bIsExitNode = false;
    this->bFlyersOnly = false;
    this->bGroundOnly = false;
    this->FlightHeight = 0.00f;
    this->bHasVisited = false;
    this->NodeCost = 0.00f;
    this->PreviousIndex = 0;
    this->AssociatedPathPoint = NULL;
}

