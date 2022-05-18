#include "OMDTargetingSettings.h"

FOMDTargetingSettings::FOMDTargetingSettings() {
    this->bUseIgnoreList = false;
    this->bUseNoticeList = false;
    this->bUseVisualCategoriesIgnoreList = false;
    this->bUseVisualCategoriesNoticeList = false;
    this->bIgnoreDisabledTraps = false;
    this->Prioritization = ETargetingPrioritization::Distance;
    this->CurrentNodeBlockingType = ECurrentBlockingTargetingType::TargetRegardlessOfBlocked;
    this->bCanTargetUndamageables = false;
    this->bCanTargetDead = false;
    this->bShouldOnlyTargetDead = false;
}

