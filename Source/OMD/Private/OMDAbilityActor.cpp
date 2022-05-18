#include "OMDAbilityActor.h"
#include "Net/UnrealNetwork.h"

class AController;

void AOMDAbilityActor::SetGenericTeamID(FGenericTeamId toSetTo) {
}

void AOMDAbilityActor::OnDestructionDelayTimer() {
}

AController* AOMDAbilityActor::GetNetworkOwner() const {
    return NULL;
}


void AOMDAbilityActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOMDAbilityActor, NetworkOwner);
    DOREPLIFETIME(AOMDAbilityActor, Health);
}

AOMDAbilityActor::AOMDAbilityActor() {
    this->DestructionDelayTime = 0.00f;
    this->Health = 0.00f;
    this->MaxHealth = 0.00f;
    this->HealthBarZOffset = 0.00f;
}

