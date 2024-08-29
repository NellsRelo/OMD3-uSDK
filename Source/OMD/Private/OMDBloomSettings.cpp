#include "OMDBloomSettings.h"

FOMDBloomSettings::FOMDBloomSettings() {
    this->MinimumBloomAngle = 0.00f;
    this->MaximumBloomAngle = 0.00f;
    this->BloomRecoveryTime = 0.00f;
    this->BloomRecoveryDelay = 0.00f;
    this->MaxHeadshotRadius = 0.00f;
    this->PrimaryAffectedByBloom = false;
    this->PrimaryBloomContribution = 0.00f;
    this->SecondaryAffectedByBloom = false;
    this->SecondaryBloomContribution = 0.00f;
}

