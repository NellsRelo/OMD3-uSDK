#pragma once
#include "CoreMinimal.h"
#include "HasVisualStatusEffectActionDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHasVisualStatusEffectActionDelegate, int32, ID);

