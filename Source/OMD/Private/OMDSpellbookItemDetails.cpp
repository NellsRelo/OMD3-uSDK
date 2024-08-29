#include "OMDSpellbookItemDetails.h"

UOMDSpellbookItemDetails::UOMDSpellbookItemDetails() {
    this->CurrentLevel = 0;
}

void UOMDSpellbookItemDetails::SetItem(FOMDSoftProtoPtr Item) {
}

int32 UOMDSpellbookItemDetails::GetMaxLevel() const {
    return 0;
}

FOMDSoftProtoPtr UOMDSpellbookItemDetails::GetLevelUpgrade(int32 Level) const {
    return FOMDSoftProtoPtr{};
}







