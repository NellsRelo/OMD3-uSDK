#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "FireHitScanActionDelegateDelegate.generated.h"

class AActor;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FFireHitScanActionDelegate, AActor*, HitActor, UPrimitiveComponent*, HitComponent, const FHitResult&, HitResult);

