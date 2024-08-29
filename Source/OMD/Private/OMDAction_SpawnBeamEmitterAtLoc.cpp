#include "OMDAction_SpawnBeamEmitterAtLoc.h"

UOMDAction_SpawnBeamEmitterAtLoc::UOMDAction_SpawnBeamEmitterAtLoc() {
    this->Emitter = NULL;
    this->emitterTemplate = NULL;
}

UOMDAction_SpawnBeamEmitterAtLoc* UOMDAction_SpawnBeamEmitterAtLoc::SpawnBeamEmitterAtLocation(UOMDAbility* ability, UParticleSystem* NewEmitterTemplate, TArray<FBeamPointStruct> sourcePoints, TArray<FBeamPointStruct> targetPoints, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod) {
    return NULL;
}


