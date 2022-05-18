#include "OMDAction_SetTrapEnabledState.h"

class UOMDAbility;
class AOMDTrap;
class UOMDAction_SetTrapEnabledState;
class AActor;

UOMDAction_SetTrapEnabledState* UOMDAction_SetTrapEnabledState::SetTrapEnabledState(UOMDAbility* ability, AOMDTrap* NewTargetTrap, AActor* Causer, float Duration) {
    return NULL;
}

UOMDAction_SetTrapEnabledState::UOMDAction_SetTrapEnabledState() {
    this->targetTrap = NULL;
}

