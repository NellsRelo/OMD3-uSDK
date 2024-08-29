#include "OMDAsyncTaskShowModalWidget.h"
#include "Templates/SubclassOf.h"

UOMDAsyncTaskShowModalWidget::UOMDAsyncTaskShowModalWidget() {
}

UOMDAsyncTaskShowModalWidget* UOMDAsyncTaskShowModalWidget::ShowModalWidget(APlayerController* OwningPlayer, TSubclassOf<UOMDModalWidget> Widget) {
    return NULL;
}

UOMDModalWidget* UOMDAsyncTaskShowModalWidget::GetModal() const {
    return NULL;
}


