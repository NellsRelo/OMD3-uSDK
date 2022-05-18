#pragma once
#include "CoreMinimal.h"
#include "OMDMissionModifierProto.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "OMDSoftProtoPtr.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "OMDMultiplayerBucketProto.h"
#include "OMDWeaponProto.h"
#include "OMDTrapProto.h"
#include "OMDUpgradeProto.h"
#include "OMDPlayerCharacterProto.h"
#include "OMDTrinketProto.h"
#include "OMDTipProto.h"
#include "OMDStatusEffectProto.h"
#include "OMDPlayerSkinProto.h"
#include "OMDCampaignProto.h"
#include "OMDPingProto.h"
#include "OMDRandomModeModifierProto.h"
#include "OMDMissionProto.h"
#include "OMDMiniquestProto.h"
#include "OMDLimbRemovalProto.h"
#include "OMDItemProto.h"
#include "OMDItemFamilyProto.h"
#include "OMDEntitlementProto.h"
#include "EUpgradeType.h"
#include "OMDAICharacterProto.h"
#include "OMDPickupProto.h"
#include "OMDAICharacterGuardianProto.h"
#include "OMDAICharacterAbilityProto.h"
#include "OMDProtoBlueprintLibrary.generated.h"

class AOMDTrap;

UCLASS(BlueprintType)
class OMD_API UOMDProtoBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOMDProtoBlueprintLibrary();
    UFUNCTION(BlueprintPure)
    static void SortPlayerSkinProtos(const TArray<FOMDSoftProtoPtr>& Items, TArray<FOMDSoftProtoPtr>& sorted);
    
    UFUNCTION(BlueprintPure)
    static void SortPlayerCharacterProtos(const TArray<FOMDSoftProtoPtr>& Items, TArray<FOMDSoftProtoPtr>& sorted);
    
    UFUNCTION(BlueprintPure)
    static void SortItemProtos(const TArray<FOMDSoftProtoPtr>& Items, TArray<FOMDSoftProtoPtr>& sorted);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_OMDSoftProtoPtr(FOMDSoftProtoPtr A, FOMDSoftProtoPtr B);
    
    UFUNCTION(BlueprintPure)
    static bool IsWeaponProtodataByGuid(FGuid Guid);
    
    UFUNCTION(BlueprintPure)
    static bool IsWeaponProtodata(const FOMDSoftProtoPtr& protodata);
    
    UFUNCTION(BlueprintPure)
    static bool IsValid_OMDSoftProtoPtr(FOMDSoftProtoPtr protodata);
    
    UFUNCTION(BlueprintPure)
    static bool IsTrinketProtodata(const FOMDSoftProtoPtr& protodata);
    
    UFUNCTION(BlueprintPure)
    static bool IsTrapProtodataByGuid(FGuid Guid);
    
    UFUNCTION(BlueprintPure)
    static bool IsTrapProtodata(const FOMDSoftProtoPtr& protodata);
    
    UFUNCTION(BlueprintPure)
    static bool IsTipProtodataByGuid(FGuid Guid);
    
    UFUNCTION(BlueprintPure)
    static bool IsTipProtodata(const FOMDSoftProtoPtr& protodata);
    
    UFUNCTION(BlueprintPure)
    static bool IsItemWarScenarioExclusive(FOMDSoftProtoPtr OMDItemProto);
    
    UFUNCTION(BlueprintPure)
    static bool IsItemProtodataByGuid(FGuid Guid);
    
    UFUNCTION(BlueprintPure)
    static bool HasValue_OMDSoftProtoPtr(FOMDSoftProtoPtr protodata);
    
    UFUNCTION(BlueprintPure)
    static void GetWeaponProtodata(FOMDSoftProtoPtr Pointer, FOMDWeaponProto& protodata, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void GetUpgradeProtodata(FOMDSoftProtoPtr Pointer, FOMDUpgradeProto& protodata, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void GetTrinketProtodata(FOMDSoftProtoPtr Pointer, FOMDTrinketProto& protodata, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void GetTrapProtodataByObject(AOMDTrap* Trap, FOMDTrapProto& protodata, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void GetTrapProtodata(FOMDSoftProtoPtr Pointer, FOMDTrapProto& protodata, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void GetTipProtodata(FOMDSoftProtoPtr Pointer, FOMDTipProto& protodata, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void GetTipByOrderedIndex(int32 Index, FOMDTipProto& protodata, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void GetStatusEffectToggleID(const FOMDStatusEffectProto& protodata, int32& ToggleID);
    
    UFUNCTION(BlueprintPure)
    static void GetStatusEffectProtodata(FOMDSoftProtoPtr Pointer, FOMDStatusEffectProto& protodata, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void GetRandomTipExcludingGUID(FGuid exclude, FOMDTipProto& protodata, bool& success, int32 numAttempts);
    
    UFUNCTION(BlueprintPure)
    static void GetPlayerSkinProtodata(FOMDSoftProtoPtr Pointer, FOMDPlayerSkinProto& protodata, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void GetPlayerCharacterProtodata(FOMDSoftProtoPtr Pointer, FOMDPlayerCharacterProto& protodata, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void GetPingProtodata(FOMDSoftProtoPtr Pointer, FOMDPingProto& protodata, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void GetMultiplayerBucketProtodata(FOMDSoftProtoPtr Pointer, FOMDMultiplayerBucketProto& protodata, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void GetMultiplayerBucketForCampaign(FOMDSoftProtoPtr OMDCampaignProto, FOMDSoftProtoPtr& protodata, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void GetModifierProtodata(FOMDSoftProtoPtr Pointer, FOMDRandomModeModifierProto& protodata, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void GetMissionProtodata(FOMDSoftProtoPtr Pointer, FOMDMissionProto& protodata, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void GetMissionModifierProtodata(FOMDSoftProtoPtr Pointer, FOMDMissionModifierProto& protodata, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void GetMissionForMissionUnlock(FOMDSoftProtoPtr OMDMissionProto, FOMDMissionProto& Mission, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void GetMissionForItemUnlock(FOMDSoftProtoPtr OMDItemProto, FOMDMissionProto& Mission, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void GetMissionForCharacterUnlock(FOMDSoftProtoPtr OMDPlayerCharacterProto, FOMDMissionProto& Mission, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void GetMiniquestProtodata(FOMDSoftProtoPtr Pointer, FOMDMiniquestProto& protodata, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void GetLimbRemovalProtodata(FOMDSoftProtoPtr Pointer, FOMDLimbRemovalProto& protodata, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void GetItemProtodata(FOMDSoftProtoPtr Pointer, FOMDItemProto& protodata, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void GetItemFamilyProtodata(FOMDSoftProtoPtr Pointer, FOMDItemFamilyProto& protodata, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void GetEntitlementsForSkin(FOMDSoftProtoPtr OMDPlayerSkinProto, TArray<FOMDSoftProtoPtr>& protodata, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void GetEntitlementsForMission(FOMDSoftProtoPtr OMDMissionProto, TArray<FOMDSoftProtoPtr>& protodata, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void GetEntitlementsForItem(FOMDSoftProtoPtr OMDItemProto, TArray<FOMDSoftProtoPtr>& protodata, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void GetEntitlementsForCampaign(FOMDSoftProtoPtr OMDCampaignProto, TArray<FOMDSoftProtoPtr>& protodata, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void GetEntitlementProtodata(FOMDSoftProtoPtr Pointer, FOMDEntitlementProto& protodata, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void GetCampaignProtodata(FOMDSoftProtoPtr Pointer, FOMDCampaignProto& protodata, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void GetAllWeaponProtos(TArray<FOMDSoftProtoPtr>& protodata);
    
    UFUNCTION(BlueprintPure)
    static void GetAllWeaponGuids(TArray<FGuid>& guids);
    
    UFUNCTION(BlueprintPure)
    static void GetAllTrinketProtos(TArray<FOMDSoftProtoPtr>& protodata);
    
    UFUNCTION(BlueprintPure)
    static void GetAllTrapProtos(TArray<FOMDSoftProtoPtr>& protodata);
    
    UFUNCTION(BlueprintPure)
    static void GetAllTrapGuids(TArray<FGuid>& guids);
    
    UFUNCTION(BlueprintPure)
    static void GetAllTipProtos(TArray<FOMDSoftProtoPtr>& protodata);
    
    UFUNCTION(BlueprintPure)
    static void GetAllTipGuids(TArray<FGuid>& guids);
    
    UFUNCTION(BlueprintPure)
    static void GetAllPlayerSkinProtos(TArray<FOMDSoftProtoPtr>& protodata);
    
    UFUNCTION(BlueprintPure)
    static void GetAllPlayerCharacterProtos(TArray<FOMDSoftProtoPtr>& protodata);
    
    UFUNCTION(BlueprintPure)
    static void GetAllPingProtos(TArray<FOMDSoftProtoPtr>& protodata);
    
    UFUNCTION(BlueprintPure)
    static void GetAllPingGuids(TArray<FGuid>& guids);
    
    UFUNCTION(BlueprintPure)
    static void GetAllNewsProtos(TArray<FOMDSoftProtoPtr>& protodata);
    
    UFUNCTION(BlueprintPure)
    static void GetAllMultiplayerBucketProtos(TArray<FOMDSoftProtoPtr>& protodata);
    
    UFUNCTION(BlueprintPure)
    static void GetAllItemUpgradesOfType(FOMDSoftProtoPtr Item, EUpgradeType Type, TArray<FOMDSoftProtoPtr>& Upgrades);
    
    UFUNCTION(BlueprintPure)
    static void GetAllItemUpgrades(FOMDSoftProtoPtr Item, TArray<FOMDSoftProtoPtr>& Upgrades);
    
    UFUNCTION(BlueprintPure)
    static void GetAllItemProtos(TArray<FOMDSoftProtoPtr>& protodata);
    
    UFUNCTION(BlueprintPure)
    static void GetAllItemGuids(TArray<FGuid>& guids);
    
    UFUNCTION(BlueprintPure)
    static void GetAllAchievements(TArray<FOMDSoftProtoPtr>& protodata);
    
    UFUNCTION(BlueprintPure)
    static void GetAICharacterProtodata(FOMDSoftProtoPtr Pointer, FOMDAICharacterProto& protodata, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void GetAICharacterGuardianProtodata(FOMDSoftProtoPtr Pointer, FOMDAICharacterGuardianProto& protodata, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void GetAICharacterAbilityProtodata(FOMDSoftProtoPtr Pointer, FOMDAICharacterAbilityProto& protodata, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void FindWeaponSoftProtoPtrByName(FName Name, FOMDSoftProtoPtr& protoPtr, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void FindWeaponProtodataByName(FName Name, FOMDWeaponProto& protodata, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void FindWeaponProtodataByGuid(FGuid Guid, FOMDWeaponProto& protodata, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void FindUpgradeSoftProtoPtrByName(FName Name, FOMDSoftProtoPtr& protoPtr, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void FindTrinketSoftProtoPtrByName(FName Name, FOMDSoftProtoPtr& protoPtr, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void FindTrapSoftProtoPtrByName(FName Name, FOMDSoftProtoPtr& protoPtr, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void FindTrapProtodataByName(FName Name, FOMDTrapProto& protodata, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void FindTrapProtodataByGuid(FGuid Guid, FOMDTrapProto& protodata, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void FindTipProtodataByName(FName Name, FOMDTipProto& protodata, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void FindTipProtodataByGuid(FGuid Guid, FOMDTipProto& protodata, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void FindStatusEffectSoftProtoPtrByName(FName Name, FOMDSoftProtoPtr& protodata, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void FindStatusEffectProtodataByName(FName Name, FOMDStatusEffectProto& protodata, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void FindPingProtodataByGuid(FGuid Guid, FOMDPingProto& protodata, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void FindPickupSoftProtoPtrByName(FName Name, FOMDSoftProtoPtr& protoPtr, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void FindPickupProtodataByName(FName Name, FOMDPickupProto& protodata, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void FindPickupProtodataByGuid(FGuid Guid, FOMDPickupProto& protodata, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void FindItemProtodataByName(FName Name, FOMDItemProto& protodata, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void FindItemProtodataByGuid(FGuid Guid, FOMDItemProto& protodata, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void FindAICharacterSoftProtoPtrByName(FName Name, FOMDSoftProtoPtr& protoPtr, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void FindAICharacterAbilitySoftProtoPtrByName(FName Name, FOMDSoftProtoPtr& protoPtr, bool& success);
    
    UFUNCTION(BlueprintPure)
    static void FindAbilitySoftProtoPtrByName(FName Name, FOMDSoftProtoPtr& protoPtr, bool& success);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_OMDSoftProtoPtr(FOMDSoftProtoPtr A, FOMDSoftProtoPtr B);
    
};

