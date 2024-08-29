#include "OMDAction_LaunchCharacter.h"

UOMDAction_LaunchCharacter::UOMDAction_LaunchCharacter() {
    this->Character = NULL;
    this->Causer = NULL;
}

UOMDAction_LaunchCharacter* UOMDAction_LaunchCharacter::LaunchCharacter(UOMDAbility* ability, AOMDCharacter* NewCharacter, AActor* NewCauser, FVector Direction, float strength, bool useRagdoll, ECharacterWeightClass maxAffectedWeightClass, FVector meshImpulseLocation, FName BoneName) {
    return NULL;
}

void UOMDAction_LaunchCharacter::CharacterReLaunched() {
}

void UOMDAction_LaunchCharacter::CharacterHit(AActor* HitActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

void UOMDAction_LaunchCharacter::CharacterGrounded() {
}

void UOMDAction_LaunchCharacter::CharacterDestroyed(AActor* DestroyedActor) {
}


