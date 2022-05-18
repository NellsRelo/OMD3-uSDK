#include "OMDCampaignProto.h"

FOMDCampaignProto::FOMDCampaignProto() {
    this->bUseLevelIntros = false;
    this->bUseLevelCinematics = false;
    this->bUseMissionUnlocks = false;
    this->bUseNPE = false;
    this->bUseDifficultySelection = false;
    this->bUseSavedLoadout = false;
    this->bRequiresEntitlement = false;
    this->WeaponNPEStyle = EOMDWeaponNPEStyle::NoWeaponNPE;
}

