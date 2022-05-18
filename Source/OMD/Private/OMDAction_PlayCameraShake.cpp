#include "OMDAction_PlayCameraShake.h"
#include "Templates/SubclassOf.h"

class UOMDAbility;
class UOMDAction_PlayCameraShake;
class UMatineeCameraShake;

UOMDAction_PlayCameraShake* UOMDAction_PlayCameraShake::PlayCameraShake(UOMDAbility* ability, TSubclassOf<UMatineeCameraShake> NewCameraShake, float Scale) {
    return NULL;
}

UOMDAction_PlayCameraShake::UOMDAction_PlayCameraShake() {
    this->CameraShake = NULL;
}

