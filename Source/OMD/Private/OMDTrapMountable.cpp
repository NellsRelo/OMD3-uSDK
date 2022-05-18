#include "OMDTrapMountable.h"
#include "Net/UnrealNetwork.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent

class AOMDPlayerCharacter;
class AOMDPlayerController;

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

AOMDTrapMountable::AOMDTrapMountable() {
    this->OccupyingPlayerPawn = NULL;
    this->TrapPawnComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("MountableTrapPawn"));
}

