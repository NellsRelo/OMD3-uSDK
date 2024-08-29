#include "OMDStatsBlueprintLibrary.h"

UOMDStatsBlueprintLibrary::UOMDStatsBlueprintLibrary() {
}

void UOMDStatsBlueprintLibrary::IncrementPlayerStat_Integer(AController* Player, const FString& Name, int64 Value) {
}

void UOMDStatsBlueprintLibrary::IncrementPlayerStat_Float(AController* Player, const FString& Name, float Value) {
}

int64 UOMDStatsBlueprintLibrary::GetPlayerStat(AController* Player, const FString& Name) {
    return 0;
}

float UOMDStatsBlueprintLibrary::GetMiniquestProgress(AController* Player, FOMDSoftProtoPtr OMDMiniquestProto) {
    return 0.0f;
}

int64 UOMDStatsBlueprintLibrary::GetLifetimeStat(AController* Player, const FString& Name) {
    return 0;
}


