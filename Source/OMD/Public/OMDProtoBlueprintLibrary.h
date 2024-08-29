#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EUpgradeType.h"
#include "OMDAICharacterAbilityProto.h"
#include "OMDAICharacterGuardianProto.h"
#include "OMDAICharacterProto.h"
#include "OMDCampaignProto.h"
#include "OMDEntitlementProto.h"
#include "OMDItemFamilyProto.h"
#include "OMDItemProto.h"
#include "OMDLimbRemovalProto.h"
#include "OMDMiniquestProto.h"
#include "OMDMissionModifierProto.h"
#include "OMDMissionProto.h"
#include "OMDMultiplayerBucketProto.h"
#include "OMDPickupProto.h"
#include "OMDPingProto.h"
#include "OMDPlayerCharacterProto.h"
#include "OMDPlayerSkinProto.h"
#include "OMDRandomModeModifierProto.h"
#include "OMDSoftProtoPtr.h"
#include "OMDStatusEffectProto.h"
#include "OMDTipProto.h"
#include "OMDTrapProto.h"
#include "OMDTrinketProto.h"
#include "OMDUpgradeProto.h"
#include "OMDWeaponProto.h"
#include "OMDProtoBlueprintLibrary.generated.h"

class AOMDTrap;

UCLASS(Blueprintable)
class OMD_API UOMDProtoBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOMDProtoBlueprintLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void SortPlayerSkinProtos(const TArray<FOMDSoftProtoPtr>& Items, TArray<FOMDSoftProtoPtr>& sorted);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void SortPlayerCharacterProtos(const TArray<FOMDSoftProtoPtr>& Items, TArray<FOMDSoftProtoPtr>& sorted);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void SortItemProtos(const TArray<FOMDSoftProtoPtr>& Items, TArray<FOMDSoftProtoPtr>& sorted);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_OMDSoftProtoPtr(FOMDSoftProtoPtr A, FOMDSoftProtoPtr B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsWeaponProtodataByGuid(FGuid Guid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsWeaponProtodata(const FOMDSoftProtoPtr& protodata);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid_OMDSoftProtoPtr(FOMDSoftProtoPtr protodata);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTrinketProtodata(const FOMDSoftProtoPtr& protodata);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTrapProtodataByGuid(FGuid Guid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTrapProtodata(const FOMDSoftProtoPtr& protodata);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTipProtodataByGuid(FGuid Guid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTipProtodata(const FOMDSoftProtoPtr& protodata);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsItemWarScenarioExclusive(FOMDSoftProtoPtr OMDItemProto);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsItemProtodataByGuid(FGuid Guid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasValue_OMDSoftProtoPtr(FOMDSoftProtoPtr protodata);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetWeaponProtodata(FOMDSoftProtoPtr Pointer, FOMDWeaponProto& protodata, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetUpgradeProtodata(FOMDSoftProtoPtr Pointer, FOMDUpgradeProto& protodata, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetTrinketProtodata(FOMDSoftProtoPtr Pointer, FOMDTrinketProto& protodata, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetTrapProtodataByObject(AOMDTrap* Trap, FOMDTrapProto& protodata, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetTrapProtodata(FOMDSoftProtoPtr Pointer, FOMDTrapProto& protodata, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetTipProtodata(FOMDSoftProtoPtr Pointer, FOMDTipProto& protodata, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetTipByOrderedIndex(int32 Index, FOMDTipProto& protodata, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetStatusEffectToggleID(const FOMDStatusEffectProto& protodata, int32& ToggleID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetStatusEffectProtodata(FOMDSoftProtoPtr Pointer, FOMDStatusEffectProto& protodata, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetRandomTipExcludingGUID(FGuid exclude, FOMDTipProto& protodata, bool& success, int32 numAttempts);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetPlayerSkinProtodata(FOMDSoftProtoPtr Pointer, FOMDPlayerSkinProto& protodata, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetPlayerCharacterProtodata(FOMDSoftProtoPtr Pointer, FOMDPlayerCharacterProto& protodata, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetPingProtodata(FOMDSoftProtoPtr Pointer, FOMDPingProto& protodata, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMultiplayerBucketProtodata(FOMDSoftProtoPtr Pointer, FOMDMultiplayerBucketProto& protodata, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMultiplayerBucketForCampaign(FOMDSoftProtoPtr OMDCampaignProto, FOMDSoftProtoPtr& protodata, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetModifierProtodata(FOMDSoftProtoPtr Pointer, FOMDRandomModeModifierProto& protodata, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMissionProtodata(FOMDSoftProtoPtr Pointer, FOMDMissionProto& protodata, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMissionModifierProtodata(FOMDSoftProtoPtr Pointer, FOMDMissionModifierProto& protodata, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMissionForMissionUnlock(FOMDSoftProtoPtr OMDMissionProto, FOMDMissionProto& Mission, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMissionForItemUnlock(FOMDSoftProtoPtr OMDItemProto, FOMDMissionProto& Mission, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMissionForCharacterUnlock(FOMDSoftProtoPtr OMDPlayerCharacterProto, FOMDMissionProto& Mission, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMiniquestProtodata(FOMDSoftProtoPtr Pointer, FOMDMiniquestProto& protodata, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetLimbRemovalProtodata(FOMDSoftProtoPtr Pointer, FOMDLimbRemovalProto& protodata, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetItemProtodata(FOMDSoftProtoPtr Pointer, FOMDItemProto& protodata, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetItemFamilyProtodata(FOMDSoftProtoPtr Pointer, FOMDItemFamilyProto& protodata, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetEntitlementsForSkin(FOMDSoftProtoPtr OMDPlayerSkinProto, TArray<FOMDSoftProtoPtr>& protodata, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetEntitlementsForMission(FOMDSoftProtoPtr OMDMissionProto, TArray<FOMDSoftProtoPtr>& protodata, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetEntitlementsForItem(FOMDSoftProtoPtr OMDItemProto, TArray<FOMDSoftProtoPtr>& protodata, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetEntitlementsForCampaign(FOMDSoftProtoPtr OMDCampaignProto, TArray<FOMDSoftProtoPtr>& protodata, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetEntitlementProtodata(FOMDSoftProtoPtr Pointer, FOMDEntitlementProto& protodata, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetCampaignProtodata(FOMDSoftProtoPtr Pointer, FOMDCampaignProto& protodata, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAllWeaponProtos(TArray<FOMDSoftProtoPtr>& protodata);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAllWeaponGuids(TArray<FGuid>& guids);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAllTrinketProtos(TArray<FOMDSoftProtoPtr>& protodata);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAllTrapProtos(TArray<FOMDSoftProtoPtr>& protodata);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAllTrapGuids(TArray<FGuid>& guids);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAllTipProtos(TArray<FOMDSoftProtoPtr>& protodata);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAllTipGuids(TArray<FGuid>& guids);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAllPlayerSkinProtos(TArray<FOMDSoftProtoPtr>& protodata);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAllPlayerCharacterProtos(TArray<FOMDSoftProtoPtr>& protodata);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAllPingProtos(TArray<FOMDSoftProtoPtr>& protodata);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAllPingGuids(TArray<FGuid>& guids);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAllNewsProtos(TArray<FOMDSoftProtoPtr>& protodata);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAllMultiplayerBucketProtos(TArray<FOMDSoftProtoPtr>& protodata);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAllItemUpgradesOfType(FOMDSoftProtoPtr Item, EUpgradeType Type, TArray<FOMDSoftProtoPtr>& Upgrades);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAllItemUpgrades(FOMDSoftProtoPtr Item, TArray<FOMDSoftProtoPtr>& Upgrades);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAllItemProtos(TArray<FOMDSoftProtoPtr>& protodata);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAllItemGuids(TArray<FGuid>& guids);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAllAchievements(TArray<FOMDSoftProtoPtr>& protodata);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAICharacterProtodata(FOMDSoftProtoPtr Pointer, FOMDAICharacterProto& protodata, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAICharacterGuardianProtodata(FOMDSoftProtoPtr Pointer, FOMDAICharacterGuardianProto& protodata, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAICharacterAbilityProtodata(FOMDSoftProtoPtr Pointer, FOMDAICharacterAbilityProto& protodata, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void FindWeaponSoftProtoPtrByName(FName Name, FOMDSoftProtoPtr& protoPtr, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void FindWeaponProtodataByName(FName Name, FOMDWeaponProto& protodata, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void FindWeaponProtodataByGuid(FGuid Guid, FOMDWeaponProto& protodata, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void FindUpgradeSoftProtoPtrByName(FName Name, FOMDSoftProtoPtr& protoPtr, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void FindTrinketSoftProtoPtrByName(FName Name, FOMDSoftProtoPtr& protoPtr, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void FindTrapSoftProtoPtrByName(FName Name, FOMDSoftProtoPtr& protoPtr, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void FindTrapProtodataByName(FName Name, FOMDTrapProto& protodata, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void FindTrapProtodataByGuid(FGuid Guid, FOMDTrapProto& protodata, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void FindTipProtodataByName(FName Name, FOMDTipProto& protodata, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void FindTipProtodataByGuid(FGuid Guid, FOMDTipProto& protodata, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void FindStatusEffectSoftProtoPtrByName(FName Name, FOMDSoftProtoPtr& protodata, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void FindStatusEffectProtodataByName(FName Name, FOMDStatusEffectProto& protodata, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void FindPingProtodataByGuid(FGuid Guid, FOMDPingProto& protodata, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void FindPickupSoftProtoPtrByName(FName Name, FOMDSoftProtoPtr& protoPtr, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void FindPickupProtodataByName(FName Name, FOMDPickupProto& protodata, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void FindPickupProtodataByGuid(FGuid Guid, FOMDPickupProto& protodata, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void FindItemProtodataByName(FName Name, FOMDItemProto& protodata, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void FindItemProtodataByGuid(FGuid Guid, FOMDItemProto& protodata, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void FindAICharacterSoftProtoPtrByName(FName Name, FOMDSoftProtoPtr& protoPtr, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void FindAICharacterAbilitySoftProtoPtrByName(FName Name, FOMDSoftProtoPtr& protoPtr, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void FindAbilitySoftProtoPtrByName(FName Name, FOMDSoftProtoPtr& protoPtr, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_OMDSoftProtoPtr(FOMDSoftProtoPtr A, FOMDSoftProtoPtr B);
    
};

