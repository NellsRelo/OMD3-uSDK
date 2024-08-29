#include "OMDSaveGame.h"

UOMDSaveGame::UOMDSaveGame() {
    this->bDismissedFirstPlayNPE = false;
    this->bDismissedInventoryNPE = false;
    this->bDismissedSpellbookNPE = false;
    this->bShowedStatsNPE = false;
    this->bUsingDefaultAxisBindings = false;
    this->RandomModeHighScore = 0;
    this->RandomModeHighScoreCOOP = 0;
    this->CurrentRandomModeRerollsRemaining = 0;
    this->bHasSeenRandomModeHelp = false;
    this->bIsRandomModeCoop = false;
    this->bIsPlayingRandomModeGame = false;
    this->LastRandomModeTier = 0;
    this->LastRandomModeSeed = 0;
    this->LastRandomModeRiftPointsRemaining = 0;
}

bool UOMDSaveGame::UpgradeOwned(const FOMDItemProto& Item, const FOMDUpgradeProto& upgrade) const {
    return false;
}

bool UOMDSaveGame::UpgradeEquiped(const FOMDItemProto& Item, const FOMDUpgradeProto& upgrade) const {
    return false;
}

void UOMDSaveGame::UnlockCharacter(const FOMDPlayerCharacterProto& Character) {
}

void UOMDSaveGame::UnequipUpgrade(const FOMDItemProto& Item, const FOMDUpgradeProto& upgrade) {
}

void UOMDSaveGame::SetUsingDefaultAxisBindings(bool useDefault) {
}

void UOMDSaveGame::SetShouldPromptForOptOut(bool newVal) {
}

void UOMDSaveGame::SetSavedKeyMappings(TArray<FInputActionKeyMapping> ActionMappings) {
}

void UOMDSaveGame::SetSavedAxisMappings(TArray<FInputAxisKeyMapping> AxisMappings) {
}

void UOMDSaveGame::SetHasSeenNewsSlug(const FString& slugToAdd) {
}

void UOMDSaveGame::SetHasSeenAnalyticsPopup(bool newVal) {
}

void UOMDSaveGame::SetCurrentRandomModeRiftPointsRemaining(int32 newValue) {
}

void UOMDSaveGame::SetCanCollectAnalytics(bool newVal) {
}

bool UOMDSaveGame::SellUpgrade(const FOMDItemProto& Item, const FOMDUpgradeProto& upgrade) {
    return false;
}

void UOMDSaveGame::SellItemUpgrades(const FOMDItemProto& Item) {
}

void UOMDSaveGame::SellAllUpgrades() {
}

void UOMDSaveGame::SelectMissionAndDebuffForTier(int32 tier, int32 debuffChoice, int32 missionChoice) {
}

void UOMDSaveGame::SelectAdditionalBuffForTier(int32 tier, int32 buff) {
}

void UOMDSaveGame::ResetRandomModeProgress() {
}

int32 UOMDSaveGame::RerollDebuffFromTier(int32 tierToReroll, int32 choiceToStartAt) {
    return 0;
}

bool UOMDSaveGame::PurchaseUpgrade(const FOMDItemProto& Item, const FOMDUpgradeProto& upgrade) {
    return false;
}

bool UOMDSaveGame::PurchaseItem(FOMDSoftProtoPtr itemProto) {
    return false;
}

void UOMDSaveGame::ProcessDeferredLeaderboardUpload() {
}

void UOMDSaveGame::ModifyBuffChoicesPerTier(int32 amount) {
}

bool UOMDSaveGame::ItemOwned(FOMDItemProto Item) const {
    return false;
}

bool UOMDSaveGame::IsMiniquestComplete(const FOMDItemProto& Item) const {
    return false;
}

void UOMDSaveGame::IncrementRandomModeTier() {
}

void UOMDSaveGame::IncrementLoadingScreenTip() {
}

bool UOMDSaveGame::HasSelectedMissionForCurrentTier() {
    return false;
}

bool UOMDSaveGame::HasSeenNewsSlug(const FString& slugToCheck) {
    return false;
}

bool UOMDSaveGame::HasSeenAnalyticsPopup() {
    return false;
}

bool UOMDSaveGame::HasFinishedCampaign(FOMDSoftProtoPtr OMDCampaignProto) const {
    return false;
}

void UOMDSaveGame::GrantLoadoutSlot(bool bIsWarScenarioSlot, int32 Index) {
}

bool UOMDSaveGame::GrantItem(FOMDSoftProtoPtr itemProto, bool bSlotIfPossible, bool bAllowInternal) {
    return false;
}

void UOMDSaveGame::GetUnlockedCharacters(TArray<FOMDSoftProtoPtr>& characters) const {
}

int32 UOMDSaveGame::GetTotalRandomModeScoreFromTier(int32 tier) {
    return 0;
}

int32 UOMDSaveGame::GetTotalRandomModeScore() const {
    return 0;
}

int32 UOMDSaveGame::GetSkulls() const {
    return 0;
}

bool UOMDSaveGame::GetShouldPromptForOptOut() {
    return false;
}

FOMDRandomModeLevelEntry UOMDSaveGame::GetSelectedMissionForTier(int32 tier) {
    return FOMDRandomModeLevelEntry{};
}

FOMDRandomModeLevelEntry UOMDSaveGame::GetSelectedMissionForCurrentTier() {
    return FOMDRandomModeLevelEntry{};
}

FOMDSoftProtoPtr UOMDSaveGame::GetSelectedDebuffForTier(int32 tier) {
    return FOMDSoftProtoPtr{};
}

TArray<FOMDSoftProtoPtr> UOMDSaveGame::GetSelectedBuffsForTier(int32 tier) {
    return TArray<FOMDSoftProtoPtr>();
}

int32 UOMDSaveGame::GetRandomModeTotalTiers() {
    return 0;
}

int32 UOMDSaveGame::GetRandomModeScoreFromPreviousTiersBeforeCurrent() {
    return 0;
}

int32 UOMDSaveGame::GetRandomModeScoreFromPreviousTiers(int32 tier) {
    return 0;
}

int32 UOMDSaveGame::GetRandomModeLastScore() {
    return 0;
}

int32 UOMDSaveGame::GetRandomModeHighScore() {
    return 0;
}

int32 UOMDSaveGame::GetRandomModeHighestTier() {
    return 0;
}

FOMDRandomModeSavedTier UOMDSaveGame::GetPossibleChoicesForTier(int32 tier) {
    return FOMDRandomModeSavedTier{};
}

TArray<FOMDSoftProtoPtr> UOMDSaveGame::GetOwnedUpgrades(const FOMDItemProto& Item) const {
    return TArray<FOMDSoftProtoPtr>();
}

int32 UOMDSaveGame::GetNextLoadingScreenTip() {
    return 0;
}

bool UOMDSaveGame::GetMissionStats(FOMDSoftProtoPtr OMDMissionProto, EGameDifficulty Difficulty, FOMDMissionStats& stats) const {
    return false;
}

int32 UOMDSaveGame::GetLastTotalRandomModeScore() const {
    return 0;
}

FOMDSoftProtoPtr UOMDSaveGame::GetLastSelectedDebuffForTier(int32 tier) {
    return FOMDSoftProtoPtr{};
}

TArray<FOMDSoftProtoPtr> UOMDSaveGame::GetLastSelectedBuffsForTier(int32 tier) {
    return TArray<FOMDSoftProtoPtr>();
}

int32 UOMDSaveGame::GetLastRandomModeTotalTrapsPlaced() {
    return 0;
}

float UOMDSaveGame::GetLastRandomModeTotalTimeSpent() {
    return 0.0f;
}

int32 UOMDSaveGame::GetLastRandomModeTotalPlayerDeaths() {
    return 0;
}

int32 UOMDSaveGame::GetLastRandomModeTotalEnemiesKilled() {
    return 0;
}

TArray<FOMDSoftProtoPtr> UOMDSaveGame::GetLastAllTiersSelectedMissions() {
    return TArray<FOMDSoftProtoPtr>();
}

TArray<FOMDSoftProtoPtr> UOMDSaveGame::GetEquipedUpgrades(const FOMDItemProto& Item) const {
    return TArray<FOMDSoftProtoPtr>();
}

FOMDSoftProtoPtr UOMDSaveGame::GetDebuffForCurrentTier() {
    return FOMDSoftProtoPtr{};
}

TArray<FOMDSoftProtoPtr> UOMDSaveGame::GetDebuffChoicesForTier(int32 tier, int32 numberOfChoices) {
    return TArray<FOMDSoftProtoPtr>();
}

int32 UOMDSaveGame::GetCurrentRandomModeTier() const {
    return 0;
}

int32 UOMDSaveGame::GetCurrentRandomModeRiftPointsRemaining() {
    return 0;
}

FOMDSoftProtoPtr UOMDSaveGame::GetCurrentCharacter() const {
    return FOMDSoftProtoPtr{};
}

int32 UOMDSaveGame::GetCampaignProgress(FOMDSoftProtoPtr OMDCampaignProto) const {
    return 0;
}

TArray<FOMDSoftProtoPtr> UOMDSaveGame::GetBuffsForCurrentTier() {
    return TArray<FOMDSoftProtoPtr>();
}

TArray<FOMDSoftProtoPtr> UOMDSaveGame::GetBuffChoicesForTier(int32 tier, int32 numberOfChoices) {
    return TArray<FOMDSoftProtoPtr>();
}

int32 UOMDSaveGame::GetBuffChoicesAmountPerTier() {
    return 0;
}

TArray<FOMDSoftProtoPtr> UOMDSaveGame::GetAllTiersSelectedMissions() {
    return TArray<FOMDSoftProtoPtr>();
}

void UOMDSaveGame::GetAllOwnedItems(TArray<FOMDSoftProtoPtr>& Items) const {
}

void UOMDSaveGame::EquipUpgrade(const FOMDItemProto& Item, const FOMDUpgradeProto& upgrade) {
}

void UOMDSaveGame::CompleteMiniquest(const FOMDItemProto& Item, bool complete) {
}

bool UOMDSaveGame::CharacterUnlocked(const FOMDPlayerCharacterProto& Character) {
    return false;
}

bool UOMDSaveGame::CanRerollAtTier(int32 tier) {
    return false;
}

bool UOMDSaveGame::CanCollectAnalytics() {
    return false;
}

void UOMDSaveGame::ApplyKeyMappings() {
}

void UOMDSaveGame::AddSkulls(int32 numSkulls) {
}


