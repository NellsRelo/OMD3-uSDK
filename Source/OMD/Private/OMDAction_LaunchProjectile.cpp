#include "OMDAction_LaunchProjectile.h"

#include "OMDAction_SetPlanarMovement.h"
#include "Templates/SubclassOf.h"

class UOMDAbility;
class AOMDProjectile;
class UPrimitiveComponent;
class AActor;
class UOMDAction_LaunchProjectile;

UOMDAction_LaunchProjectile* UOMDAction_LaunchProjectile::LaunchProjectile(UOMDAbility* ability, TSubclassOf<AOMDProjectile> NewProjectile, FVector Origin, FVector Direction, float Speed, float lifetime, int32 pierceCount, FVector Offset, FRotator Rotation, int32 weaponIndex, AActor* NewHomingTarget, float HomingAccelerationMagnitude, bool useVisualSpawnRotation, FRotator visualSpawnRotation, bool constrainToPlane, FVector PlaneConstraintOrigin, FVector PlaneConstraintNormal, EPlaneConstraintAxisSetting PlaneConstraintAxisSetting, bool autoCalculateDirectionForPlayer, bool replicateExplosion) {
    return NULL;
}

void UOMDAction_LaunchProjectile::HandleImpact(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const FHitResult& HitResult) {
}

void UOMDAction_LaunchProjectile::HandleExploded() {
}

void UOMDAction_LaunchProjectile::HandleDestroyed(AActor* DestroyedActor) {
}

UOMDAction_LaunchProjectile::UOMDAction_LaunchProjectile() {
    this->ProjectileClass = NULL;
    this->projectile = NULL;
    this->homingTarget = NULL;
}

