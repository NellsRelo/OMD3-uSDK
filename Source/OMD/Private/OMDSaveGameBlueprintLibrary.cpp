#include "OMDSaveGameBlueprintLibrary.h"

UOMDSaveGameBlueprintLibrary::UOMDSaveGameBlueprintLibrary() {
}

bool UOMDSaveGameBlueprintLibrary::UnequipItemUpgrade(AController* Player, FOMDSoftProtoPtr OMDItemProto, FOMDSoftProtoPtr OMDUpgradeProto) {
    return false;
}

void UOMDSaveGameBlueprintLibrary::SetCurrentSkin(AController* Player, FOMDSoftProtoPtr OMDPlayerCharacterProto, FOMDSoftProtoPtr OMDPlayerSkinProto) {
}

void UOMDSaveGameBlueprintLibrary::SetCurrentCharacter(AController* Player, FOMDSoftProtoPtr OMDPlayerCharacterProto) {
}

void UOMDSaveGameBlueprintLibrary::SellItemUpgrades(AController* Player, FOMDSoftProtoPtr OMDItemProto) {
}

bool UOMDSaveGameBlueprintLibrary::PurchaseSkin(AController* Player, FOMDSoftProtoPtr OMDPlayerSkinProto) {
    return false;
}

bool UOMDSaveGameBlueprintLibrary::PurchaseItemUpgrade(AController* Player, FOMDSoftProtoPtr OMDItemProto, FOMDSoftProtoPtr OMDUpgradeProto) {
    return false;
}

bool UOMDSaveGameBlueprintLibrary::PurchaseItem(AController* Player, FOMDSoftProtoPtr OMDItemProto) {
    return false;
}

bool UOMDSaveGameBlueprintLibrary::IsMiniquestComplete(AController* Player, FOMDSoftProtoPtr OMDMiniquestProto) {
    return false;
}

bool UOMDSaveGameBlueprintLibrary::IsLoadoutSlotUnlocked(AController* Player, int32 Slot) {
    return false;
}

bool UOMDSaveGameBlueprintLibrary::IsItemUpgradeOwned(AController* Player, FOMDSoftProtoPtr OMDItemProto, FOMDSoftProtoPtr OMDUpgradeProto) {
    return false;
}

bool UOMDSaveGameBlueprintLibrary::IsItemUpgradeEquipped(AController* Player, FOMDSoftProtoPtr OMDItemProto, FOMDSoftProtoPtr OMDUpgradeProto) {
    return false;
}

bool UOMDSaveGameBlueprintLibrary::HasUnlockedMission(AController* Player, FOMDSoftProtoPtr OMDCampaignProto, FOMDSoftProtoPtr OMDMissionProto) {
    return false;
}

bool UOMDSaveGameBlueprintLibrary::HasUnlockedCharacter(AController* Player, FOMDSoftProtoPtr OMDPlayerCharacterProto) {
    return false;
}

bool UOMDSaveGameBlueprintLibrary::HasFinishedCampaign(AController* Player, FOMDSoftProtoPtr OMDCampaignProto) {
    return false;
}

bool UOMDSaveGameBlueprintLibrary::HasAquiredSkin(AController* Player, FOMDSoftProtoPtr OMDPlayerSkinProto) {
    return false;
}

bool UOMDSaveGameBlueprintLibrary::HasAquiredItem(AController* Player, FOMDSoftProtoPtr OMDItemProto) {
    return false;
}

void UOMDSaveGameBlueprintLibrary::GetUnlockedCharacters(AController* Player, TArray<FOMDSoftProtoPtr>& characters) {
}

int32 UOMDSaveGameBlueprintLibrary::GetRandomModeHighScore(const UObject* WorldContextObject) {
    return 0;
}

int32 UOMDSaveGameBlueprintLibrary::GetRandomModeHighestTier(const UObject* WorldContextObject) {
    return 0;
}

int32 UOMDSaveGameBlueprintLibrary::GetPlayerSkulls(AController* Player) {
    return 0;
}

bool UOMDSaveGameBlueprintLibrary::GetOwnedItemUpgradesOfType(AController* Player, FOMDSoftProtoPtr OMDItemProto, EUpgradeType Type, TArray<FOMDSoftProtoPtr>& Upgrades) {
    return false;
}

bool UOMDSaveGameBlueprintLibrary::GetOwnedItemUpgrades(AController* Player, FOMDSoftProtoPtr OMDItemProto, TArray<FOMDSoftProtoPtr>& Upgrades) {
    return false;
}

bool UOMDSaveGameBlueprintLibrary::GetMissionStats(AController* Player, FOMDSoftProtoPtr OMDMissionProto, EGameDifficulty Difficulty, FOMDMissionStats& stats) {
    return false;
}

bool UOMDSaveGameBlueprintLibrary::GetEquipedItemUpgradesOfType(AController* Player, FOMDSoftProtoPtr OMDItemProto, EUpgradeType Type, TArray<FOMDSoftProtoPtr>& Upgrades) {
    return false;
}

bool UOMDSaveGameBlueprintLibrary::GetEquipedItemUpgrades(AController* Player, FOMDSoftProtoPtr OMDItemProto, TArray<FOMDSoftProtoPtr>& Upgrades) {
    return false;
}

void UOMDSaveGameBlueprintLibrary::GetCurrentSkin(AController* Player, FOMDSoftProtoPtr OMDPlayerCharacterProto, FOMDSoftProtoPtr& Skin) {
}

void UOMDSaveGameBlueprintLibrary::GetCurrentCharacter(AController* Player, FOMDSoftProtoPtr& Character) {
}

int32 UOMDSaveGameBlueprintLibrary::GetCampaignProgress(AController* Player, FOMDSoftProtoPtr OMDCampaignProto) {
    return 0;
}

EGameDifficulty UOMDSaveGameBlueprintLibrary::GetCampaignDifficulty(AController* Player, FOMDSoftProtoPtr OMDCampaignProto) {
    return EGameDifficulty::Apprentice;
}

void UOMDSaveGameBlueprintLibrary::GetAllOwnedItems(AController* Player, TArray<FOMDSoftProtoPtr>& Items) {
}

bool UOMDSaveGameBlueprintLibrary::EquipItemUpgrade(AController* Player, FOMDSoftProtoPtr OMDItemProto, FOMDSoftProtoPtr OMDUpgradeProto) {
    return false;
}

bool UOMDSaveGameBlueprintLibrary::DoesCampaignHaveNewMission(AController* Player, FOMDSoftProtoPtr campaign) {
    return false;
}

void UOMDSaveGameBlueprintLibrary::ClearNotificationsForCampaign(AController* Player, FOMDSoftProtoPtr campaign) {
}


