#include "OMDWidgetBlueprintLibrary.h"
#include "Templates/SubclassOf.h"

UOMDWidgetBlueprintLibrary::UOMDWidgetBlueprintLibrary() {
}

TArray<UOMDInventoryItem*> UOMDWidgetBlueprintLibrary::SortInventoryItems(const TArray<UOMDInventoryItem*>& Items, EOMDInventoryOrdering ordering) {
    return TArray<UOMDInventoryItem*>();
}

UUserWidget* UOMDWidgetBlueprintLibrary::NavigateTo(APlayerController* OwningPlayer, FOMDSoftProtoPtr OMDScreenProto) {
    return NULL;
}

UUserWidget* UOMDWidgetBlueprintLibrary::NavigateBack() {
    return NULL;
}

bool UOMDWidgetBlueprintLibrary::IsModalInStack(TSubclassOf<UOMDModalWidget> Widget) {
    return false;
}

FText UOMDWidgetBlueprintLibrary::GetPlacementTypeDisplayName(FOMDSoftProtoPtr Item) {
    return FText::GetEmpty();
}

float UOMDWidgetBlueprintLibrary::GetDPIScaleBasedOnSize(int32 Width, int32 Height) {
    return 0.0f;
}

void UOMDWidgetBlueprintLibrary::GetCurrentScreen(FOMDSoftProtoPtr& OMDScreenProto) {
}

void UOMDWidgetBlueprintLibrary::CloseAllModals() {
}


