#include "OMDCinematicScriptActor.h"

void AOMDCinematicScriptActor::SkipCinematic() {
}

void AOMDCinematicScriptActor::LevelSequenceFinished() {
}

void AOMDCinematicScriptActor::BP_CinematicFinished_Implementation() {
}

AOMDCinematicScriptActor::AOMDCinematicScriptActor() {
    this->CinematicWidgetClass = NULL;
    this->PostCinematicWidgetClass = NULL;
    this->CinematicWidget = NULL;
    this->LevelSequence = NULL;
    this->LevelSequenceActor = NULL;
}

