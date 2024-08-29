#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AI/Navigation/NavigationAvoidanceTypes.h"
#include "NavPowerAIController.h"
#include "EAvoidanceGroups.h"
#include "ECantAttackReasons.h"
#include "EGenericTeams.h"
#include "EStartUsingBestAbilityReturns.h"
#include "OMDAICharacterAbilityProto.h"
#include "OMDSoftProtoPtr.h"
#include "OMDAIController.generated.h"

class AActor;
class AOMDAIPath;
class AOMDPathPoint;
class UBehaviorTree;

UCLASS(Blueprintable)
class OMD_API AOMDAIController : public ANavPowerAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardEnemyPlayerKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardIsAttackingKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardIsUsingAbilityKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardCurrentAbilityIsRangedKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardIsSuspendedKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardDestinationLoc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardDestinationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardIsTargetingDoor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardHasDoorSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardIsOffPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardIsBackPathingKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardIsInitializedKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardIsRiftLocInitializedKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardIsNodePathInitializedKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardIsReversePathInitializedKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardCurrentBestAbilityHasChangedKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardIsMovementPausedKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardIsPathObstructedKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardPathObstructionLocKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MyDoorSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsInDoorSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsOffPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsBackPathing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsStuck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsRunningDefaultBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDAICharacterAbilityProto BestAbilityInUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDAICharacterAbilityProto CurrentBestAbility;
    
public:
    AOMDAIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TeleportToLocation(FVector NewLocation);
    
    UFUNCTION(BlueprintCallable)
    void SuspendAI();
    
    UFUNCTION(BlueprintCallable)
    void StopUsingBestAbility(bool shouldCancel, bool stopAttacking, bool stopMontage);
    
    UFUNCTION(BlueprintCallable)
    void StopBackPathing();
    
    UFUNCTION(BlueprintCallable)
    EStartUsingBestAbilityReturns StartUsingBestAbility();
    
    UFUNCTION(BlueprintCallable)
    void StartBackPathing();
    
    UFUNCTION(BlueprintCallable)
    void ShowDebugAILines(bool show);
    
    UFUNCTION(BlueprintCallable)
    bool ShouldResetNode();
    
    UFUNCTION(BlueprintCallable)
    void SetTempBehavior(UBehaviorTree* newBehavior);
    
    UFUNCTION(BlueprintCallable)
    void SetStartPoint(AOMDPathPoint* startPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInDoorSlot(bool inDoorSlot);
    
    UFUNCTION(BlueprintCallable)
    void SetHasRunnerMovement(bool isRunner);
    
    UFUNCTION(BlueprintCallable)
    void SetHasAggro(bool isAggroed);
    
    UFUNCTION(BlueprintCallable)
    void SetGroupsToIgnoreMask(const FNavAvoidanceMask& GroupsToIgnore);
    
    UFUNCTION(BlueprintCallable)
    void SetDoorSlot(int32 newSlot);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultBehavior();
    
    UFUNCTION(BlueprintCallable)
    void SetAvoidanceGroupToIgnore(EAvoidanceGroups Group);
    
    UFUNCTION(BlueprintCallable)
    void SetAvoidanceGroup(EAvoidanceGroups Group);
    
    UFUNCTION(BlueprintCallable)
    void SetAIGroupID(int32 groupID);
    
    UFUNCTION(BlueprintCallable)
    void ResumeMovement();
    
    UFUNCTION(BlueprintCallable)
    void ResumeAI();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetTargetingType();
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetBlackboard();
    
    UFUNCTION(BlueprintCallable)
    void ResetAI();
    
    UFUNCTION(BlueprintCallable)
    void RemoveFromAvailableAbilities(FGuid toRemove);
    
    UFUNCTION(BlueprintCallable)
    void ReduceRepulsorSize(bool bReduce);
    
    UFUNCTION(BlueprintCallable)
    void ReduceRepulsorAcceleration(bool bReduce);
    
    UFUNCTION(BlueprintCallable)
    void PauseMovement(bool bAllowOrient);
    
    UFUNCTION(BlueprintCallable)
    float PathCostToActor(AActor* targetActor, bool& bDidReach, bool bUseObstructions);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OverrideTargetingType(FOMDSoftProtoPtr targetingToOverrideWith);
    
    UFUNCTION(BlueprintCallable)
    void OnStuckTimer();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnSenseActors(const TArray<AActor*>& UpdatedActors);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDropAggroTimer();
    
public:
    UFUNCTION(BlueprintCallable)
    void MarkAsOffPath();
    
    UFUNCTION(BlueprintCallable)
    void LoadPathFromLevel();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool IsWisp();
    
    UFUNCTION(BlueprintCallable)
    bool IsOffPath();
    
    UFUNCTION(BlueprintCallable)
    bool IsInAggroRange(AActor* actorToEvaluate, float fudgeDistance);
    
    UFUNCTION(BlueprintCallable)
    bool IsInAbilityRange(AActor* actorToEvaluate, bool bUseCurrentBestAbility, float fudgeDistance);
    
    UFUNCTION(BlueprintCallable)
    bool IsCurrentlyObstructed(FVector& ObstructedPoint);
    
    UFUNCTION(BlueprintCallable)
    bool IsBackPathing();
    
    UFUNCTION(BlueprintCallable)
    bool IsAttackingTrap();
    
    UFUNCTION(BlueprintCallable)
    bool IsAtCurrentNode();
    
    UFUNCTION(BlueprintCallable)
    bool IsAISuspended();
    
    UFUNCTION(BlueprintCallable)
    void IgnoreFriendlyRepulsors(bool bIgnore);
    
    UFUNCTION(BlueprintCallable)
    bool HasDoorSlot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetStopMontage();
    
    UFUNCTION(BlueprintCallable)
    bool GetPathLength(FVector startPoint, FVector endPoint, float& pathLength, bool& bIsPartial);
    
    UFUNCTION(BlueprintCallable)
    AOMDPathPoint* GetNextPathPoint();
    
    UFUNCTION(BlueprintCallable)
    bool GetNextNodeDir(FVector& Direction);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsStuck();
    
    UFUNCTION(BlueprintCallable)
    int32 GetIsRanged();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsMovementPaused();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsInDoorSlot();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsBestAbilityBeingUsed();
    
    UFUNCTION(BlueprintCallable)
    bool GetHasRunnerMovement();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetEnemyActor();
    
    UFUNCTION(BlueprintCallable)
    int32 GetDoorSlot();
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentResetDist();
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentPathNodeRadius();
    
    UFUNCTION(BlueprintCallable)
    bool GetCurrentPathNodeLoc(FVector& vectorOut);
    
    UFUNCTION(BlueprintCallable)
    FVector GetCurrentDestinationLoc();
    
    UFUNCTION(BlueprintCallable)
    FOMDAICharacterAbilityProto GetCurrentBestAbility();
    
    UFUNCTION(BlueprintCallable)
    FVector GetClosestPathablePosition(FVector EndPosition);
    
    UFUNCTION(BlueprintCallable)
    FOMDAICharacterAbilityProto GetBestInUseAbility();
    
    UFUNCTION(BlueprintCallable)
    FVector GetAttackPointForActor(AActor* actorToEvaluate);
    
    UFUNCTION(BlueprintCallable)
    AOMDAIPath* GetAIPath();
    
    UFUNCTION(BlueprintCallable)
    float GetAbilityRange(bool bAdjustForRadius, bool bUseEnterRange, bool bUseBestCurrentAbility);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ForgetAllActors();
    
    UFUNCTION(BlueprintCallable)
    bool FindBestNode();
    
    UFUNCTION(BlueprintCallable)
    bool EvaluateCurrentEnemy();
    
    UFUNCTION(BlueprintCallable)
    void DoTeamChange(EGenericTeams newTeam);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DisableSenses();
    
    UFUNCTION(BlueprintCallable)
    void DisableRepulsor(bool bDisable);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ConfigureSenses();
    
    UFUNCTION(BlueprintCallable)
    void CompleteInUseAbility(FGuid toRemove);
    
    UFUNCTION(BlueprintCallable)
    void ClearEnemyActor(bool bAlsoClearFocus);
    
    UFUNCTION(BlueprintCallable)
    bool CheckIfStuck(bool bSetTimer);
    
    UFUNCTION(BlueprintCallable)
    bool CanPathToWarScenarioDoor();
    
    UFUNCTION(BlueprintCallable)
    bool CanPathToRift(bool bIgnoreObstructions, bool bIgnoreDoors);
    
    UFUNCTION(BlueprintCallable)
    bool CanPathToLocation(FVector endPoint, float Range);
    
    UFUNCTION(BlueprintCallable)
    bool CanPathToFormationLocation(int32 nodeIndex, int32 formationIndex);
    
    UFUNCTION(BlueprintCallable)
    bool CanPathToCurrentNode();
    
    UFUNCTION(BlueprintCallable)
    bool CanPathToCurrentEnemy();
    
    UFUNCTION(BlueprintCallable)
    bool CanPathToActor(AActor* testActor);
    
    UFUNCTION(BlueprintCallable)
    ECantAttackReasons CanAttackCurrentEnemy();
    
    UFUNCTION(BlueprintCallable)
    bool BP_SetEnemyActor(AActor* newEnemy);
    
    UFUNCTION(BlueprintCallable)
    void AllowAggro(bool newAggro);
    
    UFUNCTION(BlueprintCallable)
    bool AdvancePathNode();
    
    UFUNCTION(BlueprintCallable)
    void AddToAvailableAbilities(FGuid toAdd);
    
};

