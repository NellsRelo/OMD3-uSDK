#pragma once
#include "CoreMinimal.h"
#include "GatherTargetsForwardArcActionDelegateDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGatherTargetsForwardArcActionDelegate, AActor*, AffectedActor);

