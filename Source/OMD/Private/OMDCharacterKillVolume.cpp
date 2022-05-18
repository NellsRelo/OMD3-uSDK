#include "OMDCharacterKillVolume.h"

class AActor;

void AOMDCharacterKillVolume::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor) {
}

AOMDCharacterKillVolume::AOMDCharacterKillVolume() {
    this->bKillMinions = true;
    this->bKillPlayers = true;
}

