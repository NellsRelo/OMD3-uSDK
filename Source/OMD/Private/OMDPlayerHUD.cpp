#include "OMDPlayerHUD.h"

AOMDPlayerHUD::AOMDPlayerHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->Widget = NULL;
}


