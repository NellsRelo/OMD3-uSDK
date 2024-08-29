#pragma once
#include "CoreMinimal.h"
#include "ApplyRadialDamageActionDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FApplyRadialDamageActionDelegate, float, DamageAmount, AActor*, AffectedActor);

