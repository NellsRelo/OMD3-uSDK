#pragma once
#include "CoreMinimal.h"
#include "OMDAsyncTaskSwitchUserResultDelegate.generated.h"

class APlayerController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOMDAsyncTaskSwitchUserResult, APlayerController*, PlayerController);

