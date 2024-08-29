#pragma once
#include "CoreMinimal.h"
#include "ApplyStatusEffectActionDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FApplyStatusEffectActionDelegate, int32, ID);

