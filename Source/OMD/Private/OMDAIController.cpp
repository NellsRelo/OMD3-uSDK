#include "OMDAIController.h"
#include "Perception/AIPerceptionComponent.h"
#include "Navigation/CrowdFollowingComponent.h"

AOMDAIController::AOMDAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UCrowdFollowingComponent>(TEXT("PathFollowingComponent"))) {
    this->PerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPercpetion Component"));
    this->BlackboardEnemyPlayerKey = TEXT("EnemyActorObj");
    this->BlackboardIsAttackingKey = TEXT("isAttacking");
    this->BlackboardIsUsingAbilityKey = TEXT("IsUsingAbility");
    this->BlackboardCurrentAbilityIsRangedKey = TEXT("CurrentAbilityIsRanged");
    this->BlackboardIsSuspendedKey = TEXT("IsSuspended");
    this->BlackboardDestinationLoc = TEXT("DestinationLoc");
    this->BlackboardDestinationRadius = TEXT("DestinationRadius");
    this->BlackboardIsTargetingDoor = TEXT("IsTargetingDoor");
    this->BlackboardHasDoorSlot = TEXT("HasDoorSlot");
    this->BlackboardIsOffPath = TEXT("IsOffPath");
    this->BlackboardIsBackPathingKey = TEXT("IsBackPathing");
    this->BlackboardIsInitializedKey = TEXT("IsInitialized");
    this->BlackboardIsRiftLocInitializedKey = TEXT("IsRiftLocInitialized");
    this->BlackboardIsNodePathInitializedKey = TEXT("IsNodePathInitialized");
    this->BlackboardIsReversePathInitializedKey = TEXT("IsReversePathInitialized");
    this->BlackboardCurrentBestAbilityHasChangedKey = TEXT("CurrentBestAbilityHasChanged");
    this->BlackboardIsMovementPausedKey = TEXT("IsMovementPaused");
    this->BlackboardIsPathObstructedKey = TEXT("IsPathObstructed");
    this->BlackboardPathObstructionLocKey = TEXT("PathObstructionLoc");
    this->MyDoorSlot = -1;
    this->bIsInDoorSlot = false;
    this->bIsOffPath = false;
    this->bIsBackPathing = false;
    this->bIsStuck = false;
    this->bIsRunningDefaultBehavior = false;
}

void AOMDAIController::TeleportToLocation(FVector NewLocation) {
}

void AOMDAIController::SuspendAI() {
}

void AOMDAIController::StopUsingBestAbility(bool shouldCancel, bool stopAttacking, bool stopMontage) {
}

void AOMDAIController::StopBackPathing() {
}

EStartUsingBestAbilityReturns AOMDAIController::StartUsingBestAbility() {
    return EStartUsingBestAbilityReturns::TargetIsInvalid;
}

void AOMDAIController::StartBackPathing() {
}

void AOMDAIController::ShowDebugAILines(bool show) {
}

bool AOMDAIController::ShouldResetNode() {
    return false;
}

void AOMDAIController::SetTempBehavior(UBehaviorTree* newBehavior) {
}

void AOMDAIController::SetStartPoint(AOMDPathPoint* startPoint) {
}

void AOMDAIController::SetIsInDoorSlot(bool inDoorSlot) {
}

void AOMDAIController::SetHasRunnerMovement(bool isRunner) {
}

void AOMDAIController::SetHasAggro(bool isAggroed) {
}

void AOMDAIController::SetGroupsToIgnoreMask(const FNavAvoidanceMask& GroupsToIgnore) {
}

void AOMDAIController::SetDoorSlot(int32 newSlot) {
}

void AOMDAIController::SetDefaultBehavior() {
}

void AOMDAIController::SetAvoidanceGroupToIgnore(EAvoidanceGroups Group) {
}

void AOMDAIController::SetAvoidanceGroup(EAvoidanceGroups Group) {
}

void AOMDAIController::SetAIGroupID(int32 groupID) {
}

void AOMDAIController::ResumeMovement() {
}

void AOMDAIController::ResumeAI() {
}

void AOMDAIController::ResetTargetingType() {
}

void AOMDAIController::ResetBlackboard() {
}

void AOMDAIController::ResetAI() {
}

void AOMDAIController::RemoveFromAvailableAbilities(FGuid toRemove) {
}

void AOMDAIController::ReduceRepulsorSize(bool bReduce) {
}

void AOMDAIController::ReduceRepulsorAcceleration(bool bReduce) {
}

void AOMDAIController::PauseMovement(bool bAllowOrient) {
}

float AOMDAIController::PathCostToActor(AActor* targetActor, bool& bDidReach, bool bUseObstructions) {
    return 0.0f;
}

void AOMDAIController::OverrideTargetingType(FOMDSoftProtoPtr targetingToOverrideWith) {
}

void AOMDAIController::OnStuckTimer() {
}

void AOMDAIController::OnSenseActors(const TArray<AActor*>& UpdatedActors) {
}

void AOMDAIController::OnDropAggroTimer() {
}

void AOMDAIController::MarkAsOffPath() {
}

void AOMDAIController::LoadPathFromLevel() {
}

bool AOMDAIController::IsWisp() {
    return false;
}

bool AOMDAIController::IsOffPath() {
    return false;
}

bool AOMDAIController::IsInAggroRange(AActor* actorToEvaluate, float fudgeDistance) {
    return false;
}

bool AOMDAIController::IsInAbilityRange(AActor* actorToEvaluate, bool bUseCurrentBestAbility, float fudgeDistance) {
    return false;
}

bool AOMDAIController::IsCurrentlyObstructed(FVector& ObstructedPoint) {
    return false;
}

bool AOMDAIController::IsBackPathing() {
    return false;
}

bool AOMDAIController::IsAttackingTrap() {
    return false;
}

bool AOMDAIController::IsAtCurrentNode() {
    return false;
}

bool AOMDAIController::IsAISuspended() {
    return false;
}

void AOMDAIController::IgnoreFriendlyRepulsors(bool bIgnore) {
}

bool AOMDAIController::HasDoorSlot() {
    return false;
}

bool AOMDAIController::GetStopMontage() {
    return false;
}

bool AOMDAIController::GetPathLength(FVector startPoint, FVector endPoint, float& pathLength, bool& bIsPartial) {
    return false;
}

AOMDPathPoint* AOMDAIController::GetNextPathPoint() {
    return NULL;
}

bool AOMDAIController::GetNextNodeDir(FVector& Direction) {
    return false;
}

bool AOMDAIController::GetIsStuck() {
    return false;
}

int32 AOMDAIController::GetIsRanged() {
    return 0;
}

bool AOMDAIController::GetIsMovementPaused() {
    return false;
}

bool AOMDAIController::GetIsInDoorSlot() {
    return false;
}

bool AOMDAIController::GetIsBestAbilityBeingUsed() {
    return false;
}

bool AOMDAIController::GetHasRunnerMovement() {
    return false;
}

AActor* AOMDAIController::GetEnemyActor() {
    return NULL;
}

int32 AOMDAIController::GetDoorSlot() {
    return 0;
}

float AOMDAIController::GetCurrentResetDist() {
    return 0.0f;
}

float AOMDAIController::GetCurrentPathNodeRadius() {
    return 0.0f;
}

bool AOMDAIController::GetCurrentPathNodeLoc(FVector& vectorOut) {
    return false;
}

FVector AOMDAIController::GetCurrentDestinationLoc() {
    return FVector{};
}

FOMDAICharacterAbilityProto AOMDAIController::GetCurrentBestAbility() {
    return FOMDAICharacterAbilityProto{};
}

FVector AOMDAIController::GetClosestPathablePosition(FVector EndPosition) {
    return FVector{};
}

FOMDAICharacterAbilityProto AOMDAIController::GetBestInUseAbility() {
    return FOMDAICharacterAbilityProto{};
}

FVector AOMDAIController::GetAttackPointForActor(AActor* actorToEvaluate) {
    return FVector{};
}

AOMDAIPath* AOMDAIController::GetAIPath() {
    return NULL;
}

float AOMDAIController::GetAbilityRange(bool bAdjustForRadius, bool bUseEnterRange, bool bUseBestCurrentAbility) {
    return 0.0f;
}

void AOMDAIController::ForgetAllActors() {
}

bool AOMDAIController::FindBestNode() {
    return false;
}

bool AOMDAIController::EvaluateCurrentEnemy() {
    return false;
}

void AOMDAIController::DoTeamChange(EGenericTeams newTeam) {
}

void AOMDAIController::DisableSenses() {
}

void AOMDAIController::DisableRepulsor(bool bDisable) {
}

void AOMDAIController::ConfigureSenses() {
}

void AOMDAIController::CompleteInUseAbility(FGuid toRemove) {
}

void AOMDAIController::ClearEnemyActor(bool bAlsoClearFocus) {
}

bool AOMDAIController::CheckIfStuck(bool bSetTimer) {
    return false;
}

bool AOMDAIController::CanPathToWarScenarioDoor() {
    return false;
}

bool AOMDAIController::CanPathToRift(bool bIgnoreObstructions, bool bIgnoreDoors) {
    return false;
}

bool AOMDAIController::CanPathToLocation(FVector endPoint, float Range) {
    return false;
}

bool AOMDAIController::CanPathToFormationLocation(int32 nodeIndex, int32 formationIndex) {
    return false;
}

bool AOMDAIController::CanPathToCurrentNode() {
    return false;
}

bool AOMDAIController::CanPathToCurrentEnemy() {
    return false;
}

bool AOMDAIController::CanPathToActor(AActor* testActor) {
    return false;
}

ECantAttackReasons AOMDAIController::CanAttackCurrentEnemy() {
    return ECantAttackReasons::CanAttack;
}

bool AOMDAIController::BP_SetEnemyActor(AActor* newEnemy) {
    return false;
}

void AOMDAIController::AllowAggro(bool newAggro) {
}

bool AOMDAIController::AdvancePathNode() {
    return false;
}

void AOMDAIController::AddToAvailableAbilities(FGuid toAdd) {
}


