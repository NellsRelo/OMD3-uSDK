#include "NavPowerNavigationData.h"

void ANavPowerNavigationData::OnCheckRenderFlag() {
}

ANavPowerNavigationData::ANavPowerNavigationData() {
    this->bIsPrimaryNavData = false;
    this->NavPowerLayerIndex = 0;
    this->NavMeshBufferSize = 0;
    this->NavVolumesBufferSize = 0;
}

