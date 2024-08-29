#include "OMDGameState.h"
#include "Net/UnrealNetwork.h"

AOMDGameState::AOMDGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OnslaughtCoordinator = NULL;
    this->bDidWin = false;
    this->EnemiesSpawned = 0;
    this->RiftPoints = 0;
    this->initialRiftPoints = 0;
    this->RiftProtectedCount = 0;
    this->RiftLightningCount = 0;
    this->RemainingFreeRiftSubtractions = 0;
    this->bIsGoBreakActive = true;
    this->bIsTimedBreakActive = false;
    this->OnslaughtTimer = 0.00f;
    this->CurrentWave = -1;
    this->MaxWave = -1;
    this->EndlessIteration = -1;
    this->EndlessMaxWavePerIteration = 0;
    this->FirstWaveStartTime = -1.00f;
    this->CompletionTime = -1.00f;
    this->ScorePerRiftPoint = 100;
    this->ScorePerRiftPointRandomMode = 1000;
    this->ScorePerSkull = 500;
    this->ScorePerSecondOverPar = 1000;
    this->MinimumKillstreak = 4;
    this->MinimumCombo = 3;
    this->PlayerRespawnDelay = 4.00f;
    this->KillStreakCount = 0;
    this->KillStreakStartTime = 0.00f;
    this->TotalScore = 0;
}


void AOMDGameState::SetTimedBreakActive(bool IsActive) {
}

void AOMDGameState::SetRemainingFreeRiftSubtractions(int32 newValue) {
}

void AOMDGameState::SetInitialRiftPoints(int32 riftPointsInitial) {
}

void AOMDGameState::SetGoBreakReady(AOMDPlayerController* Player) {
}

void AOMDGameState::SetGoBreakActive(bool IsActive) {
}


void AOMDGameState::RecordSkullsPickedUp(int32 count) {
}

void AOMDGameState::OnRep_SelectedBuff() {
}

void AOMDGameState::OnRep_RiftPoints(int32 previousRiftPoints) {
}

void AOMDGameState::OnRep_IsTimedBreakActive() {
}

void AOMDGameState::OnRep_IsGoBreakActive() {
}

void AOMDGameState::OnRep_CurrentWave() {
}

void AOMDGameState::OnLoadingScreenRemoved() {
}

void AOMDGameState::OnLoadingScreenAdded() {
}

void AOMDGameState::OnKillstreakEnded() {
}

void AOMDGameState::NetMulticast_TryEndGame_Implementation(bool didWin, uint8 skulls, FOMDGameStats stats) {
}

void AOMDGameState::NetMulticast_StreamConnectSettingChanged_Implementation(bool streamConnectIsEnabled, FUniqueNetIdRepl eventInstigator) {
}

void AOMDGameState::NetMulticast_NotifyBossSpawned_Implementation(FOMDSoftProtoPtr bossProto) {
}

void AOMDGameState::NetMulticast_HandleNewCombo_Implementation(int32 Points, FUniqueNetIdRepl eventInstigator) {
}

void AOMDGameState::NetMulticast_GameStarting_Implementation(bool bFailedTrapCheck) {
}

void AOMDGameState::ModifyInitialRiftPoints(int32 riftPointsInitial, bool isTemporary) {
}


bool AOMDGameState::IncrementRiftProtection() {
    return false;
}

bool AOMDGameState::IncrementRiftLightning(FUniqueNetIdRepl uniquePlayerID, float Damage, float cooldown, float Radius) {
    return false;
}


int32 AOMDGameState::GetTotalScore() const {
    return 0;
}

int32 AOMDGameState::GetRiftPoints() {
    return 0;
}

bool AOMDGameState::GetRiftIsProtected() {
    return false;
}

bool AOMDGameState::GetRiftHasLightning() {
    return false;
}

int32 AOMDGameState::GetRemainingFreeRiftSubtractions() {
    return 0;
}

float AOMDGameState::GetParTimerValue() {
    return 0.0f;
}

float AOMDGameState::GetKillstreakPercentRemaining() {
    return 0.0f;
}

int32 AOMDGameState::GetKillStreakCountMin() {
    return 0;
}

int32 AOMDGameState::GetKillStreakCount() {
    return 0;
}

bool AOMDGameState::GetIsWaitingOnPlayerToJoinBeforeFirstWave() {
    return false;
}

bool AOMDGameState::GetIsLocalPlayerGoBreakReady() {
    return false;
}

bool AOMDGameState::GetIsGameEnded() {
    return false;
}

int32 AOMDGameState::GetInitialRiftPoints() {
    return 0;
}

int32 AOMDGameState::GetCoinEarned() {
    return 0;
}


bool AOMDGameState::DecrementRiftProtection() {
    return false;
}

bool AOMDGameState::DecrementRiftLightning(FUniqueNetIdRepl uniquePlayerID) {
    return false;
}

void AOMDGameState::ClearEndGameTimers() {
}

void AOMDGameState::AddScore(int32 Score, EOMDScoreType Type) {
}

void AOMDGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOMDGameState, bDidWin);
    DOREPLIFETIME(AOMDGameState, EnemiesSpawned);
    DOREPLIFETIME(AOMDGameState, RiftPoints);
    DOREPLIFETIME(AOMDGameState, initialRiftPoints);
    DOREPLIFETIME(AOMDGameState, RiftProtectedCount);
    DOREPLIFETIME(AOMDGameState, RiftLightningCount);
    DOREPLIFETIME(AOMDGameState, RemainingFreeRiftSubtractions);
    DOREPLIFETIME(AOMDGameState, bIsGoBreakActive);
    DOREPLIFETIME(AOMDGameState, bIsTimedBreakActive);
    DOREPLIFETIME(AOMDGameState, OnslaughtTimer);
    DOREPLIFETIME(AOMDGameState, CurrentWave);
    DOREPLIFETIME(AOMDGameState, MaxWave);
    DOREPLIFETIME(AOMDGameState, EndlessIteration);
    DOREPLIFETIME(AOMDGameState, EndlessMaxWavePerIteration);
    DOREPLIFETIME(AOMDGameState, FirstWaveStartTime);
    DOREPLIFETIME(AOMDGameState, CompletionTime);
    DOREPLIFETIME(AOMDGameState, SelectedBuff);
    DOREPLIFETIME(AOMDGameState, KillStreakCount);
    DOREPLIFETIME(AOMDGameState, KillStreakStartTime);
    DOREPLIFETIME(AOMDGameState, TotalScore);
}


