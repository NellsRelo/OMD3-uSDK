#include "OMDPath.h"

FOMDPath::FOMDPath() {
    this->bLoop = false;
    this->CurrentPathNodeIdx = 0;
    this->NextPathNodeIdx = 0;
    this->PreviousPathNodeIdx = 0;
    this->CurrentResetDist = 0.00f;
    this->CurrentFormationIndex = 0;
    this->CurrentFormationSize = 0;
}

