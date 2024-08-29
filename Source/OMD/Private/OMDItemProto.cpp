#include "OMDItemProto.h"

FOMDItemProto::FOMDItemProto() {
    this->AquiredBy = EItemAquiredBy::Internal;
    this->SkullCost = 0;
    this->PlayerMaterialModifier = EOMDPlayerMaterialModifiers::None;
    this->bRequiresEntitlement = false;
    this->bDevelopmentOnly = false;
}

