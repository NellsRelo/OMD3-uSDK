#include "OMDSpellbookItemDetails.h"

void UOMDSpellbookItemDetails::SetItem(FOMDSoftProtoPtr Item) {
}

int32 UOMDSpellbookItemDetails::GetMaxLevel() const {
    return 0;
}

FOMDSoftProtoPtr UOMDSpellbookItemDetails::GetLevelUpgrade(int32 Level) const {
    return FOMDSoftProtoPtr{};
}






UOMDSpellbookItemDetails::UOMDSpellbookItemDetails() {
    this->CurrentLevel = 0;
}

