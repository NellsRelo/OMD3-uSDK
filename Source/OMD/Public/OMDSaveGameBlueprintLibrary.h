#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EGameDifficulty.h"
#include "EUpgradeType.h"
#include "OMDMissionStats.h"
#include "OMDSoftProtoPtr.h"
#include "OMDSaveGameBlueprintLibrary.generated.h"

class AController;
class UObject;

UCLASS(Blueprintable)
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMiniquestComplete(AController* Player, FOMDSoftProtoPtr OMDMiniquestProto);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLoadoutSlotUnlocked(AController* Player, int32 Slot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsItemUpgradeOwned(AController* Player, FOMDSoftProtoPtr OMDItemProto, FOMDSoftProtoPtr OMDUpgradeProto);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsItemUpgradeEquipped(AController* Player, FOMDSoftProtoPtr OMDItemProto, FOMDSoftProtoPtr OMDUpgradeProto);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasUnlockedMission(AController* Player, FOMDSoftProtoPtr OMDCampaignProto, FOMDSoftProtoPtr OMDMissionProto);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasUnlockedCharacter(AController* Player, FOMDSoftProtoPtr OMDPlayerCharacterProto);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasFinishedCampaign(AController* Player, FOMDSoftProtoPtr OMDCampaignProto);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasAquiredSkin(AController* Player, FOMDSoftProtoPtr OMDPlayerSkinProto);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasAquiredItem(AController* Player, FOMDSoftProtoPtr OMDItemProto);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetUnlockedCharacters(AController* Player, TArray<FOMDSoftProtoPtr>& characters);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetRandomModeHighScore(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetRandomModeHighestTier(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlayerSkulls(AController* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetOwnedItemUpgradesOfType(AController* Player, FOMDSoftProtoPtr OMDItemProto, EUpgradeType Type, TArray<FOMDSoftProtoPtr>& Upgrades);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetOwnedItemUpgrades(AController* Player, FOMDSoftProtoPtr OMDItemProto, TArray<FOMDSoftProtoPtr>& Upgrades);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMissionStats(AController* Player, FOMDSoftProtoPtr OMDMissionProto, EGameDifficulty Difficulty, FOMDMissionStats& stats);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetEquipedItemUpgradesOfType(AController* Player, FOMDSoftProtoPtr OMDItemProto, EUpgradeType Type, TArray<FOMDSoftProtoPtr>& Upgrades);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetEquipedItemUpgrades(AController* Player, FOMDSoftProtoPtr OMDItemProto, TArray<FOMDSoftProtoPtr>& Upgrades);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetCurrentSkin(AController* Player, FOMDSoftProtoPtr OMDPlayerCharacterProto, FOMDSoftProtoPtr& Skin);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetCurrentCharacter(AController* Player, FOMDSoftProtoPtr& Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCampaignProgress(AController* Player, FOMDSoftProtoPtr OMDCampaignProto);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EGameDifficulty GetCampaignDifficulty(AController* Player, FOMDSoftProtoPtr OMDCampaignProto);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAllOwnedItems(AController* Player, TArray<FOMDSoftProtoPtr>& Items);
    
    UFUNCTION(BlueprintCallable)
    static bool EquipItemUpgrade(AController* Player, FOMDSoftProtoPtr OMDItemProto, FOMDSoftProtoPtr OMDUpgradeProto);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesCampaignHaveNewMission(AController* Player, FOMDSoftProtoPtr campaign);
    
    UFUNCTION(BlueprintCallable)
    static void ClearNotificationsForCampaign(AController* Player, FOMDSoftProtoPtr campaign);
    
};

