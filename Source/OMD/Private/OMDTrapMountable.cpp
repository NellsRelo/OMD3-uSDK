#include "OMDTrapMountable.h"
#include "Components/ChildActorComponent.h"
#include "Net/UnrealNetwork.h"

AOMDTrapMountable::AOMDTrapMountable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OccupyingPlayerPawn = NULL;
    this->TrapPawnComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("MountableTrapPawn"));
    this->TrapPawnComponent->SetupAttachment(RootComponent);
}

void AOMDTrapMountable::OnRep_OccupyingPlayerPawn(AOMDPlayerCharacter* previousValue) {
}

AOMDPlayerCharacter* AOMDTrapMountable::GetOccupyingPlayerPawn() const {
    return NULL;
}

AOMDPlayerController* AOMDTrapMountable::GetOccupyingPlayerController() const {
    return NULL;
}

void AOMDTrapMountable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOMDTrapMountable, OccupyingPlayerPawn);
}


