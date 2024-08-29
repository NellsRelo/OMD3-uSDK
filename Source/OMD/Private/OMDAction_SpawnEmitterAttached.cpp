#include "OMDAction_SpawnEmitterAttached.h"

UOMDAction_SpawnEmitterAttached::UOMDAction_SpawnEmitterAttached() {
    this->Emitter = NULL;
    this->emitterTemplate = NULL;
    this->AttachToComponent = NULL;
}

UOMDAction_SpawnEmitterAttached* UOMDAction_SpawnEmitterAttached::SpawnEmitterAttached(UOMDAbility* ability, UParticleSystem* NewEmitterTemplate, USceneComponent* NewAttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> LocationType, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool useAbsoluteRoatation) {
    return NULL;
}


