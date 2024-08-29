#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "LaunchProjectileActionDelegateDelegate.generated.h"

class AActor;
class AOMDProjectile;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FLaunchProjectileActionDelegate, AOMDProjectile*, projectile, UPrimitiveComponent*, HitComponent, AActor*, OtherActor, UPrimitiveComponent*, OtherComponent, const FHitResult&, HitResult);

