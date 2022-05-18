#include "OMDAction_SpawnSoundAtLocation.h"

class UOMDAbility;
class USoundBase;
class USoundAttenuation;
class USoundConcurrency;
class UOMDAction_SpawnSoundAtLocation;

UOMDAction_SpawnSoundAtLocation* UOMDAction_SpawnSoundAtLocation::SpawnSoundAtLocation(UOMDAbility* ability, USoundBase* NewSound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* NewAttenuationSettings, USoundConcurrency* NewConcurrencySettings, bool bAutoDestroy) {
    return NULL;
}

UOMDAction_SpawnSoundAtLocation::UOMDAction_SpawnSoundAtLocation() {
    this->AudioComponent = NULL;
    this->Sound = NULL;
    this->AttenuationSettings = NULL;
    this->ConcurrencySettings = NULL;
}

