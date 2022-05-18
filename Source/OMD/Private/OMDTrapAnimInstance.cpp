#include "OMDTrapAnimInstance.h"

void UOMDTrapAnimInstance::SetDisabled(bool Value) {
}

void UOMDTrapAnimInstance::DoTrigger() {
}

void UOMDTrapAnimInstance::DoReset() {
}

void UOMDTrapAnimInstance::DoCooldown() {
}

UOMDTrapAnimInstance::UOMDTrapAnimInstance() {
    this->bIsTriggered = false;
    this->bIsActive = false;
    this->bIsResetting = false;
    this->bIsDisabled = false;
}

