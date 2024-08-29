#include "OMDCharacterKillVolume.h"

AOMDCharacterKillVolume::AOMDCharacterKillVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bKillMinions = true;
    this->bKillPlayers = true;
}

void AOMDCharacterKillVolume::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor) {
}


