#include "OMDAction_ChangeElement.h"

class UOMDAction_ChangeElement;
class UOMDAbility;
class AOMDAIFlyerCharacter;

UOMDAction_ChangeElement* UOMDAction_ChangeElement::LaunchProjectile(UOMDAbility* ability, EChromaticaElements NewElement, AOMDAIFlyerCharacter* NewTarget) {
    return NULL;
}

UOMDAction_ChangeElement::UOMDAction_ChangeElement() {
    this->element = EChromaticaElements::Fire;
    this->Target = NULL;
}

