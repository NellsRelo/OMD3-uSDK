#include "OMDWorldSettings.h"
#include "Net/UnrealNetwork.h"

AOMDWorldSettings::AOMDWorldSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsWarScenario = false;
    this->bIsHostOptimizedMinions = false;
    this->bMapDataEnabled = true;
}

bool AOMDWorldSettings::UseReducedDeathFX() {
    return false;
}

void AOMDWorldSettings::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOMDWorldSettings, bIsHostOptimizedMinions);
}


