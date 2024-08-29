#include "OMDProtoBlueprintLibrary.h"

UOMDProtoBlueprintLibrary::UOMDProtoBlueprintLibrary() {
}

void UOMDProtoBlueprintLibrary::SortPlayerSkinProtos(const TArray<FOMDSoftProtoPtr>& Items, TArray<FOMDSoftProtoPtr>& sorted) {
}

void UOMDProtoBlueprintLibrary::SortPlayerCharacterProtos(const TArray<FOMDSoftProtoPtr>& Items, TArray<FOMDSoftProtoPtr>& sorted) {
}

void UOMDProtoBlueprintLibrary::SortItemProtos(const TArray<FOMDSoftProtoPtr>& Items, TArray<FOMDSoftProtoPtr>& sorted) {
}

bool UOMDProtoBlueprintLibrary::NotEqual_OMDSoftProtoPtr(FOMDSoftProtoPtr A, FOMDSoftProtoPtr B) {
    return false;
}

bool UOMDProtoBlueprintLibrary::IsWeaponProtodataByGuid(FGuid Guid) {
    return false;
}

bool UOMDProtoBlueprintLibrary::IsWeaponProtodata(const FOMDSoftProtoPtr& protodata) {
    return false;
}

bool UOMDProtoBlueprintLibrary::IsValid_OMDSoftProtoPtr(FOMDSoftProtoPtr protodata) {
    return false;
}

bool UOMDProtoBlueprintLibrary::IsTrinketProtodata(const FOMDSoftProtoPtr& protodata) {
    return false;
}

bool UOMDProtoBlueprintLibrary::IsTrapProtodataByGuid(FGuid Guid) {
    return false;
}

bool UOMDProtoBlueprintLibrary::IsTrapProtodata(const FOMDSoftProtoPtr& protodata) {
    return false;
}

bool UOMDProtoBlueprintLibrary::IsTipProtodataByGuid(FGuid Guid) {
    return false;
}

bool UOMDProtoBlueprintLibrary::IsTipProtodata(const FOMDSoftProtoPtr& protodata) {
    return false;
}

bool UOMDProtoBlueprintLibrary::IsItemWarScenarioExclusive(FOMDSoftProtoPtr OMDItemProto) {
    return false;
}

bool UOMDProtoBlueprintLibrary::IsItemProtodataByGuid(FGuid Guid) {
    return false;
}

bool UOMDProtoBlueprintLibrary::HasValue_OMDSoftProtoPtr(FOMDSoftProtoPtr protodata) {
    return false;
}

void UOMDProtoBlueprintLibrary::GetWeaponProtodata(FOMDSoftProtoPtr Pointer, FOMDWeaponProto& protodata, bool& success) {
}

void UOMDProtoBlueprintLibrary::GetUpgradeProtodata(FOMDSoftProtoPtr Pointer, FOMDUpgradeProto& protodata, bool& success) {
}

void UOMDProtoBlueprintLibrary::GetTrinketProtodata(FOMDSoftProtoPtr Pointer, FOMDTrinketProto& protodata, bool& success) {
}

void UOMDProtoBlueprintLibrary::GetTrapProtodataByObject(AOMDTrap* Trap, FOMDTrapProto& protodata, bool& success) {
}

void UOMDProtoBlueprintLibrary::GetTrapProtodata(FOMDSoftProtoPtr Pointer, FOMDTrapProto& protodata, bool& success) {
}

void UOMDProtoBlueprintLibrary::GetTipProtodata(FOMDSoftProtoPtr Pointer, FOMDTipProto& protodata, bool& success) {
}

void UOMDProtoBlueprintLibrary::GetTipByOrderedIndex(int32 Index, FOMDTipProto& protodata, bool& success) {
}

void UOMDProtoBlueprintLibrary::GetStatusEffectToggleID(const FOMDStatusEffectProto& protodata, int32& ToggleID) {
}

void UOMDProtoBlueprintLibrary::GetStatusEffectProtodata(FOMDSoftProtoPtr Pointer, FOMDStatusEffectProto& protodata, bool& success) {
}

void UOMDProtoBlueprintLibrary::GetRandomTipExcludingGUID(FGuid exclude, FOMDTipProto& protodata, bool& success, int32 numAttempts) {
}

void UOMDProtoBlueprintLibrary::GetPlayerSkinProtodata(FOMDSoftProtoPtr Pointer, FOMDPlayerSkinProto& protodata, bool& success) {
}

void UOMDProtoBlueprintLibrary::GetPlayerCharacterProtodata(FOMDSoftProtoPtr Pointer, FOMDPlayerCharacterProto& protodata, bool& success) {
}

void UOMDProtoBlueprintLibrary::GetPingProtodata(FOMDSoftProtoPtr Pointer, FOMDPingProto& protodata, bool& success) {
}

void UOMDProtoBlueprintLibrary::GetMultiplayerBucketProtodata(FOMDSoftProtoPtr Pointer, FOMDMultiplayerBucketProto& protodata, bool& success) {
}

void UOMDProtoBlueprintLibrary::GetMultiplayerBucketForCampaign(FOMDSoftProtoPtr OMDCampaignProto, FOMDSoftProtoPtr& protodata, bool& success) {
}

void UOMDProtoBlueprintLibrary::GetModifierProtodata(FOMDSoftProtoPtr Pointer, FOMDRandomModeModifierProto& protodata, bool& success) {
}

void UOMDProtoBlueprintLibrary::GetMissionProtodata(FOMDSoftProtoPtr Pointer, FOMDMissionProto& protodata, bool& success) {
}

void UOMDProtoBlueprintLibrary::GetMissionModifierProtodata(FOMDSoftProtoPtr Pointer, FOMDMissionModifierProto& protodata, bool& success) {
}

void UOMDProtoBlueprintLibrary::GetMissionForMissionUnlock(FOMDSoftProtoPtr OMDMissionProto, FOMDMissionProto& Mission, bool& success) {
}

void UOMDProtoBlueprintLibrary::GetMissionForItemUnlock(FOMDSoftProtoPtr OMDItemProto, FOMDMissionProto& Mission, bool& success) {
}

void UOMDProtoBlueprintLibrary::GetMissionForCharacterUnlock(FOMDSoftProtoPtr OMDPlayerCharacterProto, FOMDMissionProto& Mission, bool& success) {
}

void UOMDProtoBlueprintLibrary::GetMiniquestProtodata(FOMDSoftProtoPtr Pointer, FOMDMiniquestProto& protodata, bool& success) {
}

void UOMDProtoBlueprintLibrary::GetLimbRemovalProtodata(FOMDSoftProtoPtr Pointer, FOMDLimbRemovalProto& protodata, bool& success) {
}

void UOMDProtoBlueprintLibrary::GetItemProtodata(FOMDSoftProtoPtr Pointer, FOMDItemProto& protodata, bool& success) {
}

void UOMDProtoBlueprintLibrary::GetItemFamilyProtodata(FOMDSoftProtoPtr Pointer, FOMDItemFamilyProto& protodata, bool& success) {
}

void UOMDProtoBlueprintLibrary::GetEntitlementsForSkin(FOMDSoftProtoPtr OMDPlayerSkinProto, TArray<FOMDSoftProtoPtr>& protodata, bool& success) {
}

void UOMDProtoBlueprintLibrary::GetEntitlementsForMission(FOMDSoftProtoPtr OMDMissionProto, TArray<FOMDSoftProtoPtr>& protodata, bool& success) {
}

void UOMDProtoBlueprintLibrary::GetEntitlementsForItem(FOMDSoftProtoPtr OMDItemProto, TArray<FOMDSoftProtoPtr>& protodata, bool& success) {
}

void UOMDProtoBlueprintLibrary::GetEntitlementsForCampaign(FOMDSoftProtoPtr OMDCampaignProto, TArray<FOMDSoftProtoPtr>& protodata, bool& success) {
}

void UOMDProtoBlueprintLibrary::GetEntitlementProtodata(FOMDSoftProtoPtr Pointer, FOMDEntitlementProto& protodata, bool& success) {
}

void UOMDProtoBlueprintLibrary::GetCampaignProtodata(FOMDSoftProtoPtr Pointer, FOMDCampaignProto& protodata, bool& success) {
}

void UOMDProtoBlueprintLibrary::GetAllWeaponProtos(TArray<FOMDSoftProtoPtr>& protodata) {
}

void UOMDProtoBlueprintLibrary::GetAllWeaponGuids(TArray<FGuid>& guids) {
}

void UOMDProtoBlueprintLibrary::GetAllTrinketProtos(TArray<FOMDSoftProtoPtr>& protodata) {
}

void UOMDProtoBlueprintLibrary::GetAllTrapProtos(TArray<FOMDSoftProtoPtr>& protodata) {
}

void UOMDProtoBlueprintLibrary::GetAllTrapGuids(TArray<FGuid>& guids) {
}

void UOMDProtoBlueprintLibrary::GetAllTipProtos(TArray<FOMDSoftProtoPtr>& protodata) {
}

void UOMDProtoBlueprintLibrary::GetAllTipGuids(TArray<FGuid>& guids) {
}

void UOMDProtoBlueprintLibrary::GetAllPlayerSkinProtos(TArray<FOMDSoftProtoPtr>& protodata) {
}

void UOMDProtoBlueprintLibrary::GetAllPlayerCharacterProtos(TArray<FOMDSoftProtoPtr>& protodata) {
}

void UOMDProtoBlueprintLibrary::GetAllPingProtos(TArray<FOMDSoftProtoPtr>& protodata) {
}

void UOMDProtoBlueprintLibrary::GetAllPingGuids(TArray<FGuid>& guids) {
}

void UOMDProtoBlueprintLibrary::GetAllNewsProtos(TArray<FOMDSoftProtoPtr>& protodata) {
}

void UOMDProtoBlueprintLibrary::GetAllMultiplayerBucketProtos(TArray<FOMDSoftProtoPtr>& protodata) {
}

void UOMDProtoBlueprintLibrary::GetAllItemUpgradesOfType(FOMDSoftProtoPtr Item, EUpgradeType Type, TArray<FOMDSoftProtoPtr>& Upgrades) {
}

void UOMDProtoBlueprintLibrary::GetAllItemUpgrades(FOMDSoftProtoPtr Item, TArray<FOMDSoftProtoPtr>& Upgrades) {
}

void UOMDProtoBlueprintLibrary::GetAllItemProtos(TArray<FOMDSoftProtoPtr>& protodata) {
}

void UOMDProtoBlueprintLibrary::GetAllItemGuids(TArray<FGuid>& guids) {
}

void UOMDProtoBlueprintLibrary::GetAllAchievements(TArray<FOMDSoftProtoPtr>& protodata) {
}

void UOMDProtoBlueprintLibrary::GetAICharacterProtodata(FOMDSoftProtoPtr Pointer, FOMDAICharacterProto& protodata, bool& success) {
}

void UOMDProtoBlueprintLibrary::GetAICharacterGuardianProtodata(FOMDSoftProtoPtr Pointer, FOMDAICharacterGuardianProto& protodata, bool& success) {
}

void UOMDProtoBlueprintLibrary::GetAICharacterAbilityProtodata(FOMDSoftProtoPtr Pointer, FOMDAICharacterAbilityProto& protodata, bool& success) {
}

void UOMDProtoBlueprintLibrary::FindWeaponSoftProtoPtrByName(FName Name, FOMDSoftProtoPtr& protoPtr, bool& success) {
}

void UOMDProtoBlueprintLibrary::FindWeaponProtodataByName(FName Name, FOMDWeaponProto& protodata, bool& success) {
}

void UOMDProtoBlueprintLibrary::FindWeaponProtodataByGuid(FGuid Guid, FOMDWeaponProto& protodata, bool& success) {
}

void UOMDProtoBlueprintLibrary::FindUpgradeSoftProtoPtrByName(FName Name, FOMDSoftProtoPtr& protoPtr, bool& success) {
}

void UOMDProtoBlueprintLibrary::FindTrinketSoftProtoPtrByName(FName Name, FOMDSoftProtoPtr& protoPtr, bool& success) {
}

void UOMDProtoBlueprintLibrary::FindTrapSoftProtoPtrByName(FName Name, FOMDSoftProtoPtr& protoPtr, bool& success) {
}

void UOMDProtoBlueprintLibrary::FindTrapProtodataByName(FName Name, FOMDTrapProto& protodata, bool& success) {
}

void UOMDProtoBlueprintLibrary::FindTrapProtodataByGuid(FGuid Guid, FOMDTrapProto& protodata, bool& success) {
}

void UOMDProtoBlueprintLibrary::FindTipProtodataByName(FName Name, FOMDTipProto& protodata, bool& success) {
}

void UOMDProtoBlueprintLibrary::FindTipProtodataByGuid(FGuid Guid, FOMDTipProto& protodata, bool& success) {
}

void UOMDProtoBlueprintLibrary::FindStatusEffectSoftProtoPtrByName(FName Name, FOMDSoftProtoPtr& protodata, bool& success) {
}

void UOMDProtoBlueprintLibrary::FindStatusEffectProtodataByName(FName Name, FOMDStatusEffectProto& protodata, bool& success) {
}

void UOMDProtoBlueprintLibrary::FindPingProtodataByGuid(FGuid Guid, FOMDPingProto& protodata, bool& success) {
}

void UOMDProtoBlueprintLibrary::FindPickupSoftProtoPtrByName(FName Name, FOMDSoftProtoPtr& protoPtr, bool& success) {
}

void UOMDProtoBlueprintLibrary::FindPickupProtodataByName(FName Name, FOMDPickupProto& protodata, bool& success) {
}

void UOMDProtoBlueprintLibrary::FindPickupProtodataByGuid(FGuid Guid, FOMDPickupProto& protodata, bool& success) {
}

void UOMDProtoBlueprintLibrary::FindItemProtodataByName(FName Name, FOMDItemProto& protodata, bool& success) {
}

void UOMDProtoBlueprintLibrary::FindItemProtodataByGuid(FGuid Guid, FOMDItemProto& protodata, bool& success) {
}

void UOMDProtoBlueprintLibrary::FindAICharacterSoftProtoPtrByName(FName Name, FOMDSoftProtoPtr& protoPtr, bool& success) {
}

void UOMDProtoBlueprintLibrary::FindAICharacterAbilitySoftProtoPtrByName(FName Name, FOMDSoftProtoPtr& protoPtr, bool& success) {
}

void UOMDProtoBlueprintLibrary::FindAbilitySoftProtoPtrByName(FName Name, FOMDSoftProtoPtr& protoPtr, bool& success) {
}

bool UOMDProtoBlueprintLibrary::EqualEqual_OMDSoftProtoPtr(FOMDSoftProtoPtr A, FOMDSoftProtoPtr B) {
    return false;
}


