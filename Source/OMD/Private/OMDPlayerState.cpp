#include "OMDPlayerState.h"
#include "Net/UnrealNetwork.h"

AOMDPlayerState::AOMDPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseNPE = false;
    this->WorldInventory = NULL;
    this->HealthRegenRate = 0.00f;
    this->MaxHealthModifier = 0.00f;
    this->ManaCapacityMultiplier = 1.00f;
}

void AOMDPlayerState::Server_SetMaxHealthModifier_Implementation(float modifier) {
}
bool AOMDPlayerState::Server_SetMaxHealthModifier_Validate(float modifier) {
    return true;
}

void AOMDPlayerState::Server_SetManaCapacityMultiplier_Implementation(float multiplier) {
}
bool AOMDPlayerState::Server_SetManaCapacityMultiplier_Validate(float multiplier) {
    return true;
}

void AOMDPlayerState::Server_SetHealthRegenRate_Implementation(float Rate) {
}
bool AOMDPlayerState::Server_SetHealthRegenRate_Validate(float Rate) {
    return true;
}

void AOMDPlayerState::OnRep_CurrentSkin() {
}

void AOMDPlayerState::OnRep_CurrentCharacter() {
}

void AOMDPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOMDPlayerState, CurrentCharacter);
    DOREPLIFETIME(AOMDPlayerState, CurrentSkin);
    DOREPLIFETIME(AOMDPlayerState, WorldInventory);
    DOREPLIFETIME(AOMDPlayerState, HealthRegenRate);
    DOREPLIFETIME(AOMDPlayerState, MaxHealthModifier);
    DOREPLIFETIME(AOMDPlayerState, ManaCapacityMultiplier);
}


