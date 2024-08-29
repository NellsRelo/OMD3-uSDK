#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/MovementComponent.h"
#include "Engine/EngineTypes.h"
#include "LaunchProjectileActionDelegateDelegate.h"
#include "OMDAction.h"
#include "Templates/SubclassOf.h"
#include "OMDAction_LaunchProjectile.generated.h"

class AActor;
class AOMDProjectile;
class UOMDAbility;
class UOMDAction_LaunchProjectile;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class OMD_API UOMDAction_LaunchProjectile : public UOMDAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLaunchProjectileActionDelegate OnLaunch;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLaunchProjectileActionDelegate OnImpact;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLaunchProjectileActionDelegate OnExploded;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AOMDProjectile> ProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AOMDProjectile* projectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* homingTarget;
    
public:
    UOMDAction_LaunchProjectile();

    UFUNCTION(BlueprintCallable)
    static UOMDAction_LaunchProjectile* LaunchProjectile(UOMDAbility* ability, TSubclassOf<AOMDProjectile> NewProjectile, FVector Origin, FVector Direction, float Speed, float lifetime, int32 pierceCount, FVector Offset, FRotator Rotation, int32 weaponIndex, AActor* NewHomingTarget, float HomingAccelerationMagnitude, bool useVisualSpawnRotation, FRotator visualSpawnRotation, bool constrainToPlane, FVector PlaneConstraintOrigin, FVector PlaneConstraintNormal, EPlaneConstraintAxisSetting PlaneConstraintAxisSetting, bool autoCalculateDirectionForPlayer, bool replicateExplosion);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleImpact(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable)
    void HandleExploded();
    
    UFUNCTION(BlueprintCallable)
    void HandleDestroyed(AActor* DestroyedActor);
    
};

