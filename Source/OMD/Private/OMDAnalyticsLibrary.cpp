#include "OMDAnalyticsLibrary.h"

UOMDAnalyticsLibrary::UOMDAnalyticsLibrary() {
}

void UOMDAnalyticsLibrary::StopAnalyticsSession(UObject* WorldContextObject) {
}

void UOMDAnalyticsLibrary::StartAnalyticsSession(UObject* WorldContextObject) {
}

void UOMDAnalyticsLibrary::LogStreamConnectChanged(UObject* WorldContextObject, bool IsEnabled) {
}

void UOMDAnalyticsLibrary::LogSpellbookUpgradePurchased(UObject* WorldContextObject, FOMDSoftProtoPtr itemPtr, int32 tier) {
}

void UOMDAnalyticsLibrary::LogSpellbookUniqueUpgradePurchased(UObject* WorldContextObject, FOMDSoftProtoPtr itemPtr, FOMDSoftProtoPtr upgradePtr) {
}

void UOMDAnalyticsLibrary::LogSpellbookRespecEvent(UObject* WorldContextObject, FOMDSoftProtoPtr protoPtr) {
}

void UOMDAnalyticsLibrary::LogSpellbookPurchase(UObject* WorldContextObject, FOMDSoftProtoPtr itemPtr) {
}

void UOMDAnalyticsLibrary::LogSkullsAwardedEvent(UObject* WorldContextObject, int32 skulls) {
}

void UOMDAnalyticsLibrary::LogScenarioWon(UObject* WorldContextObject, int32 inSkullScore, float InTime, int32 inRiftPoints) {
}

void UOMDAnalyticsLibrary::LogScenarioStart(UObject* WorldContextObject, AOMDPlayerController* PlayerController) {
}

void UOMDAnalyticsLibrary::LogScenarioRetry(UObject* WorldContextObject) {
}

void UOMDAnalyticsLibrary::LogScenarioQuit(UObject* WorldContextObject) {
}

void UOMDAnalyticsLibrary::LogScenarioLoss(UObject* WorldContextObject, int32 wave) {
}

void UOMDAnalyticsLibrary::LogRespecAllEvent(UObject* WorldContextObject) {
}

void UOMDAnalyticsLibrary::LogRandomSeedReroll(UObject* WorldContextObject) {
}

void UOMDAnalyticsLibrary::LogRandomDebuffSelection(UObject* WorldContextObject, int32 tier, int32 missionIndex, int32 buffIndex) {
}

void UOMDAnalyticsLibrary::LogRandomDebuffRerolled(UObject* WorldContextObject, FOMDSoftProtoPtr debuffPtr) {
}

void UOMDAnalyticsLibrary::LogRandomDebuffRejected(UObject* WorldContextObject, const FString& Map, FOMDSoftProtoPtr debuffPtr, float Seed) {
}

void UOMDAnalyticsLibrary::LogRandomDebuffGottenOnReroll(UObject* WorldContextObject, FOMDSoftProtoPtr debuffPtr) {
}

void UOMDAnalyticsLibrary::LogRandomDebuffAccepted(UObject* WorldContextObject, const FString& Map, FOMDSoftProtoPtr debuffPtr, float Seed) {
}

void UOMDAnalyticsLibrary::LogRandomBuffSelection(UObject* WorldContextObject, int32 tier, int32 buffIndex) {
}

void UOMDAnalyticsLibrary::LogRandomBuffRejected(UObject* WorldContextObject, FOMDSoftProtoPtr buffPtr, float Seed) {
}

void UOMDAnalyticsLibrary::LogRandomBuffChosen(UObject* WorldContextObject, FOMDSoftProtoPtr buffPtr, float Seed) {
}

void UOMDAnalyticsLibrary::LogNPEResponse(UObject* WorldContextObject, int32 npeNum, bool Response) {
}

void UOMDAnalyticsLibrary::LogHelpScreenVisited(UObject* WorldContextObject) {
}

void UOMDAnalyticsLibrary::LogEndlessFinished(UObject* WorldContextObject, int32 inSkullScore, int32 waves) {
}

bool UOMDAnalyticsLibrary::IsAllowedToCollectAnalytics(UObject* WorldContextObject) {
    return false;
}

void UOMDAnalyticsLibrary::ConsentChanged(UObject* WorldContextObject, bool isConsentGranted) {
}


