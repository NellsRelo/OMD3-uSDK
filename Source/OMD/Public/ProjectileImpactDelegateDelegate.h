#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ProjectileImpactDelegateDelegate.generated.h"

class AActor;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FProjectileImpactDelegate, UPrimitiveComponent*, HitComponent, AActor*, OtherActor, UPrimitiveComponent*, OtherComponent, const FHitResult&, HitResult);

