#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EPlaneConstraintAxisSetting -FallbackName=EPlaneConstraintAxisSetting
#include "OMDAction.h"
#include "GameFramework/MovementComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "OMDAction_SetPlanarMovement.generated.h"

class UOMDAction_SetPlanarMovement;
class UOMDAbility;
class AOMDProjectile;

UCLASS()
class OMD_API UOMDAction_SetPlanarMovement : public UOMDAction {
    GENERATED_BODY()
public:
    UOMDAction_SetPlanarMovement();
    UFUNCTION(BlueprintCallable)
    static UOMDAction_SetPlanarMovement* SetPlanarMovement(UOMDAbility* ability, AOMDProjectile* projectile, bool contrainToPlane, FVector PlaneConstraintOrigin, FVector PlaneConstraintNormal, EPlaneConstraintAxisSetting PlaneConstraintAxisSetting);
    
};

