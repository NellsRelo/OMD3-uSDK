#pragma once
#include "CoreMinimal.h"
#include "ApplyStatusEffectActionDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FApplyStatusEffectActionDelegate, int32, ID);

