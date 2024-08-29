#include "OMDOnslaughtCoordinator.h"

AOMDOnslaughtCoordinator::AOMDOnslaughtCoordinator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxAICharacters_PS4_XBOXONE = 140;
    this->MaxAICharacters_Coop_PS4_XBOXONE = 90;
    this->maxAICharacters = 10000;
    this->DefaultWaveTimer = 10.00f;
    this->DefaultGroupTimer = 6.00f;
    this->DefaultEntityTimer = 1.00f;
    this->DefaultEntitySideSpacing = 250.00f;
    this->DefaultPostGoBreakTimer = 3.00f;
    this->DefaultStartingCoin = 2000;
    this->RiftPoints = 20;
    this->WispClass = NULL;
    this->OptimizedWispClass = NULL;
    this->FlyerWispClass = NULL;
    this->OptimizedFlyerWispClass = NULL;
    this->HeavyWispClass = NULL;
    this->OptimizedHeavyWispClass = NULL;
    this->DelayBetweenWisps = 3.00f;
}

bool AOMDOnslaughtCoordinator::SpawnEntityFromEntity(AOMDAICharacter* fromEntity, FOMDSoftProtoPtr OMDAICharacterProto, int32 numToSpawn, TArray<APawn*>& outSpawned) {
    return false;
}

bool AOMDOnslaughtCoordinator::SpawnEntityForEntity(AOMDAICharacter* ControllingCharacter, FVector positionToSpawn, FRotator rotationToSpawn, FOMDSoftProtoPtr AICharacterProtoToSpawn, int32 numToSpawn, bool bMarkAsResurrected, TArray<APawn*>& outSpawned) {
    return false;
}

void AOMDOnslaughtCoordinator::SetFirstWaveCoin(int32 firstWaveCoin) {
}

void AOMDOnslaughtCoordinator::SetAllAICharactersClass(FName Name) {
}

void AOMDOnslaughtCoordinator::SetAllAICharactersAmount(int32 amountPerSpawn) {
}

void AOMDOnslaughtCoordinator::ResetOnslaught() {
}



void AOMDOnslaughtCoordinator::PawnHasDied(APawn* deadPawn) {
}

void AOMDOnslaughtCoordinator::OnWispSpawnTimer() {
}

void AOMDOnslaughtCoordinator::OnslaughtWaveBreak(float waveBreakTimer, EOnslaughtDifficulty Difficulty) {
}

void AOMDOnslaughtCoordinator::OnslaughtStartGroup(float waitUntilPreviousGroupDeadPercent) {
}

void AOMDOnslaughtCoordinator::OnslaughtSpawnEntitiesFormation(TArray<FOnslaughtFormationRow> spawnEntityRows, EOnslaughtDifficulty Difficulty) {
}

void AOMDOnslaughtCoordinator::OnslaughtSpawnEntities(FOMDSoftProtoPtr OMDAICharacterProto, int32 count, bool SpawnWithShield, int32 EndlessAddCount, float EndlessPromotePercent, EOnslaughtDifficulty Difficulty) {
}

void AOMDOnslaughtCoordinator::OnslaughtGoBreak(EOnslaughtDifficulty Difficulty) {
}

void AOMDOnslaughtCoordinator::OnslaughtGiveCoin(int32 amount, EOnslaughtDifficulty Difficulty) {
}

void AOMDOnslaughtCoordinator::OnslaughtEnd() {
}

void AOMDOnslaughtCoordinator::OnslaughtDelay(float Delay, EOnslaughtDifficulty Difficulty) {
}

void AOMDOnslaughtCoordinator::OnslaughtAction(const FString& ActionName, EOnslaughtDifficulty Difficulty) {
}


void AOMDOnslaughtCoordinator::OnRiftEntered(AActor* Actor, FVector RiftLocation) {
}

int32 AOMDOnslaughtCoordinator::GetNumPawnsWaitingForSpawn() {
    return 0;
}

int32 AOMDOnslaughtCoordinator::GetNumPawnsApprovedForSpawn() {
    return 0;
}

int32 AOMDOnslaughtCoordinator::GetNumPawnsAlive() {
    return 0;
}

int32 AOMDOnslaughtCoordinator::GetMaxAICharacters() {
    return 0;
}

int32 AOMDOnslaughtCoordinator::GetFirstWaveCoin() {
    return 0;
}

TSet<FOMDSoftProtoPtr> AOMDOnslaughtCoordinator::GetEnemyClasses() {
    return TSet<FOMDSoftProtoPtr>();
}

int32 AOMDOnslaughtCoordinator::GetEndlessIteration() {
    return 0;
}



