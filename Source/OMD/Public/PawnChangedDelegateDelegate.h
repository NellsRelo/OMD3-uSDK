#pragma once
#include "CoreMinimal.h"
#include "PawnChangedDelegateDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPawnChangedDelegate, APawn*, newPawn);

