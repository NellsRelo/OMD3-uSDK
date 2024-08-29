#include "OMDDialogueComponent.h"

UOMDDialogueComponent::UOMDDialogueComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->Ruleset = NULL;
    this->Responses = NULL;
}


