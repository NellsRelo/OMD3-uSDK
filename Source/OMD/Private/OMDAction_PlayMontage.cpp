#include "OMDAction_PlayMontage.h"

UOMDAction_PlayMontage::UOMDAction_PlayMontage() {
    this->Montage = NULL;
}

void UOMDAction_PlayMontage::Stop() {
}

UOMDAction_PlayMontage* UOMDAction_PlayMontage::PlayMontage(UOMDAbility* ability, UAnimMontage* NewMontage, float Rate, float StartPosition, FName startSection) {
    return NULL;
}

void UOMDAction_PlayMontage::MontageEnded(UAnimMontage* NewMontage, bool bInterrupted) {
}

void UOMDAction_PlayMontage::MontageBlendingOutStarted(UAnimMontage* NewMontage, bool bInterrupted) {
}


