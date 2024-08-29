#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/MovementComponent.h"
#include "OMDAction.h"
#include "OMDAction_SetPlanarMovement.generated.h"

class AOMDProjectile;
class UOMDAbility;
class UOMDAction_SetPlanarMovement;

UCLASS(Blueprintable)
class OMD_API UOMDAction_SetPlanarMovement : public UOMDAction {
    GENERATED_BODY()
public:
    UOMDAction_SetPlanarMovement();

    UFUNCTION(BlueprintCallable)
    static UOMDAction_SetPlanarMovement* SetPlanarMovement(UOMDAbility* ability, AOMDProjectile* projectile, bool contrainToPlane, FVector PlaneConstraintOrigin, FVector PlaneConstraintNormal, EPlaneConstraintAxisSetting PlaneConstraintAxisSetting);
    
};

