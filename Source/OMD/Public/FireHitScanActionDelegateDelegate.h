#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "FireHitScanActionDelegateDelegate.generated.h"

class UPrimitiveComponent;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FFireHitScanActionDelegate, AActor*, HitActor, UPrimitiveComponent*, HitComponent, const FHitResult&, HitResult);

