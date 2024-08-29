#include "OMDAbilityActor.h"
#include "Net/UnrealNetwork.h"

AOMDAbilityActor::AOMDAbilityActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->DestructionDelayTime = 0.00f;
    this->Health = 0.00f;
    this->MaxHealth = 0.00f;
    this->HealthBarZOffset = 0.00f;
}

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


