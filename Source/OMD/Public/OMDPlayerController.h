#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/MovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "InputCoreTypes.h"
#include "EGameDifficulty.h"
#include "EOMDTriggerEffectTrigger.h"
#include "OMDCoin.h"
#include "OMDDamageEvent.h"
#include "OMDGameStats.h"
#include "OMDLeaderboardReadCompleteDelegateDelegate.h"
#include "OMDPointDamageEvent.h"
#include "OMDRadialDamageEvent.h"
#include "OMDSoftProtoPtr.h"
#include "OMDStatsRegistry.h"
#include "PawnChangedDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "OMDPlayerController.generated.h"

class AActor;
class AController;
class AOMDInventory;
class AOMDProjectile;
class AOMDTrap;
class APawn;
class UOMDAbilitySystemComponent;
class UOMDInventoryItem;
class UOMDTriggerEffectComponent;
class UObject;
class UPostProcessComponent;

UCLASS(Blueprintable)
class OMD_API AOMDPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLoadoutItemDelegate, int32, Index, UOMDInventoryItem*, Item);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInventoryDelegate, UOMDInventoryItem*, Item);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPawnChangedDelegate OnLocalPawnChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WorldInventory, meta=(AllowPrivateAccess=true))
    AOMDInventory* WorldInventory;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInventoryDelegate OnInventoryItemAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInventoryDelegate OnInventoryItemUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadoutItemDelegate OnLoadoutItemAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadoutItemDelegate OnLoadoutItemRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadoutItemDelegate OnEquippedItemChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOMDSoftProtoPtr> Loadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EquippedItemIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrapCooldownMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrapResetDelayMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Coin, meta=(AllowPrivateAccess=true))
    FOMDCoin Coin;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDLeaderboardReadCompleteDelegate LeaderboardReadCompleteBlueprintDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOMDSoftProtoPtr> EffectsToApplyOnPossess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* PostProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOMDTriggerEffectComponent* TriggerEffectComponent;
    
public:
    AOMDPlayerController(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Exec)
    void WinGame();
    
public:
    UFUNCTION(BlueprintCallable)
    void ToggleStreamConnect();
    
    UFUNCTION(BlueprintCallable)
    void ToggleLoadoutItem(UOMDInventoryItem* inventoryItem);
    
    UFUNCTION(BlueprintCallable)
    void ToggleLargeMap();
    
    UFUNCTION(BlueprintCallable)
    void SwapLoadoutItems(int32 firstIndex, int32 secondIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SubtractRiftPoints(int32 amountToSubtract);
    
    UFUNCTION(BlueprintCallable)
    bool SpendCoin(int32 amount);
    
    UFUNCTION(BlueprintCallable)
    void ShowStreamConnectBroadcastMessage();
    
    UFUNCTION(BlueprintCallable)
    void ShowInventory();
    
    UFUNCTION(BlueprintCallable)
    void SetTrapResetDelayMultiplier(float multiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetTrapCooldownMultiplier(float multiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetRiftPoints(int32 amountToSetTo, bool modify);
    
    UFUNCTION(BlueprintCallable)
    void SetReady();
    
    UFUNCTION(BlueprintCallable)
    void SetLoadoutItemAtIndex(int32 Index, UOMDInventoryItem* inventoryItem);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetKeyBindingsToDefaults();
    
    UFUNCTION(BlueprintCallable)
    bool SetGameplayKeyBinding(FName ActionName, FKey Key);
    
    UFUNCTION(BlueprintCallable)
    bool SetAxisKeyMapping(FName axisName, FKey Key, float Scale);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_WinGame();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SubtractRiftPoints(int32 amountToSubtract);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetRiftPoints(int32 amountToSetTo, bool modify);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetReady();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SellTrap(AOMDTrap* Trap);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SellAllTraps();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SellAllOwnedTrapsOfType(FOMDSoftProtoPtr Trap);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ResetTraps();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ResetAllTraps();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ResetAllOwnedTraps();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_RequestRadialDamage(float Damage, const FRadialDamageEvent& DamageEvent, AController* eventInstigator, AActor* DamagedActor, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_RequestPointDamage(float Damage, const FPointDamageEvent& DamageEvent, AController* eventInstigator, AActor* DamagedActor, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_RequestOMDRadialDamage(float Damage, const FOMDRadialDamageEvent& DamageEvent, AController* eventInstigator, AActor* DamagedActor, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_RequestOMDPointDamage(float Damage, const FOMDPointDamageEvent& DamageEvent, AController* eventInstigator, AActor* DamagedActor, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_RequestOMDDamage(float Damage, const FOMDDamageEvent& DamageEvent, AController* eventInstigator, AActor* DamagedActor, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_QuickTest();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_NotifyClientLoadedIntoGame();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_NextWave();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ModifyRemainingFreeRiftSubtractions(int32 toModifyWith);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_LoseGame();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_LaunchMinionsLooped(float Seconds, float strength);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_LaunchAllMinions(float strength);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_KillAllMobs();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_InfiniteHealth();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_IncrementRiftProtection();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_IncrementRiftLightning(float Damage, float cooldown, float Radius);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_HealAllTrapsOfType(FOMDSoftProtoPtr trapProtoToHeal);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_HealAllTraps();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_GiveCoin(int32 amount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ForceGarbageCollection();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_EnablePickups(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Eject(const FVector& Location, const FRotator& Rotation);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_DecrementRiftProtection();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_DecrementRiftLightning();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_DebugChangeCharacter(FOMDSoftProtoPtr protodata);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_AddScore(int32 Score);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_AddRiftPoints(int32 amountToAdd);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_AddLifetimeStats(const FString& Name, int32 amount);
    
public:
    UFUNCTION(BlueprintCallable)
    void SellTrap(AOMDTrap* Trap);
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void SellAllTraps();
    
public:
    UFUNCTION(BlueprintCallable)
    void SellAllOwnedTrapsOfType(FOMDSoftProtoPtr OMDTrapProto);
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void ResetTraps();
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetAllTraps();
    
    UFUNCTION(BlueprintCallable)
    void ResetAllOwnedTraps();
    
    UFUNCTION(BlueprintCallable)
    void RemoveOnHitAbility(FGuid toRemove);
    
    UFUNCTION(BlueprintCallable)
    void RemoveOnDealDamageAbility(FGuid toRemove);
    
    UFUNCTION(BlueprintCallable)
    void RemoveOnApplyStatusEffectAbilities(FGuid toRemove);
    
    UFUNCTION(BlueprintCallable)
    void RemoveBaseStatusEffect(FOMDSoftProtoPtr statusEffectToRemove);
    
    UFUNCTION(BlueprintCallable)
    void ReadLeaderboardFiltered(const FString& MissionName, EGameDifficulty Difficulty, bool WeeklyChallenge, bool RandomMode, bool SoloGame, bool FriendsOnly, bool SelfOnly, int32 PageNum, int32 EntriesPerPage, bool fullLeaderboardRead);
    
    UFUNCTION(BlueprintCallable)
    void ReadLeaderboard(bool FriendsOnly, bool SelfOnly, int32 PageNum, int32 EntriesPerPage, bool fullLeaderboardRead);
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void QuickTest();
    
public:
    UFUNCTION(BlueprintCallable)
    void ProcessAllAchievements();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WorldInventory();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Coin();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnLeaderboardReadCompleteNative(bool bSuccessful);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndGame();
    
    UFUNCTION(BlueprintCallable, Exec)
    void NextWave();
    
public:
    UFUNCTION(BlueprintCallable)
    void ModifyRemainingFreeRiftSubtractions(int32 toModifyWith);
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void LoseGame();
    
    UFUNCTION(BlueprintCallable)
    void LoadoutItemRemoved(UOMDInventoryItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void LoadoutItemAdded(UOMDInventoryItem* Item);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LaunchMinionsLooped(float Seconds, float strength);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LaunchAllMinions(float strength);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KillAllMobs();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInventoryVisible() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void InventoryItemUpdated(UOMDInventoryItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void InventoryItemAdded(UOMDInventoryItem* Item);
    
    UFUNCTION(BlueprintCallable, Exec)
    void InfiniteHealth();
    
public:
    UFUNCTION(BlueprintCallable)
    void IncrementRiftProtection();
    
    UFUNCTION(BlueprintCallable)
    void IncrementRiftLightning(float Damage, float cooldown, float Radius);
    
    UFUNCTION(BlueprintCallable)
    void HealAllTrapsOfType(FOMDSoftProtoPtr trapProto);
    
    UFUNCTION(BlueprintCallable)
    void HealAllTraps();
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void GiveCoin(int32 amount);
    
    UFUNCTION(BlueprintCallable)
    bool GetUseHDRGamma();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLoadoutSlotUnlocked(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLoadoutSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UOMDInventoryItem* GetLoadoutItemAtIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UOMDInventoryItem* GetInventoryItem(const FOMDSoftProtoPtr& Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndexOfLoadoutItem(UOMDInventoryItem* inventoryItem) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UOMDInventoryItem* GetEquippedItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCoin() const;
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void ForceGarbageCollection();
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnablePickups(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Eject();
    
public:
    UFUNCTION(BlueprintCallable)
    void DecrementRiftProtection();
    
    UFUNCTION(BlueprintCallable)
    void DecrementRiftLightning();
    
    UFUNCTION(BlueprintCallable)
    void CompleteAchievement(FOMDSoftProtoPtr OMDAchievementProto);
    
    UFUNCTION(BlueprintCallable)
    void ClientSetTriggerEffect(EOMDTriggerEffectTrigger Trigger, FOMDSoftProtoPtr OMDTriggerEffectProto);
    
    UFUNCTION(BlueprintCallable)
    void ClientResetTriggerEffect(EOMDTriggerEffectTrigger Trigger);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetTriggerEffect(EOMDTriggerEffectTrigger Trigger, FOMDSoftProtoPtr effect);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ResetTriggerEffect(EOMDTriggerEffectTrigger Trigger);
    
public:
    UFUNCTION(BlueprintCallable, Client, Unreliable, WithValidation)
    void Client_ResetProjectile(UOMDAbilitySystemComponent* abilitySystem, TSubclassOf<AOMDProjectile> projectile, AActor* projectileOwner, APawn* projectileInstigator, FVector Origin, FVector Velocity, float lifetime, int32 pierceCount, AActor* homingTarget, float HomingAccelerationMagnitude, bool useVisualSpawnRotation, FRotator visualSpawnRotation, bool constrainToPlane, FVector PlaneConstraintOrigin, FVector PlaneConstraintNormal, EPlaneConstraintAxisSetting PlaneConstraintAxisSetting, int32 replicatedExplosionID);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void Client_ReceiveRadialDamageTaken(float Damage, const FRadialDamageEvent& DamageEvent, AActor* DamagedActor, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void Client_ReceivePointDamageTaken(float Damage, const FPointDamageEvent& DamageEvent, AActor* DamagedActor, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void Client_ReceiveOMDRadialDamageTaken(float Damage, const FOMDRadialDamageEvent& DamageEvent, AActor* DamagedActor, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void Client_ReceiveOMDPointDamageTaken(float Damage, const FOMDPointDamageEvent& DamageEvent, AActor* DamagedActor, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void Client_ReceiveOMDDamageTaken(float Damage, const FOMDDamageEvent& DamageEvent, AActor* DamagedActor, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_EndGame(bool didWin, uint8 skulls, int32 wavesCompleted, const FOMDStatsRegistry& playerStats, const FOMDGameStats& gameStats, int32 initialRiftPoints);
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearLeaderboardRequest();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnKillStreakEnded(int32 coinAmount);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_AllModalsDismissed();
    
    UFUNCTION(BlueprintCallable)
    void ApplyKeyBindingOptions();
    
    UFUNCTION(BlueprintCallable)
    void ApplyGraphicsOptions();
    
    UFUNCTION(BlueprintCallable)
    void ApplyGameplayOptions();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddScore(int32 Score);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddRiftPoints(int32 amountToAdd);
    
    UFUNCTION(BlueprintCallable)
    FGuid AddOnHitAbility(FOMDSoftProtoPtr ability, UObject* Source);
    
    UFUNCTION(BlueprintCallable)
    FGuid AddOnDealDamageAbility(FOMDSoftProtoPtr ability, UObject* Source);
    
    UFUNCTION(BlueprintCallable)
    FGuid AddOnApplyStatusEffectAbilities(FOMDSoftProtoPtr ability, UObject* Source);
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void AddLifetimeStats(const FString& Name, int32 amount);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddCoin(int32 amount);
    
    UFUNCTION(BlueprintCallable)
    void AddBaseStatusEffect(FOMDSoftProtoPtr statusEffectToApply);
    
};

