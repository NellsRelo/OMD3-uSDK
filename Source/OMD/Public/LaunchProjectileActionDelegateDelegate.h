#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "LaunchProjectileActionDelegateDelegate.generated.h"

class AOMDProjectile;
class AActor;
class UPrimitiveComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FLaunchProjectileActionDelegate, AOMDProjectile*, projectile, UPrimitiveComponent*, HitComponent, AActor*, OtherActor, UPrimitiveComponent*, OtherComponent, const FHitResult&, HitResult);

