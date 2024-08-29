#include "OMDCinematicScriptActor.h"

AOMDCinematicScriptActor::AOMDCinematicScriptActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CinematicWidgetClass = NULL;
    this->PostCinematicWidgetClass = NULL;
    this->CinematicWidget = NULL;
    this->LevelSequence = NULL;
    this->LevelSequenceActor = NULL;
}

void AOMDCinematicScriptActor::SkipCinematic() {
}

void AOMDCinematicScriptActor::LevelSequenceFinished() {
}

void AOMDCinematicScriptActor::BP_CinematicFinished_Implementation() {
}


