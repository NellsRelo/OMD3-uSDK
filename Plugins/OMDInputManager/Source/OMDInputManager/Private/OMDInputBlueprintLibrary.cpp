#include "OMDInputBlueprintLibrary.h"

UOMDInputBlueprintLibrary::UOMDInputBlueprintLibrary() {
}

bool UOMDInputBlueprintLibrary::IsMouseInUse() {
    return false;
}

bool UOMDInputBlueprintLibrary::IsMouseAttached() {
    return false;
}

bool UOMDInputBlueprintLibrary::IsKeyboardInUse() {
    return false;
}

bool UOMDInputBlueprintLibrary::IsGamepadInUse() {
    return false;
}

bool UOMDInputBlueprintLibrary::IsGamepadAttached() {
    return false;
}

FText UOMDInputBlueprintLibrary::GetKeySymbol(FKey Key) {
    return FText::GetEmpty();
}

EOMDGamepadType UOMDInputBlueprintLibrary::GetGamepadType() {
    return EOMDGamepadType::Unknown;
}

TSoftObjectPtr<UTexture2D> UOMDInputBlueprintLibrary::GetGamepadKeyIcon(FKey Key, EOMDGamepadType Type) {
    return NULL;
}


