#pragma once
#include "CoreMinimal.h"
#include "RemoveStatusEffectActionDelegateDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRemoveStatusEffectActionDelegate, AActor*, Target);

