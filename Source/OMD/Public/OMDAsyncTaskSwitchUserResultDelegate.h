#pragma once
#include "CoreMinimal.h"
#include "OMDAsyncTaskSwitchUserResultDelegate.generated.h"

class APlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOMDAsyncTaskSwitchUserResult, APlayerController*, PlayerController);

