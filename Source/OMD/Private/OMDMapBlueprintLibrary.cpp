#include "OMDMapBlueprintLibrary.h"
#include "Templates/SubclassOf.h"

UOMDMapBlueprintLibrary::UOMDMapBlueprintLibrary() {
}

void UOMDMapBlueprintLibrary::RequestPing(const FUniqueNetIdRepl& netId, AActor* Actor, FGuid Guid) {
}

void UOMDMapBlueprintLibrary::RequestMapWidget(AActor* Actor, TSubclassOf<UUserWidget> Widget) {
}

void UOMDMapBlueprintLibrary::RemovePingCallback(const FOMDMapManagerPingRequestedBPCallback& Callback) {
}

void UOMDMapBlueprintLibrary::RemoveMapWidgetCallback(const FOMDMapManagerWidgetRequestedBPCallback& Callback) {
}

void UOMDMapBlueprintLibrary::GetRotationOnMap(APlayerController* OwningPlayer, AActor* Actor, float& Rotation) {
}

UTexture2D* UOMDMapBlueprintLibrary::GetMapTexture(APlayerController* OwningPlayer) {
    return NULL;
}

void UOMDMapBlueprintLibrary::GetLocationOnMap(APlayerController* OwningPlayer, AActor* Actor, FVector2D mapSize, FVector2D& Location) {
}

void UOMDMapBlueprintLibrary::AddPingCallback(const FOMDMapManagerPingRequestedBPCallback& Callback) {
}

void UOMDMapBlueprintLibrary::AddMapWidgetCallback(const FOMDMapManagerWidgetRequestedBPCallback& Callback) {
}


