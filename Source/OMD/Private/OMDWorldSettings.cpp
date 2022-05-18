#include "OMDWorldSettings.h"
#include "Net/UnrealNetwork.h"

bool AOMDWorldSettings::UseReducedDeathFX() {
    return false;
}

void AOMDWorldSettings::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOMDWorldSettings, bIsHostOptimizedMinions);
}

AOMDWorldSettings::AOMDWorldSettings() {
    this->bIsWarScenario = false;
    this->bIsHostOptimizedMinions = false;
    this->bMapDataEnabled = true;
}

