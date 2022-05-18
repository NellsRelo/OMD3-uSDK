#include "OMDAction_SpawnEmitterAtLocation.h"

class UOMDAction_SpawnEmitterAtLocation;
class UParticleSystem;
class UOMDAbility;

UOMDAction_SpawnEmitterAtLocation* UOMDAction_SpawnEmitterAtLocation::SpawnEmitterAtLocation(UOMDAbility* ability, UParticleSystem* NewEmitterTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod) {
    return NULL;
}

UOMDAction_SpawnEmitterAtLocation::UOMDAction_SpawnEmitterAtLocation() {
    this->Emitter = NULL;
    this->emitterTemplate = NULL;
}

