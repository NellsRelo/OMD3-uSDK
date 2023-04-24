#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIController -FallbackName=AIController
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PathFollowingAgentInterface -FallbackName=PathFollowingAgentInterface
#include "AIController.h"
#include "ENavMoveResult.h"
#include "NavPowerAIController.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable)
class NAVPOWER_API ANavPowerAIController : public AAIController, public IPathFollowingAgentInterface {
    GENERATED_BODY()
public:
    ANavPowerAIController();
    UFUNCTION(BlueprintCallable)
    void SetUses3DMovement(bool b3DMovement);
    
    UFUNCTION()
    bool SetRepulsorID(uint32 repulsorID);
    
    UFUNCTION(BlueprintCallable)
    bool SetRepulsorBulk(float newBulk);
    
    UFUNCTION()
    bool SetRepulsorBlockageFlags(uint32 repulsorFlags);
    
    UFUNCTION(BlueprintCallable)
    bool SetRepulsorAllowedPushDistance(float allowedDistance);
    
    UFUNCTION(BlueprintCallable)
    bool SetRepulsorAccelerationParams(float initialAccel, float outerAccel, float innerAccel);
    
    UFUNCTION(BlueprintCallable)
    void SetNoMover(bool bSetNoMover);
    
    UFUNCTION()
    void SetNavPowerObstructionFlags(uint32 newFlags);
    
    UFUNCTION(BlueprintCallable)
    void SetNavMoverFlockID(int32 flockID);
    
    UFUNCTION(BlueprintCallable)
    bool SetMaxSpeedFraction(float speedFraction);
    
    UFUNCTION(BlueprintCallable)
    bool SetIdleParms(float tetherDist, float returnHomeDist, float returnDelay, bool bIgnoreInitialOverlaps);
    
    UFUNCTION(BlueprintCallable)
    void PauseNavMover(bool DisableRepulsor, bool bAllowOrient);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void NavPowerMoveTo(UObject* WorldContextObject, FLatentActionInfo LatentInfo, AActor* GoalActor, FVector goalLocation, float desiredStopDistance, bool bStopAtGoal, bool bPushThroughCrowdAtGoal, float allowedToStopDistance, bool bOrientAtGoal, FVector orientAtGoalDirection, ENavMoveResult& moveResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUses3DMovement() const;
    
    UFUNCTION()
    uint32 GetRepulsorID();
    
    UFUNCTION(BlueprintCallable)
    float GetRepulsorBulk();
    
    UFUNCTION(BlueprintCallable)
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
    
    UFUNCTION(BlueprintCallable)
    bool AdjustRepulsor(float innerScalar, float outerScalar);
    
    
    // Fix for true pure virtual functions not being implemented
};

