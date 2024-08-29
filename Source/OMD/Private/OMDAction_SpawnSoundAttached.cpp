#include "OMDAction_SpawnSoundAttached.h"

UOMDAction_SpawnSoundAttached::UOMDAction_SpawnSoundAttached() {
    this->AudioComponent = NULL;
    this->Sound = NULL;
    this->AttachToComponent = NULL;
    this->AttenuationSettings = NULL;
    this->ConcurrencySettings = NULL;
}

void UOMDAction_SpawnSoundAttached::Stop() {
}

UOMDAction_SpawnSoundAttached* UOMDAction_SpawnSoundAttached::SpawnSoundAttached(UOMDAbility* ability, USoundBase* NewSound, USceneComponent* NewAttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* NewAttenuationSettings, USoundConcurrency* NewConcurrencySettings, bool bAutoDestroy) {
    return NULL;
}


