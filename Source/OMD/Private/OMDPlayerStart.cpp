#include "OMDPlayerStart.h"

AOMDPlayerStart::AOMDPlayerStart() : APlayerStart(FObjectInitializer::Get()) {
    this->bAllowDuringBreaks = true;
    this->bAllowDuringWaves = true;
}

