#include "OMDAICharacterGuardian.h"
#include "Net/UnrealNetwork.h"

AOMDAICharacterGuardian::AOMDAICharacterGuardian(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MapDisplayComponent = NULL;
    this->bIsRecovering = false;
    this->bIsIdleOnPodium = false;
}

void AOMDAICharacterGuardian::SetIsRecovering(bool newValue) {
}

void AOMDAICharacterGuardian::SetIsIdleOnPodium(bool newValue) {
}

void AOMDAICharacterGuardian::OnRep_IsRecovering() {
}

void AOMDAICharacterGuardian::OnRep_IsIdleOnPodium() {
}

AOMDTrap* AOMDAICharacterGuardian::GetSpawnedFromTrap() const {
    return NULL;
}

void AOMDAICharacterGuardian::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOMDAICharacterGuardian, bIsRecovering);
    DOREPLIFETIME(AOMDAICharacterGuardian, bIsIdleOnPodium);
}


