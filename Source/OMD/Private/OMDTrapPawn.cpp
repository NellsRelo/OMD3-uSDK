#include "OMDTrapPawn.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=PathFollowingComponent -FallbackName=PathFollowingComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent
#include "OMDAbilitySystemComponent.h"

AOMDTrapPawn::AOMDTrapPawn() {
    this->PathFollowingComponent = CreateDefaultSubobject<UPathFollowingComponent>(TEXT("Path Following Component"));
    this->MovementComponent = NULL;
    this->CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
    this->abilitySystem = CreateDefaultSubobject<UOMDAbilitySystemComponent>(TEXT("abilitySystem"));
}

