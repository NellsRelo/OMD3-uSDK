#pragma once
#include "CoreMinimal.h"
#include "GatherTargetsRadialActionDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGatherTargetsRadialActionDelegate, AActor*, AffectedActor);

