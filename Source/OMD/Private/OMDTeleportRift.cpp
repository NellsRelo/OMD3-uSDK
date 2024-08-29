#include "OMDTeleportRift.h"
#include "OMDMapDisplayComponent.h"

AOMDTeleportRift::AOMDTeleportRift(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MapDisplayComponent = CreateDefaultSubobject<UOMDMapDisplayComponent>(TEXT("MapDisplay"));
}


