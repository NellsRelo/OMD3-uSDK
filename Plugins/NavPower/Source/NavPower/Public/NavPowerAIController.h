#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "AI/Navigation/PathFollowingAgentInterface.h"
#include "Engine/LatentActionManager.h"
#include "ENavMoveResult.h"
#include "NavPowerAIController.generated.h"

class AActor;
class UObject;

UCLASS()
class NAVPOWER_API ANavPowerAIController : public AAIController, public IPathFollowingAgentInterface {
    GENERATED_BODY()
public:
    ANavPowerAIController();
    UFUNCTION()
    void SetUses3DMovement(bool b3DMovement);
    
    UFUNCTION()
    bool SetRepulsorID(uint32 repulsorID);
    
    UFUNCTION()
    bool SetRepulsorBulk(float newBulk);
    
    UFUNCTION()
    bool SetRepulsorBlockageFlags(uint32 repulsorFlags);
    
    UFUNCTION()
    bool SetRepulsorAllowedPushDistance(float allowedDistance);
    
    UFUNCTION()
    bool SetRepulsorAccelerationParams(float initialAccel, float outerAccel, float innerAccel);
    
    UFUNCTION()
    void SetNoMover(bool bSetNoMover);
    
    UFUNCTION()
    void SetNavPowerObstructionFlags(uint32 newFlags);
    
    UFUNCTION()
    void SetNavMoverFlockID(int32 flockID);
    
    UFUNCTION()
    bool SetMaxSpeedFraction(float speedFraction);
    
    UFUNCTION()
    bool SetIdleParms(float tetherDist, float returnHomeDist, float returnDelay, bool bIgnoreInitialOverlaps);
    
    UFUNCTION(BlueprintCallable)
    void PauseNavMover(bool DisableRepulsor, bool bAllowOrient);
    
    UFUNCTION(BlueprintCallable)
    void NavPowerMoveTo(UObject* WorldContextObject, FLatentActionInfo LatentInfo, AActor* GoalActor, FVector goalLocation, float desiredStopDistance, bool bStopAtGoal, bool bPushThroughCrowdAtGoal, float allowedToStopDistance, bool bOrientAtGoal, FVector orientAtGoalDirection, ENavMoveResult& moveResult);
    
    UFUNCTION(BlueprintPure)
    bool GetUses3DMovement() const;
    
    UFUNCTION()
    uint32 GetRepulsorID();
    
    UFUNCTION(BlueprintCallable)
    float GetRepulsorBulk();
    
    UFUNCTION()
    bool GetNoMover() const;
    
    UFUNCTION()
    uint32 GetNavPowerObstructionFlags() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetMoverVelocity();
    
    UFUNCTION(BlueprintCallable)
    float GetMoverSpeed();
    
    UFUNCTION(BlueprintCallable)
    float GetMoverRadius(bool bIncludeInnerCushion, bool bIncludeOuterCushion);
    
    UFUNCTION(BlueprintCallable)
    FVector GetMoverLoc();
    
    UFUNCTION()
    bool AdjustRepulsor(float innerScalar, float outerScalar);
    
    
    // Fix for true pure virtual functions not being implemented
};

