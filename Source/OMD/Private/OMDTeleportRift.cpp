#include "OMDTeleportRift.h"
#include "OMDMapDisplayComponent.h"

AOMDTeleportRift::AOMDTeleportRift() {
    this->MapDisplayComponent = CreateDefaultSubobject<UOMDMapDisplayComponent>(TEXT("MapDisplay"));
}

