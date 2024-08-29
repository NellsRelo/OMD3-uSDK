#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "OMDCheatManager.generated.h"

UCLASS(Blueprintable)
class OMD_API UOMDCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    UOMDCheatManager();

    UFUNCTION(BlueprintCallable, Exec)
    void UnlockEndGameState();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockCharacter(FName characterName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllScenarios();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllCharacters();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TakeDamage(float Damage);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowPlayerAnimDebugs();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShaderPipelineCache_ResumeBatching();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShaderPipelineCache_CheckPrecompiles();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetRandomModeSeed(int32 newSeed);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetLoadoutItem(int32 Slot, FName ItemName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetDifficulty(FName Difficulty);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCoop(bool isCoop);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCampaignProgress(FName campaign, int32 Progress);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetActiveWeeklyChallenge(int32 Number);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RevokeEntitlement(FName entitlement);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetSave();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetRandomModeNPE();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetRandomMode();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetNewsSlugs();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetActiveWeeklyChallenge();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetAchievements();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Proj_SetUsePool(bool shouldUsePool);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Perf_ToggleHUD();
    
    UFUNCTION(BlueprintCallable, Exec)
    void NoWisps(bool NewNoWisps);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KillMe();
    
    UFUNCTION(BlueprintCallable, Exec)
    void InfiniteRift();
    
    UFUNCTION(BlueprintCallable, Exec)
    void IncrementLifetimeStat(const FString& Name, float Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void IncrementDebuffAtTier(int32 tierToReroll);
    
    UFUNCTION(BlueprintCallable, Exec)
    void IncrementBuffAtTier(int32 tierToReroll);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GrantRandomModeReroll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GrantLoadoutSlot(int32 Slot, bool isWarslongSlot);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GrantItem(FName ItemName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GrantInternalItems();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GrantEntitlement(FName entitlement);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GrantAllLoadoutSlots();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GrantAllItems();
    
    UFUNCTION(Exec)
    void GiveSkulls(uint32 amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisplayRandomModeTierInfo(int32 tier, float TimeToDisplay);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisplayRandomModeSavedData(float TimeToDisplay);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisplayRandomModeAll(float TimeToDisplay);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DecrementDebuffAtTier(int32 tierToReroll);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DecrementBuffAtTier(int32 tierToReroll);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CrashMe();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CompleteRandomModeTier();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CompleteItemMiniquest(FName ItemName, bool complete);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CompleteAllScenarios();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CompleteAllItemMiniquests();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangeCharacter(FName Name);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AI_ShowDebugLines(bool show);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AI_SetWarScenario(bool isWarScenario);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AI_SetUseShields(bool useShields);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AI_SetUseAttachments(bool useAttachments);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AI_SetTargetingEnabled(bool isTargetingEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AI_SetOverlapPerfMode(bool isOverlapPerfModeEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AI_SetNavRenderLayer(int32 newLayer);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AI_SetMovementUpdateGroups(int32 numGroups);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AI_SetMovementMaxSkippedFrames(int32 maxSkippedFrames);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AI_SetMovementLerpMeshSpeed(float lerpMeshSpeed);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AI_SetMaxCharacters(int32 maxAICharacters);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AI_SetAllAICharactersClass(FName characterName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AI_SetAllAICharactersAmount(int32 amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AI_ResetOnslaught();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AI_DebugPathing();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AI_AllowAggro(bool newAggro);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddItemToInventory(FName ItemName);
    
};

