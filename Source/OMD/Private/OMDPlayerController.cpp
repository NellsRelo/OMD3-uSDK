#include "OMDPlayerController.h"
#include "Components/PostProcessComponent.h"
#include "Net/UnrealNetwork.h"
#include "OMDCheatManager.h"
#include "OMDPlayerCameraManager.h"
#include "OMDTriggerEffectComponent.h"
#include "Templates/SubclassOf.h"

AOMDPlayerController::AOMDPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerCameraManagerClass = AOMDPlayerCameraManager::StaticClass();
    this->CheatClass = UOMDCheatManager::StaticClass();
    this->ClickEventKeys.AddDefaulted(1);
    this->WorldInventory = NULL;
    this->EquippedItemIndex = -1;
    this->TrapCooldownMultiplier = 1.00f;
    this->TrapResetDelayMultiplier = 1.00f;
    this->PostProcess = CreateDefaultSubobject<UPostProcessComponent>(TEXT("Post Processing"));
    this->TriggerEffectComponent = CreateDefaultSubobject<UOMDTriggerEffectComponent>(TEXT("Trigger Effects"));
    this->PostProcess->SetupAttachment(RootComponent);
}

void AOMDPlayerController::WinGame() {
}

void AOMDPlayerController::ToggleStreamConnect() {
}

void AOMDPlayerController::ToggleLoadoutItem(UOMDInventoryItem* inventoryItem) {
}

void AOMDPlayerController::ToggleLargeMap() {
}

void AOMDPlayerController::SwapLoadoutItems(int32 firstIndex, int32 secondIndex) {
}

void AOMDPlayerController::SubtractRiftPoints(int32 amountToSubtract) {
}

bool AOMDPlayerController::SpendCoin(int32 amount) {
    return false;
}

void AOMDPlayerController::ShowStreamConnectBroadcastMessage() {
}

void AOMDPlayerController::ShowInventory() {
}

void AOMDPlayerController::SetTrapResetDelayMultiplier(float multiplier) {
}

void AOMDPlayerController::SetTrapCooldownMultiplier(float multiplier) {
}

void AOMDPlayerController::SetRiftPoints(int32 amountToSetTo, bool modify) {
}

void AOMDPlayerController::SetReady() {
}

void AOMDPlayerController::SetLoadoutItemAtIndex(int32 Index, UOMDInventoryItem* inventoryItem) {
}

void AOMDPlayerController::SetKeyBindingsToDefaults() {
}

bool AOMDPlayerController::SetGameplayKeyBinding(FName ActionName, FKey Key) {
    return false;
}

bool AOMDPlayerController::SetAxisKeyMapping(FName axisName, FKey Key, float Scale) {
    return false;
}

void AOMDPlayerController::Server_WinGame_Implementation() {
}
bool AOMDPlayerController::Server_WinGame_Validate() {
    return true;
}

void AOMDPlayerController::Server_SubtractRiftPoints_Implementation(int32 amountToSubtract) {
}
bool AOMDPlayerController::Server_SubtractRiftPoints_Validate(int32 amountToSubtract) {
    return true;
}

void AOMDPlayerController::Server_SetRiftPoints_Implementation(int32 amountToSetTo, bool modify) {
}
bool AOMDPlayerController::Server_SetRiftPoints_Validate(int32 amountToSetTo, bool modify) {
    return true;
}

void AOMDPlayerController::Server_SetReady_Implementation() {
}
bool AOMDPlayerController::Server_SetReady_Validate() {
    return true;
}

void AOMDPlayerController::Server_SellTrap_Implementation(AOMDTrap* Trap) {
}
bool AOMDPlayerController::Server_SellTrap_Validate(AOMDTrap* Trap) {
    return true;
}

void AOMDPlayerController::Server_SellAllTraps_Implementation() {
}
bool AOMDPlayerController::Server_SellAllTraps_Validate() {
    return true;
}

void AOMDPlayerController::Server_SellAllOwnedTrapsOfType_Implementation(FOMDSoftProtoPtr Trap) {
}
bool AOMDPlayerController::Server_SellAllOwnedTrapsOfType_Validate(FOMDSoftProtoPtr Trap) {
    return true;
}

void AOMDPlayerController::Server_ResetTraps_Implementation() {
}
bool AOMDPlayerController::Server_ResetTraps_Validate() {
    return true;
}

void AOMDPlayerController::Server_ResetAllTraps_Implementation() {
}
bool AOMDPlayerController::Server_ResetAllTraps_Validate() {
    return true;
}

void AOMDPlayerController::Server_ResetAllOwnedTraps_Implementation() {
}
bool AOMDPlayerController::Server_ResetAllOwnedTraps_Validate() {
    return true;
}

void AOMDPlayerController::Server_RequestRadialDamage_Implementation(float Damage, const FRadialDamageEvent& DamageEvent, AController* eventInstigator, AActor* DamagedActor, AActor* DamageCauser) {
}
bool AOMDPlayerController::Server_RequestRadialDamage_Validate(float Damage, const FRadialDamageEvent& DamageEvent, AController* eventInstigator, AActor* DamagedActor, AActor* DamageCauser) {
    return true;
}

void AOMDPlayerController::Server_RequestPointDamage_Implementation(float Damage, const FPointDamageEvent& DamageEvent, AController* eventInstigator, AActor* DamagedActor, AActor* DamageCauser) {
}
bool AOMDPlayerController::Server_RequestPointDamage_Validate(float Damage, const FPointDamageEvent& DamageEvent, AController* eventInstigator, AActor* DamagedActor, AActor* DamageCauser) {
    return true;
}

void AOMDPlayerController::Server_RequestOMDRadialDamage_Implementation(float Damage, const FOMDRadialDamageEvent& DamageEvent, AController* eventInstigator, AActor* DamagedActor, AActor* DamageCauser) {
}
bool AOMDPlayerController::Server_RequestOMDRadialDamage_Validate(float Damage, const FOMDRadialDamageEvent& DamageEvent, AController* eventInstigator, AActor* DamagedActor, AActor* DamageCauser) {
    return true;
}

void AOMDPlayerController::Server_RequestOMDPointDamage_Implementation(float Damage, const FOMDPointDamageEvent& DamageEvent, AController* eventInstigator, AActor* DamagedActor, AActor* DamageCauser) {
}
bool AOMDPlayerController::Server_RequestOMDPointDamage_Validate(float Damage, const FOMDPointDamageEvent& DamageEvent, AController* eventInstigator, AActor* DamagedActor, AActor* DamageCauser) {
    return true;
}

void AOMDPlayerController::Server_RequestOMDDamage_Implementation(float Damage, const FOMDDamageEvent& DamageEvent, AController* eventInstigator, AActor* DamagedActor, AActor* DamageCauser) {
}
bool AOMDPlayerController::Server_RequestOMDDamage_Validate(float Damage, const FOMDDamageEvent& DamageEvent, AController* eventInstigator, AActor* DamagedActor, AActor* DamageCauser) {
    return true;
}

void AOMDPlayerController::Server_QuickTest_Implementation() {
}
bool AOMDPlayerController::Server_QuickTest_Validate() {
    return true;
}

void AOMDPlayerController::Server_NotifyClientLoadedIntoGame_Implementation() {
}

void AOMDPlayerController::Server_NextWave_Implementation() {
}
bool AOMDPlayerController::Server_NextWave_Validate() {
    return true;
}

void AOMDPlayerController::Server_ModifyRemainingFreeRiftSubtractions_Implementation(int32 toModifyWith) {
}
bool AOMDPlayerController::Server_ModifyRemainingFreeRiftSubtractions_Validate(int32 toModifyWith) {
    return true;
}

void AOMDPlayerController::Server_LoseGame_Implementation() {
}
bool AOMDPlayerController::Server_LoseGame_Validate() {
    return true;
}

void AOMDPlayerController::Server_LaunchMinionsLooped_Implementation(float Seconds, float strength) {
}
bool AOMDPlayerController::Server_LaunchMinionsLooped_Validate(float Seconds, float strength) {
    return true;
}

void AOMDPlayerController::Server_LaunchAllMinions_Implementation(float strength) {
}
bool AOMDPlayerController::Server_LaunchAllMinions_Validate(float strength) {
    return true;
}

void AOMDPlayerController::Server_KillAllMobs_Implementation() {
}
bool AOMDPlayerController::Server_KillAllMobs_Validate() {
    return true;
}

void AOMDPlayerController::Server_InfiniteHealth_Implementation() {
}
bool AOMDPlayerController::Server_InfiniteHealth_Validate() {
    return true;
}

void AOMDPlayerController::Server_IncrementRiftProtection_Implementation() {
}
bool AOMDPlayerController::Server_IncrementRiftProtection_Validate() {
    return true;
}

void AOMDPlayerController::Server_IncrementRiftLightning_Implementation(float Damage, float cooldown, float Radius) {
}
bool AOMDPlayerController::Server_IncrementRiftLightning_Validate(float Damage, float cooldown, float Radius) {
    return true;
}

void AOMDPlayerController::Server_HealAllTrapsOfType_Implementation(FOMDSoftProtoPtr trapProtoToHeal) {
}
bool AOMDPlayerController::Server_HealAllTrapsOfType_Validate(FOMDSoftProtoPtr trapProtoToHeal) {
    return true;
}

void AOMDPlayerController::Server_HealAllTraps_Implementation() {
}
bool AOMDPlayerController::Server_HealAllTraps_Validate() {
    return true;
}

void AOMDPlayerController::Server_GiveCoin_Implementation(int32 amount) {
}
bool AOMDPlayerController::Server_GiveCoin_Validate(int32 amount) {
    return true;
}

void AOMDPlayerController::Server_ForceGarbageCollection_Implementation() {
}
bool AOMDPlayerController::Server_ForceGarbageCollection_Validate() {
    return true;
}

void AOMDPlayerController::Server_EnablePickups_Implementation(bool IsEnabled) {
}
bool AOMDPlayerController::Server_EnablePickups_Validate(bool IsEnabled) {
    return true;
}

void AOMDPlayerController::Server_Eject_Implementation(const FVector& Location, const FRotator& Rotation) {
}
bool AOMDPlayerController::Server_Eject_Validate(const FVector& Location, const FRotator& Rotation) {
    return true;
}

void AOMDPlayerController::Server_DecrementRiftProtection_Implementation() {
}
bool AOMDPlayerController::Server_DecrementRiftProtection_Validate() {
    return true;
}

void AOMDPlayerController::Server_DecrementRiftLightning_Implementation() {
}
bool AOMDPlayerController::Server_DecrementRiftLightning_Validate() {
    return true;
}

void AOMDPlayerController::Server_DebugChangeCharacter_Implementation(FOMDSoftProtoPtr protodata) {
}
bool AOMDPlayerController::Server_DebugChangeCharacter_Validate(FOMDSoftProtoPtr protodata) {
    return true;
}

void AOMDPlayerController::Server_AddScore_Implementation(int32 Score) {
}
bool AOMDPlayerController::Server_AddScore_Validate(int32 Score) {
    return true;
}

void AOMDPlayerController::Server_AddRiftPoints_Implementation(int32 amountToAdd) {
}
bool AOMDPlayerController::Server_AddRiftPoints_Validate(int32 amountToAdd) {
    return true;
}

void AOMDPlayerController::Server_AddLifetimeStats_Implementation(const FString& Name, int32 amount) {
}
bool AOMDPlayerController::Server_AddLifetimeStats_Validate(const FString& Name, int32 amount) {
    return true;
}

void AOMDPlayerController::SellTrap(AOMDTrap* Trap) {
}

void AOMDPlayerController::SellAllTraps() {
}

void AOMDPlayerController::SellAllOwnedTrapsOfType(FOMDSoftProtoPtr OMDTrapProto) {
}

void AOMDPlayerController::ResetTraps() {
}

void AOMDPlayerController::ResetAllTraps() {
}

void AOMDPlayerController::ResetAllOwnedTraps() {
}

void AOMDPlayerController::RemoveOnHitAbility(FGuid toRemove) {
}

void AOMDPlayerController::RemoveOnDealDamageAbility(FGuid toRemove) {
}

void AOMDPlayerController::RemoveOnApplyStatusEffectAbilities(FGuid toRemove) {
}

void AOMDPlayerController::RemoveBaseStatusEffect(FOMDSoftProtoPtr statusEffectToRemove) {
}

void AOMDPlayerController::ReadLeaderboardFiltered(const FString& MissionName, EGameDifficulty Difficulty, bool WeeklyChallenge, bool RandomMode, bool SoloGame, bool FriendsOnly, bool SelfOnly, int32 PageNum, int32 EntriesPerPage, bool fullLeaderboardRead) {
}

void AOMDPlayerController::ReadLeaderboard(bool FriendsOnly, bool SelfOnly, int32 PageNum, int32 EntriesPerPage, bool fullLeaderboardRead) {
}

void AOMDPlayerController::QuickTest() {
}

void AOMDPlayerController::ProcessAllAchievements() {
}

void AOMDPlayerController::OnRep_WorldInventory() {
}

void AOMDPlayerController::OnRep_Coin() {
}

void AOMDPlayerController::OnLeaderboardReadCompleteNative(bool bSuccessful) {
}


void AOMDPlayerController::NextWave() {
}

void AOMDPlayerController::ModifyRemainingFreeRiftSubtractions(int32 toModifyWith) {
}

void AOMDPlayerController::LoseGame() {
}

void AOMDPlayerController::LoadoutItemRemoved(UOMDInventoryItem* Item) {
}

void AOMDPlayerController::LoadoutItemAdded(UOMDInventoryItem* Item) {
}

void AOMDPlayerController::LaunchMinionsLooped(float Seconds, float strength) {
}

void AOMDPlayerController::LaunchAllMinions(float strength) {
}

void AOMDPlayerController::KillAllMobs() {
}

bool AOMDPlayerController::IsInventoryVisible() const {
    return false;
}

void AOMDPlayerController::InventoryItemUpdated(UOMDInventoryItem* Item) {
}

void AOMDPlayerController::InventoryItemAdded(UOMDInventoryItem* Item) {
}

void AOMDPlayerController::InfiniteHealth() {
}

void AOMDPlayerController::IncrementRiftProtection() {
}

void AOMDPlayerController::IncrementRiftLightning(float Damage, float cooldown, float Radius) {
}

void AOMDPlayerController::HealAllTrapsOfType(FOMDSoftProtoPtr trapProto) {
}

void AOMDPlayerController::HealAllTraps() {
}

void AOMDPlayerController::GiveCoin(int32 amount) {
}

bool AOMDPlayerController::GetUseHDRGamma() {
    return false;
}

bool AOMDPlayerController::GetLoadoutSlotUnlocked(int32 Index) const {
    return false;
}

int32 AOMDPlayerController::GetLoadoutSize() const {
    return 0;
}

UOMDInventoryItem* AOMDPlayerController::GetLoadoutItemAtIndex(int32 Index) const {
    return NULL;
}

UOMDInventoryItem* AOMDPlayerController::GetInventoryItem(const FOMDSoftProtoPtr& Item) const {
    return NULL;
}

int32 AOMDPlayerController::GetIndexOfLoadoutItem(UOMDInventoryItem* inventoryItem) const {
    return 0;
}

UOMDInventoryItem* AOMDPlayerController::GetEquippedItem() const {
    return NULL;
}

int32 AOMDPlayerController::GetCoin() const {
    return 0;
}

void AOMDPlayerController::ForceGarbageCollection() {
}

void AOMDPlayerController::EnablePickups(bool IsEnabled) {
}

void AOMDPlayerController::Eject() {
}

void AOMDPlayerController::DecrementRiftProtection() {
}

void AOMDPlayerController::DecrementRiftLightning() {
}

void AOMDPlayerController::CompleteAchievement(FOMDSoftProtoPtr OMDAchievementProto) {
}

void AOMDPlayerController::ClientSetTriggerEffect(EOMDTriggerEffectTrigger Trigger, FOMDSoftProtoPtr OMDTriggerEffectProto) {
}

void AOMDPlayerController::ClientResetTriggerEffect(EOMDTriggerEffectTrigger Trigger) {
}

void AOMDPlayerController::Client_SetTriggerEffect_Implementation(EOMDTriggerEffectTrigger Trigger, FOMDSoftProtoPtr effect) {
}

void AOMDPlayerController::Client_ResetTriggerEffect_Implementation(EOMDTriggerEffectTrigger Trigger) {
}

void AOMDPlayerController::Client_ResetProjectile_Implementation(UOMDAbilitySystemComponent* abilitySystem, TSubclassOf<AOMDProjectile> projectile, AActor* projectileOwner, APawn* projectileInstigator, FVector Origin, FVector Velocity, float lifetime, int32 pierceCount, AActor* homingTarget, float HomingAccelerationMagnitude, bool useVisualSpawnRotation, FRotator visualSpawnRotation, bool constrainToPlane, FVector PlaneConstraintOrigin, FVector PlaneConstraintNormal, EPlaneConstraintAxisSetting PlaneConstraintAxisSetting, int32 replicatedExplosionID) {
}
bool AOMDPlayerController::Client_ResetProjectile_Validate(UOMDAbilitySystemComponent* abilitySystem, TSubclassOf<AOMDProjectile> projectile, AActor* projectileOwner, APawn* projectileInstigator, FVector Origin, FVector Velocity, float lifetime, int32 pierceCount, AActor* homingTarget, float HomingAccelerationMagnitude, bool useVisualSpawnRotation, FRotator visualSpawnRotation, bool constrainToPlane, FVector PlaneConstraintOrigin, FVector PlaneConstraintNormal, EPlaneConstraintAxisSetting PlaneConstraintAxisSetting, int32 replicatedExplosionID) {
    return true;
}

void AOMDPlayerController::Client_ReceiveRadialDamageTaken_Implementation(float Damage, const FRadialDamageEvent& DamageEvent, AActor* DamagedActor, AActor* DamageCauser) {
}

void AOMDPlayerController::Client_ReceivePointDamageTaken_Implementation(float Damage, const FPointDamageEvent& DamageEvent, AActor* DamagedActor, AActor* DamageCauser) {
}

void AOMDPlayerController::Client_ReceiveOMDRadialDamageTaken_Implementation(float Damage, const FOMDRadialDamageEvent& DamageEvent, AActor* DamagedActor, AActor* DamageCauser) {
}

void AOMDPlayerController::Client_ReceiveOMDPointDamageTaken_Implementation(float Damage, const FOMDPointDamageEvent& DamageEvent, AActor* DamagedActor, AActor* DamageCauser) {
}

void AOMDPlayerController::Client_ReceiveOMDDamageTaken_Implementation(float Damage, const FOMDDamageEvent& DamageEvent, AActor* DamagedActor, AActor* DamageCauser) {
}

void AOMDPlayerController::Client_EndGame_Implementation(bool didWin, uint8 skulls, int32 wavesCompleted, const FOMDStatsRegistry& playerStats, const FOMDGameStats& gameStats, int32 initialRiftPoints) {
}

void AOMDPlayerController::ClearLeaderboardRequest() {
}



void AOMDPlayerController::ApplyKeyBindingOptions() {
}

void AOMDPlayerController::ApplyGraphicsOptions() {
}

void AOMDPlayerController::ApplyGameplayOptions() {
}

void AOMDPlayerController::AddScore(int32 Score) {
}

void AOMDPlayerController::AddRiftPoints(int32 amountToAdd) {
}

FGuid AOMDPlayerController::AddOnHitAbility(FOMDSoftProtoPtr ability, UObject* Source) {
    return FGuid{};
}

FGuid AOMDPlayerController::AddOnDealDamageAbility(FOMDSoftProtoPtr ability, UObject* Source) {
    return FGuid{};
}

FGuid AOMDPlayerController::AddOnApplyStatusEffectAbilities(FOMDSoftProtoPtr ability, UObject* Source) {
    return FGuid{};
}

void AOMDPlayerController::AddLifetimeStats(const FString& Name, int32 amount) {
}

void AOMDPlayerController::AddCoin(int32 amount) {
}

void AOMDPlayerController::AddBaseStatusEffect(FOMDSoftProtoPtr statusEffectToApply) {
}

void AOMDPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOMDPlayerController, WorldInventory);
    DOREPLIFETIME(AOMDPlayerController, Coin);
}


