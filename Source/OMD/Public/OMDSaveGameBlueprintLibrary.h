#pragma once
#include "CoreMinimal.h"
#include "OMDMissionStats.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "OMDSoftProtoPtr.h"
#include "EUpgradeType.h"
#include "EGameDifficulty.h"
#include "OMDSaveGameBlueprintLibrary.generated.h"

class UObject;
class AController;

UCLASS(BlueprintType)
class OMD_API UOMDSaveGameBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOMDSaveGameBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static bool UnequipItemUpgrade(AController* Player, FOMDSoftProtoPtr OMDItemProto, FOMDSoftProtoPtr OMDUpgradeProto);
    
    UFUNCTION(BlueprintCallable)
    static void SetCurrentSkin(AController* Player, FOMDSoftProtoPtr OMDPlayerCharacterProto, FOMDSoftProtoPtr OMDPlayerSkinProto);
    
    UFUNCTION(BlueprintCallable)
    static void SetCurrentCharacter(AController* Player, FOMDSoftProtoPtr OMDPlayerCharacterProto);
    
    UFUNCTION(BlueprintCallable)
    static void SellItemUpgrades(AController* Player, FOMDSoftProtoPtr OMDItemProto);
    
    UFUNCTION(BlueprintCallable)
    static bool PurchaseSkin(AController* Player, FOMDSoftProtoPtr OMDPlayerSkinProto);
    
    UFUNCTION(BlueprintCallable)
    static bool PurchaseItemUpgrade(AController* Player, FOMDSoftProtoPtr OMDItemProto, FOMDSoftProtoPtr OMDUpgradeProto);
    
    UFUNCTION(BlueprintCallable)
    static bool PurchaseItem(AController* Player, FOMDSoftProtoPtr OMDItemProto);
    
    UFUNCTION(BlueprintPure)
    static bool IsMiniquestComplete(AController* Player, FOMDSoftProtoPtr OMDMiniquestProto);
    
    UFUNCTION(BlueprintPure)
    static bool IsLoadoutSlotUnlocked(AController* Player, int32 Slot);
    
    UFUNCTION(BlueprintPure)
    static bool IsItemUpgradeOwned(AController* Player, FOMDSoftProtoPtr OMDItemProto, FOMDSoftProtoPtr OMDUpgradeProto);
    
    UFUNCTION(BlueprintPure)
    static bool IsItemUpgradeEquipped(AController* Player, FOMDSoftProtoPtr OMDItemProto, FOMDSoftProtoPtr OMDUpgradeProto);
    
    UFUNCTION(BlueprintPure)
    static bool HasUnlockedMission(AController* Player, FOMDSoftProtoPtr OMDCampaignProto, FOMDSoftProtoPtr OMDMissionProto);
    
    UFUNCTION(BlueprintPure)
    static bool HasUnlockedCharacter(AController* Player, FOMDSoftProtoPtr OMDPlayerCharacterProto);
    
    UFUNCTION(BlueprintPure)
    static bool HasFinishedCampaign(AController* Player, FOMDSoftProtoPtr OMDCampaignProto);
    
    UFUNCTION(BlueprintPure)
    static bool HasAquiredSkin(AController* Player, FOMDSoftProtoPtr OMDPlayerSkinProto);
    
    UFUNCTION(BlueprintPure)
    static bool HasAquiredItem(AController* Player, FOMDSoftProtoPtr OMDItemProto);
    
    UFUNCTION(BlueprintPure)
    static void GetUnlockedCharacters(AController* Player, TArray<FOMDSoftProtoPtr>& characters);
    
    UFUNCTION(BlueprintPure)
    static int32 GetRandomModeHighScore(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static int32 GetRandomModeHighestTier(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static int32 GetPlayerSkulls(AController* Player);
    
    UFUNCTION(BlueprintPure)
    static bool GetOwnedItemUpgradesOfType(AController* Player, FOMDSoftProtoPtr OMDItemProto, EUpgradeType Type, TArray<FOMDSoftProtoPtr>& Upgrades);
    
    UFUNCTION(BlueprintPure)
    static bool GetOwnedItemUpgrades(AController* Player, FOMDSoftProtoPtr OMDItemProto, TArray<FOMDSoftProtoPtr>& Upgrades);
    
    UFUNCTION(BlueprintPure)
    static bool GetMissionStats(AController* Player, FOMDSoftProtoPtr OMDMissionProto, EGameDifficulty Difficulty, FOMDMissionStats& stats);
    
    UFUNCTION(BlueprintPure)
    static bool GetEquipedItemUpgradesOfType(AController* Player, FOMDSoftProtoPtr OMDItemProto, EUpgradeType Type, TArray<FOMDSoftProtoPtr>& Upgrades);
    
    UFUNCTION(BlueprintPure)
    static bool GetEquipedItemUpgrades(AController* Player, FOMDSoftProtoPtr OMDItemProto, TArray<FOMDSoftProtoPtr>& Upgrades);
    
    UFUNCTION(BlueprintPure)
    static void GetCurrentSkin(AController* Player, FOMDSoftProtoPtr OMDPlayerCharacterProto, FOMDSoftProtoPtr& Skin);
    
    UFUNCTION(BlueprintPure)
    static void GetCurrentCharacter(AController* Player, FOMDSoftProtoPtr& Character);
    
    UFUNCTION(BlueprintPure)
    static int32 GetCampaignProgress(AController* Player, FOMDSoftProtoPtr OMDCampaignProto);
    
    UFUNCTION(BlueprintPure)
    static EGameDifficulty GetCampaignDifficulty(AController* Player, FOMDSoftProtoPtr OMDCampaignProto);
    
    UFUNCTION(BlueprintPure)
    static void GetAllOwnedItems(AController* Player, TArray<FOMDSoftProtoPtr>& Items);
    
    UFUNCTION(BlueprintCallable)
    static bool EquipItemUpgrade(AController* Player, FOMDSoftProtoPtr OMDItemProto, FOMDSoftProtoPtr OMDUpgradeProto);
    
    UFUNCTION(BlueprintPure)
    static bool DoesCampaignHaveNewMission(AController* Player, FOMDSoftProtoPtr campaign);
    
    UFUNCTION(BlueprintCallable)
    static void ClearNotificationsForCampaign(AController* Player, FOMDSoftProtoPtr campaign);
    
};

