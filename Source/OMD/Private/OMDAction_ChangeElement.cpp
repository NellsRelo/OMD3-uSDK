#include "OMDAction_ChangeElement.h"

UOMDAction_ChangeElement::UOMDAction_ChangeElement() {
    this->element = EChromaticaElements::Fire;
    this->Target = NULL;
}

UOMDAction_ChangeElement* UOMDAction_ChangeElement::LaunchProjectile(UOMDAbility* ability, EChromaticaElements NewElement, AOMDAIFlyerCharacter* NewTarget) {
    return NULL;
}


