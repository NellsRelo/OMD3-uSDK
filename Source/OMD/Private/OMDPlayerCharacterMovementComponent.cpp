#include "OMDPlayerCharacterMovementComponent.h"

UOMDPlayerCharacterMovementComponent::UOMDPlayerCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FeatherFallSpeedScale = 0.00f;
    this->FeatherFallZVelocity = 0.00f;
    this->GroundSlamZVelocity = 0.00f;
    this->GroundSlamEnterDelay = 0.00f;
    this->GroundSlamExitDelay = 0.00f;
    this->TeleportSpeed = 0.00f;
    this->TeleportEnterDelay = 0.00f;
    this->TeleportMoveTime = 0.00f;
    this->FeignDeathExitDelay = 0.00f;
    this->LevitateMoveSpeed = 500.00f;
    this->bShouldLevitateTeleport = false;
    this->LevitateOriginPS = NULL;
}


