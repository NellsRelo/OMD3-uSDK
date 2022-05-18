#pragma once
#include "CoreMinimal.h"
#include "OMDUpgradeProto.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "OMDRandomModeSavedTier.h"
#include "OMDSoftProtoPtr.h"
#include "OMDInventoryItemUpgrades.h"
#include "OMDPlayerCharacterProto.h"
#include "OMDKeyMapping.h"
#include "OMDAxisMapping.h"
#include "OMDItemProto.h"
#include "OMDRandomModeLevelEntry.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputActionKeyMapping -FallbackName=InputActionKeyMapping
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputAxisKeyMapping -FallbackName=InputAxisKeyMapping
#include "EGameDifficulty.h"
#include "OMDMissionStats.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/SaveGame.h"
#include "OMDSaveGame.generated.h"

UCLASS(BlueprintType)
class OMD_API UOMDSaveGame : public USaveGame {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<FOMDSoftProtoPtr> UnlockedMissions;
    
    UPROPERTY(EditDefaultsOnly)
    FOMDSoftProtoPtr CurrentCharacter;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FOMDSoftProtoPtr> UnlockedCharacters;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FOMDSoftProtoPtr, FOMDInventoryItemUpgrades> Inventory;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FOMDSoftProtoPtr> Loadout;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FOMDSoftProtoPtr> CompletedMiniquests;
    
    UPROPERTY(BlueprintReadWrite)
    bool bDismissedFirstPlayNPE;
    
    UPROPERTY(BlueprintReadWrite)
    bool bDismissedInventoryNPE;
    
    UPROPERTY(BlueprintReadWrite)
    bool bDismissedSpellbookNPE;
    
    UPROPERTY(BlueprintReadWrite)
    bool bShowedStatsNPE;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<FOMDSoftProtoPtr, FOMDSoftProtoPtr> LastSelectedScenarios;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FOMDKeyMapping> SavedKeyMappings;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FOMDAxisMapping> SavedAxisMappings;
    
    UPROPERTY(BlueprintReadOnly)
    bool bUsingDefaultAxisBindings;
    
public:
    UPROPERTY(BlueprintReadOnly)
    int32 RandomModeHighScore;
    
    UPROPERTY(BlueprintReadOnly)
    int32 RandomModeHighScoreCOOP;
    
    UPROPERTY(BlueprintReadOnly)
    int32 CurrentRandomModeRerollsRemaining;
    
    UPROPERTY(BlueprintReadWrite)
    bool bHasSeenRandomModeHelp;
    
    UPROPERTY(BlueprintReadWrite)
    bool bIsRandomModeCoop;
    
    UPROPERTY(BlueprintReadWrite)
    bool bIsPlayingRandomModeGame;
    
    UPROPERTY(BlueprintReadOnly)
    int32 LastRandomModeTier;
    
    UPROPERTY(BlueprintReadOnly)
    int32 LastRandomModeSeed;
    
    UPROPERTY(BlueprintReadOnly)
    int32 LastRandomModeRiftPointsRemaining;
    
    UOMDSaveGame();
    UFUNCTION(BlueprintPure)
    bool UpgradeOwned(const FOMDItemProto& Item, const FOMDUpgradeProto& upgrade) const;
    
    UFUNCTION(BlueprintPure)
    bool UpgradeEquiped(const FOMDItemProto& Item, const FOMDUpgradeProto& upgrade) const;
    
    UFUNCTION(BlueprintCallable)
    void UnlockCharacter(const FOMDPlayerCharacterProto& Character);
    
    UFUNCTION(BlueprintCallable)
    void UnequipUpgrade(const FOMDItemProto& Item, const FOMDUpgradeProto& upgrade);
    
    UFUNCTION(BlueprintCallable)
    void SetUsingDefaultAxisBindings(bool useDefault);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldPromptForOptOut(bool newVal);
    
    UFUNCTION(BlueprintCallable)
    void SetSavedKeyMappings(TArray<FInputActionKeyMapping> ActionMappings);
    
    UFUNCTION(BlueprintCallable)
    void SetSavedAxisMappings(TArray<FInputAxisKeyMapping> AxisMappings);
    
    UFUNCTION(BlueprintCallable)
    void SetHasSeenNewsSlug(const FString& slugToAdd);
    
    UFUNCTION(BlueprintCallable)
    void SetHasSeenAnalyticsPopup(bool newVal);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentRandomModeRiftPointsRemaining(int32 newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCanCollectAnalytics(bool newVal);
    
    UFUNCTION(BlueprintCallable)
    bool SellUpgrade(const FOMDItemProto& Item, const FOMDUpgradeProto& upgrade);
    
    UFUNCTION(BlueprintCallable)
    void SellItemUpgrades(const FOMDItemProto& Item);
    
    UFUNCTION(BlueprintCallable)
    void SellAllUpgrades();
    
    UFUNCTION(BlueprintCallable)
    void SelectMissionAndDebuffForTier(int32 tier, int32 debuffChoice, int32 missionChoice);
    
    UFUNCTION(BlueprintCallable)
    void SelectAdditionalBuffForTier(int32 tier, int32 buff);
    
    UFUNCTION(BlueprintCallable)
    void ResetRandomModeProgress();
    
    UFUNCTION(BlueprintCallable)
    int32 RerollDebuffFromTier(int32 tierToReroll, int32 choiceToStartAt);
    
    UFUNCTION(BlueprintCallable)
    bool PurchaseUpgrade(const FOMDItemProto& Item, const FOMDUpgradeProto& upgrade);
    
    UFUNCTION(BlueprintCallable)
    bool PurchaseItem(FOMDSoftProtoPtr itemProto);
    
    UFUNCTION(BlueprintCallable)
    void ProcessDeferredLeaderboardUpload();
    
    UFUNCTION(BlueprintCallable)
    void ModifyBuffChoicesPerTier(int32 amount);
    
    UFUNCTION(BlueprintPure)
    bool ItemOwned(FOMDItemProto Item) const;
    
    UFUNCTION(BlueprintPure)
    bool IsMiniquestComplete(const FOMDItemProto& Item) const;
    
    UFUNCTION(BlueprintCallable)
    void IncrementRandomModeTier();
    
    UFUNCTION(BlueprintCallable)
    void IncrementLoadingScreenTip();
    
    UFUNCTION(BlueprintCallable)
    bool HasSelectedMissionForCurrentTier();
    
    UFUNCTION(BlueprintCallable)
    bool HasSeenNewsSlug(const FString& slugToCheck);
    
    UFUNCTION(BlueprintPure)
    bool HasSeenAnalyticsPopup();
    
    UFUNCTION(BlueprintPure)
    bool HasFinishedCampaign(FOMDSoftProtoPtr OMDCampaignProto) const;
    
    UFUNCTION(BlueprintCallable)
    void GrantLoadoutSlot(bool bIsWarScenarioSlot, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool GrantItem(FOMDSoftProtoPtr itemProto, bool bSlotIfPossible, bool bAllowInternal);
    
    UFUNCTION(BlueprintPure)
    void GetUnlockedCharacters(TArray<FOMDSoftProtoPtr>& characters) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetTotalRandomModeScoreFromTier(int32 tier);
    
    UFUNCTION(BlueprintPure)
    int32 GetTotalRandomModeScore() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSkulls() const;
    
    UFUNCTION(BlueprintPure)
    bool GetShouldPromptForOptOut();
    
    UFUNCTION(BlueprintCallable)
    FOMDRandomModeLevelEntry GetSelectedMissionForTier(int32 tier);
    
    UFUNCTION(BlueprintCallable)
    FOMDRandomModeLevelEntry GetSelectedMissionForCurrentTier();
    
    UFUNCTION(BlueprintCallable)
    FOMDSoftProtoPtr GetSelectedDebuffForTier(int32 tier);
    
    UFUNCTION(BlueprintCallable)
    TArray<FOMDSoftProtoPtr> GetSelectedBuffsForTier(int32 tier);
    
    UFUNCTION(BlueprintCallable)
    int32 GetRandomModeTotalTiers();
    
    UFUNCTION(BlueprintCallable)
    int32 GetRandomModeScoreFromPreviousTiersBeforeCurrent();
    
    UFUNCTION(BlueprintCallable)
    int32 GetRandomModeScoreFromPreviousTiers(int32 tier);
    
    UFUNCTION(BlueprintPure)
    int32 GetRandomModeLastScore();
    
    UFUNCTION(BlueprintPure)
    int32 GetRandomModeHighScore();
    
    UFUNCTION(BlueprintPure)
    int32 GetRandomModeHighestTier();
    
    UFUNCTION(BlueprintCallable)
    FOMDRandomModeSavedTier GetPossibleChoicesForTier(int32 tier);
    
    UFUNCTION(BlueprintPure)
    TArray<FOMDSoftProtoPtr> GetOwnedUpgrades(const FOMDItemProto& Item) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNextLoadingScreenTip();
    
    UFUNCTION(BlueprintPure)
    bool GetMissionStats(FOMDSoftProtoPtr OMDMissionProto, EGameDifficulty Difficulty, FOMDMissionStats& stats) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetLastTotalRandomModeScore() const;
    
    UFUNCTION(BlueprintCallable)
    FOMDSoftProtoPtr GetLastSelectedDebuffForTier(int32 tier);
    
    UFUNCTION(BlueprintCallable)
    TArray<FOMDSoftProtoPtr> GetLastSelectedBuffsForTier(int32 tier);
    
    UFUNCTION(BlueprintCallable)
    int32 GetLastRandomModeTotalTrapsPlaced();
    
    UFUNCTION(BlueprintCallable)
    float GetLastRandomModeTotalTimeSpent();
    
    UFUNCTION(BlueprintCallable)
    int32 GetLastRandomModeTotalPlayerDeaths();
    
    UFUNCTION(BlueprintCallable)
    int32 GetLastRandomModeTotalEnemiesKilled();
    
    UFUNCTION(BlueprintCallable)
    TArray<FOMDSoftProtoPtr> GetLastAllTiersSelectedMissions();
    
    UFUNCTION(BlueprintPure)
    TArray<FOMDSoftProtoPtr> GetEquipedUpgrades(const FOMDItemProto& Item) const;
    
    UFUNCTION(BlueprintCallable)
    FOMDSoftProtoPtr GetDebuffForCurrentTier();
    
    UFUNCTION(BlueprintCallable)
    TArray<FOMDSoftProtoPtr> GetDebuffChoicesForTier(int32 tier, int32 numberOfChoices);
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentRandomModeTier() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentRandomModeRiftPointsRemaining();
    
    UFUNCTION(BlueprintPure)
    FOMDSoftProtoPtr GetCurrentCharacter() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCampaignProgress(FOMDSoftProtoPtr OMDCampaignProto) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FOMDSoftProtoPtr> GetBuffsForCurrentTier();
    
    UFUNCTION(BlueprintCallable)
    TArray<FOMDSoftProtoPtr> GetBuffChoicesForTier(int32 tier, int32 numberOfChoices);
    
    UFUNCTION(BlueprintCallable)
    int32 GetBuffChoicesAmountPerTier();
    
    UFUNCTION(BlueprintCallable)
    TArray<FOMDSoftProtoPtr> GetAllTiersSelectedMissions();
    
    UFUNCTION(BlueprintPure)
    void GetAllOwnedItems(TArray<FOMDSoftProtoPtr>& Items) const;
    
    UFUNCTION(BlueprintCallable)
    void EquipUpgrade(const FOMDItemProto& Item, const FOMDUpgradeProto& upgrade);
    
    UFUNCTION(BlueprintCallable)
    void CompleteMiniquest(const FOMDItemProto& Item, bool complete);
    
    UFUNCTION(BlueprintCallable)
    bool CharacterUnlocked(const FOMDPlayerCharacterProto& Character);
    
    UFUNCTION(BlueprintCallable)
    bool CanRerollAtTier(int32 tier);
    
    UFUNCTION(BlueprintPure)
    bool CanCollectAnalytics();
    
    UFUNCTION(BlueprintCallable)
    void ApplyKeyMappings();
    
    UFUNCTION(BlueprintCallable)
    void AddSkulls(int32 numSkulls);
    
};

