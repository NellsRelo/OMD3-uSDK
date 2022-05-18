#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OMDRadialDamageEvent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerController -FallbackName=PlayerController
#include "OMDCoin.h"
#include "EGameDifficulty.h"
#include "PawnChangedDelegateDelegate.h"
#include "OMDSoftProtoPtr.h"
#include "OMDLeaderboardReadCompleteDelegateDelegate.h"
#include "OMDGameStats.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RadialDamageEvent -FallbackName=RadialDamageEvent
#include "OMDPointDamageEvent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PointDamageEvent -FallbackName=PointDamageEvent
#include "OMDDamageEvent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EPlaneConstraintAxisSetting -FallbackName=EPlaneConstraintAxisSetting
#include "EOMDTriggerEffectTrigger.h"
#include "OMDAction_SetPlanarMovement.h"
#include "OMDStatsRegistry.h"
#include "Components/PostProcessComponent.h"
#include "OMDPlayerController.generated.h"

class AOMDInventory;
class UOMDInventoryItem;
class UPostProcessComponent;
class UOMDTriggerEffectComponent;
class AOMDProjectile;
class AOMDTrap;
class AController;
class AActor;
class UOMDAbilitySystemComponent;
class APawn;
class UObject;

UCLASS()
class OMD_API AOMDPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLoadoutItemDelegate, int32, Index, UOMDInventoryItem*, Item);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInventoryDelegate, UOMDInventoryItem*, Item);
    
    UPROPERTY(BlueprintAssignable)
    FPawnChangedDelegate OnLocalPawnChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_WorldInventory)
    AOMDInventory* WorldInventory;
    
public:
    UPROPERTY(BlueprintAssignable)
    FInventoryDelegate OnInventoryItemAdded;
    
    UPROPERTY(BlueprintAssignable)
    FInventoryDelegate OnInventoryItemUpdated;
    
    UPROPERTY(BlueprintAssignable)
    FLoadoutItemDelegate OnLoadoutItemAdded;
    
    UPROPERTY(BlueprintAssignable)
    FLoadoutItemDelegate OnLoadoutItemRemoved;
    
    UPROPERTY(BlueprintAssignable)
    FLoadoutItemDelegate OnEquippedItemChanged;
    
protected:
    UPROPERTY()
    TArray<FOMDSoftProtoPtr> Loadout;
    
    UPROPERTY(BlueprintReadOnly)
    int32 EquippedItemIndex;
    
    UPROPERTY(BlueprintReadOnly)
    float TrapCooldownMultiplier;
    
    UPROPERTY(BlueprintReadOnly)
    float TrapResetDelayMultiplier;
    
    UPROPERTY(ReplicatedUsing=OnRep_Coin)
    FOMDCoin Coin;
    
public:
    UPROPERTY(BlueprintAssignable)
    FOMDLeaderboardReadCompleteDelegate LeaderboardReadCompleteBlueprintDelegate;
    
protected:
    UPROPERTY()
    TArray<FOMDSoftProtoPtr> EffectsToApplyOnPossess;
    
    UPROPERTY(Export, VisibleAnywhere)
    UPostProcessComponent* PostProcess;
    
    UPROPERTY(Export, VisibleAnywhere)
    UOMDTriggerEffectComponent* TriggerEffectComponent;
    
public:
    AOMDPlayerController();
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
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_WinGame();
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SubtractRiftPoints(int32 amountToSubtract);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetRiftPoints(int32 amountToSetTo, bool modify);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetReady();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SellTrap(AOMDTrap* Trap);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SellAllTraps();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SellAllOwnedTrapsOfType(FOMDSoftProtoPtr Trap);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_ResetTraps();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_ResetAllTraps();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_ResetAllOwnedTraps();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_RequestRadialDamage(float Damage, const FRadialDamageEvent& DamageEvent, AController* eventInstigator, AActor* DamagedActor, AActor* DamageCauser);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_RequestPointDamage(float Damage, const FPointDamageEvent& DamageEvent, AController* eventInstigator, AActor* DamagedActor, AActor* DamageCauser);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_RequestOMDRadialDamage(float Damage, const FOMDRadialDamageEvent& DamageEvent, AController* eventInstigator, AActor* DamagedActor, AActor* DamageCauser);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_RequestOMDPointDamage(float Damage, const FOMDPointDamageEvent& DamageEvent, AController* eventInstigator, AActor* DamagedActor, AActor* DamageCauser);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_RequestOMDDamage(float Damage, const FOMDDamageEvent& DamageEvent, AController* eventInstigator, AActor* DamagedActor, AActor* DamageCauser);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_QuickTest();
    
    UFUNCTION(Reliable, Server)
    void Server_NotifyClientLoadedIntoGame();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_NextWave();
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_ModifyRemainingFreeRiftSubtractions(int32 toModifyWith);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_LoseGame();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_LaunchMinionsLooped(float Seconds, float strength);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_LaunchAllMinions(float strength);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_KillAllMobs();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_InfiniteHealth();
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_IncrementRiftProtection();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_IncrementRiftLightning(float Damage, float cooldown, float Radius);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_HealAllTrapsOfType(FOMDSoftProtoPtr trapProtoToHeal);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_HealAllTraps();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_GiveCoin(int32 amount);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_ForceGarbageCollection();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_EnablePickups(bool IsEnabled);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_Eject(const FVector& Location, const FRotator& Rotation);
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_DecrementRiftProtection();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_DecrementRiftLightning();
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_DebugChangeCharacter(FOMDSoftProtoPtr protodata);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_AddScore(int32 Score);
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_AddRiftPoints(int32 amountToAdd);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_AddLifetimeStats(const FString& Name, int32 amount);
    
public:
    UFUNCTION(BlueprintCallable)
    void SellTrap(AOMDTrap* Trap);
    
protected:
    UFUNCTION(Exec)
    void SellAllTraps();
    
public:
    UFUNCTION(BlueprintCallable)
    void SellAllOwnedTrapsOfType(FOMDSoftProtoPtr OMDTrapProto);
    
protected:
    UFUNCTION(Exec)
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
    
    UFUNCTION()
    void OnRep_WorldInventory();
    
protected:
    UFUNCTION()
    void OnRep_Coin();
    
public:
    UFUNCTION()
    void OnLeaderboardReadCompleteNative(bool bSuccessful);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnEndGame();
    
    UFUNCTION(BlueprintCallable, Exec)
    void NextWave();
    
public:
    UFUNCTION(BlueprintCallable)
    void ModifyRemainingFreeRiftSubtractions(int32 toModifyWith);
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void LoseGame();
    
    UFUNCTION()
    void LoadoutItemRemoved(UOMDInventoryItem* Item);
    
    UFUNCTION()
    void LoadoutItemAdded(UOMDInventoryItem* Item);
    
    UFUNCTION(Exec)
    void LaunchMinionsLooped(float Seconds, float strength);
    
    UFUNCTION(Exec)
    void LaunchAllMinions(float strength);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KillAllMobs();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsInventoryVisible() const;
    
protected:
    UFUNCTION()
    void InventoryItemUpdated(UOMDInventoryItem* Item);
    
    UFUNCTION()
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
    UFUNCTION(BlueprintPure)
    bool GetLoadoutSlotUnlocked(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetLoadoutSize() const;
    
    UFUNCTION(BlueprintPure)
    UOMDInventoryItem* GetLoadoutItemAtIndex(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    UOMDInventoryItem* GetInventoryItem(const FOMDSoftProtoPtr& Item) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetIndexOfLoadoutItem(UOMDInventoryItem* inventoryItem) const;
    
    UFUNCTION(BlueprintPure)
    UOMDInventoryItem* GetEquippedItem() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCoin() const;
    
protected:
    UFUNCTION(Exec)
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
    UFUNCTION(Client, Reliable)
    void Client_SetTriggerEffect(EOMDTriggerEffectTrigger Trigger, FOMDSoftProtoPtr effect);
    
    UFUNCTION(Client, Reliable)
    void Client_ResetTriggerEffect(EOMDTriggerEffectTrigger Trigger);
    
public:
    UFUNCTION(Client, Unreliable, WithValidation)
    void Client_ResetProjectile(UOMDAbilitySystemComponent* abilitySystem, TSubclassOf<AOMDProjectile> projectile, AActor* projectileOwner, APawn* projectileInstigator, FVector Origin, FVector Velocity, float lifetime, int32 pierceCount, AActor* homingTarget, float HomingAccelerationMagnitude, bool useVisualSpawnRotation, FRotator visualSpawnRotation, bool constrainToPlane, FVector PlaneConstraintOrigin, FVector PlaneConstraintNormal, EPlaneConstraintAxisSetting PlaneConstraintAxisSetting, int32 replicatedExplosionID);
    
protected:
    UFUNCTION(Client, Unreliable)
    void Client_ReceiveRadialDamageTaken(float Damage, const FRadialDamageEvent& DamageEvent, AActor* DamagedActor, AActor* DamageCauser);
    
    UFUNCTION(Client, Unreliable)
    void Client_ReceivePointDamageTaken(float Damage, const FPointDamageEvent& DamageEvent, AActor* DamagedActor, AActor* DamageCauser);
    
    UFUNCTION(Client, Unreliable)
    void Client_ReceiveOMDRadialDamageTaken(float Damage, const FOMDRadialDamageEvent& DamageEvent, AActor* DamagedActor, AActor* DamageCauser);
    
    UFUNCTION(Client, Unreliable)
    void Client_ReceiveOMDPointDamageTaken(float Damage, const FOMDPointDamageEvent& DamageEvent, AActor* DamagedActor, AActor* DamageCauser);
    
    UFUNCTION(Client, Unreliable)
    void Client_ReceiveOMDDamageTaken(float Damage, const FOMDDamageEvent& DamageEvent, AActor* DamagedActor, AActor* DamageCauser);
    
    UFUNCTION(Client, Reliable)
    void Client_EndGame(bool didWin, uint8 skulls, int32 wavesCompleted, const FOMDStatsRegistry& playerStats, const FOMDGameStats& gameStats, int32 initialRiftPoints);
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearLeaderboardRequest();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnKillStreakEnded(int32 coinAmount);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
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
    UFUNCTION(Exec)
    void AddLifetimeStats(const FString& Name, int32 amount);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddCoin(int32 amount);
    
    UFUNCTION(BlueprintCallable)
    void AddBaseStatusEffect(FOMDSoftProtoPtr statusEffectToApply);
    
};

