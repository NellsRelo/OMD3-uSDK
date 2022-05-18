#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OMDAction.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "LaunchProjectileActionDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EPlaneConstraintAxisSetting -FallbackName=EPlaneConstraintAxisSetting
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "OMDAction_LaunchProjectile.generated.h"

class UOMDAction_LaunchProjectile;
class AOMDProjectile;
class UPrimitiveComponent;
class AActor;
class UOMDAbility;

UCLASS()
class OMD_API UOMDAction_LaunchProjectile : public UOMDAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FLaunchProjectileActionDelegate OnLaunch;
    
    UPROPERTY(BlueprintAssignable)
    FLaunchProjectileActionDelegate OnImpact;
    
    UPROPERTY(BlueprintAssignable)
    FLaunchProjectileActionDelegate OnExploded;
    
private:
    UPROPERTY()
    TSubclassOf<AOMDProjectile> ProjectileClass;
    
    UPROPERTY()
    AOMDProjectile* projectile;
    
    UPROPERTY()
    AActor* homingTarget;
    
public:
    UOMDAction_LaunchProjectile();
    UFUNCTION(BlueprintCallable)
    static UOMDAction_LaunchProjectile* LaunchProjectile(UOMDAbility* ability, TSubclassOf<AOMDProjectile> NewProjectile, FVector Origin, FVector Direction, float Speed, float lifetime, int32 pierceCount, FVector Offset, FRotator Rotation, int32 weaponIndex, AActor* NewHomingTarget, float HomingAccelerationMagnitude, bool useVisualSpawnRotation, FRotator visualSpawnRotation, bool constrainToPlane, FVector PlaneConstraintOrigin, FVector PlaneConstraintNormal, EPlaneConstraintAxisSetting PlaneConstraintAxisSetting, bool autoCalculateDirectionForPlayer, bool replicateExplosion);
    
private:
    UFUNCTION()
    void HandleImpact(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const FHitResult& HitResult);
    
    UFUNCTION()
    void HandleExploded();
    
    UFUNCTION()
    void HandleDestroyed(AActor* DestroyedActor);
    
};

