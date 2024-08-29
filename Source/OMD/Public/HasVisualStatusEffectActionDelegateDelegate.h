#pragma once
#include "CoreMinimal.h"
#include "HasVisualStatusEffectActionDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHasVisualStatusEffectActionDelegate, bool, HasStatusEffect);

