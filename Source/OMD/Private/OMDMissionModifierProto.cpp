#include "OMDMissionModifierProto.h"

FOMDMissionModifierProto::FOMDMissionModifierProto() {
    this->BaseHealth = 0.00f;
    this->HealthRegenRate = 0.00f;
    this->BaseMana = 0.00f;
    this->BaseManaRegenRate = 0.00f;
    this->RiftPoints = 0;
    this->bUseLoadoutOverride = false;
    this->bUsePlayerCharacterOverride = false;
    this->bUseBaseHealthOverride = false;
    this->bUseHealthRegenRateOverride = false;
    this->bUseBaseManaOverride = false;
    this->bUseBaseManaRegenRateOverride = false;
    this->bUseAllCharacterModifiersOverride = false;
    this->bUsePerCharacterModifiersOverride = false;
    this->bUseRiftPointOverride = false;
    this->bUseOnslaughtCoordinatorOverride = false;
}

