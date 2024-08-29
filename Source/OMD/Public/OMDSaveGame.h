#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/SaveGame.h"
#include "EGameDifficulty.h"
#include "OMDAxisMapping.h"
#include "OMDInventoryItemUpgrades.h"
#include "OMDItemProto.h"
#include "OMDKeyMapping.h"
#include "OMDMissionStats.h"
#include "OMDPlayerCharacterProto.h"
#include "OMDRandomModeLevelEntry.h"
#include "OMDRandomModeSavedTier.h"
#include "OMDSoftProtoPtr.h"
#include "OMDUpgradeProto.h"
#include "OMDSaveGame.generated.h"

UCLASS(Blueprintable)
class OMD_API UOMDSaveGame : public USaveGame {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOMDSoftProtoPtr> UnlockedMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr CurrentCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOMDSoftProtoPtr> UnlockedCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FOMDSoftProtoPtr, FOMDInventoryItemUpgrades> Inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOMDSoftProtoPtr> Loadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOMDSoftProtoPtr> CompletedMiniquests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDismissedFirstPlayNPE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDismissedInventoryNPE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDismissedSpellbookNPE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowedStatsNPE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FOMDSoftProtoPtr, FOMDSoftProtoPtr> LastSelectedScenarios;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOMDKeyMapping> SavedKeyMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOMDAxisMapping> SavedAxisMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsingDefaultAxisBindings;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RandomModeHighScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RandomModeHighScoreCOOP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentRandomModeRerollsRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasSeenRandomModeHelp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRandomModeCoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayingRandomModeGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastRandomModeTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastRandomModeSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastRandomModeRiftPointsRemaining;
    
    UOMDSaveGame();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UpgradeOwned(const FOMDItemProto& Item, const FOMDUpgradeProto& upgrade) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ItemOwned(FOMDItemProto Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMiniquestComplete(const FOMDItemProto& Item) const;
    
    UFUNCTION(BlueprintCallable)
    void IncrementRandomModeTier();
    
    UFUNCTION(BlueprintCallable)
    void IncrementLoadingScreenTip();
    
    UFUNCTION(BlueprintCallable)
    bool HasSelectedMissionForCurrentTier();
    
    UFUNCTION(BlueprintCallable)
    bool HasSeenNewsSlug(const FString& slugToCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSeenAnalyticsPopup();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFinishedCampaign(FOMDSoftProtoPtr OMDCampaignProto) const;
    
    UFUNCTION(BlueprintCallable)
    void GrantLoadoutSlot(bool bIsWarScenarioSlot, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool GrantItem(FOMDSoftProtoPtr itemProto, bool bSlotIfPossible, bool bAllowInternal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetUnlockedCharacters(TArray<FOMDSoftProtoPtr>& characters) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetTotalRandomModeScoreFromTier(int32 tier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalRandomModeScore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSkulls() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRandomModeLastScore();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRandomModeHighScore();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRandomModeHighestTier();
    
    UFUNCTION(BlueprintCallable)
    FOMDRandomModeSavedTier GetPossibleChoicesForTier(int32 tier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FOMDSoftProtoPtr> GetOwnedUpgrades(const FOMDItemProto& Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNextLoadingScreenTip();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMissionStats(FOMDSoftProtoPtr OMDMissionProto, EGameDifficulty Difficulty, FOMDMissionStats& stats) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FOMDSoftProtoPtr> GetEquipedUpgrades(const FOMDItemProto& Item) const;
    
    UFUNCTION(BlueprintCallable)
    FOMDSoftProtoPtr GetDebuffForCurrentTier();
    
    UFUNCTION(BlueprintCallable)
    TArray<FOMDSoftProtoPtr> GetDebuffChoicesForTier(int32 tier, int32 numberOfChoices);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentRandomModeTier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentRandomModeRiftPointsRemaining();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOMDSoftProtoPtr GetCurrentCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCampaignProgress(FOMDSoftProtoPtr OMDCampaignProto) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FOMDSoftProtoPtr> GetBuffsForCurrentTier();
    
    UFUNCTION(BlueprintCallable)
    TArray<FOMDSoftProtoPtr> GetBuffChoicesForTier(int32 tier, int32 numberOfChoices);
    
    UFUNCTION(BlueprintCallable)
    int32 GetBuffChoicesAmountPerTier();
    
    UFUNCTION(BlueprintCallable)
    TArray<FOMDSoftProtoPtr> GetAllTiersSelectedMissions();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllOwnedItems(TArray<FOMDSoftProtoPtr>& Items) const;
    
    UFUNCTION(BlueprintCallable)
    void EquipUpgrade(const FOMDItemProto& Item, const FOMDUpgradeProto& upgrade);
    
    UFUNCTION(BlueprintCallable)
    void CompleteMiniquest(const FOMDItemProto& Item, bool complete);
    
    UFUNCTION(BlueprintCallable)
    bool CharacterUnlocked(const FOMDPlayerCharacterProto& Character);
    
    UFUNCTION(BlueprintCallable)
    bool CanRerollAtTier(int32 tier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCollectAnalytics();
    
    UFUNCTION(BlueprintCallable)
    void ApplyKeyMappings();
    
    UFUNCTION(BlueprintCallable)
    void AddSkulls(int32 numSkulls);
    
};

