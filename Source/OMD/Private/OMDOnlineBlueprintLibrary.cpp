#include "OMDOnlineBlueprintLibrary.h"

UOMDOnlineBlueprintLibrary::UOMDOnlineBlueprintLibrary() {
}

bool UOMDOnlineBlueprintLibrary::ShowAccountUpgradeUI(APlayerController* Controller) {
    return false;
}

bool UOMDOnlineBlueprintLibrary::SetUsingMultiplayerFeatureForAll(UObject* WorldContextObject, bool usingFeature) {
    return false;
}

bool UOMDOnlineBlueprintLibrary::SetUsingMultiplayerFeature(APlayerController* Controller, bool usingFeature) {
    return false;
}

void UOMDOnlineBlueprintLibrary::CanPlayOnline_Xbox(int32 PlayerIndex, bool& bSuccess, EUserPermissionsErrorTypes& primaryError, TArray<EUserPermissionsErrorTypes>& allErrors) {
}


