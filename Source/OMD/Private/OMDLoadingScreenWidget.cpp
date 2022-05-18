#include "OMDLoadingScreenWidget.h"

void UOMDLoadingScreenWidget::PlayLevelIntro() {
}

UOMDLoadingScreenWidget::UOMDLoadingScreenWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bCloseOnLevelLoad = false;
}

