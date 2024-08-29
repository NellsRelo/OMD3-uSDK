#pragma once
#include "CoreMinimal.h"
#include "PlaceTrapActionDelegateDelegate.generated.h"

class AOMDTrap;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlaceTrapActionDelegate, AOMDTrap*, Trap);

