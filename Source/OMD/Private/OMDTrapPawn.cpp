#include "OMDTrapPawn.h"
#include "Navigation/PathFollowingComponent.h"
#include "Components/CapsuleComponent.h"
#include "OMDAbilitySystemComponent.h"

AOMDTrapPawn::AOMDTrapPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
    this->PathFollowingComponent = CreateDefaultSubobject<UPathFollowingComponent>(TEXT("Path Following Component"));
    this->MovementComponent = NULL;
    this->CapsuleComponent = (UCapsuleComponent*)RootComponent;
    this->abilitySystem = CreateDefaultSubobject<UOMDAbilitySystemComponent>(TEXT("abilitySystem"));
}


