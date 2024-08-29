#pragma once
#include "CoreMinimal.h"
#include "EUserPermissionsErrorTypes.h"
#include "OMDAsyncTaskCheckOnlinePermissionsFinishedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOMDAsyncTaskCheckOnlinePermissionsFinishedDelegate, bool, success, EUserPermissionsErrorTypes, primaryError, const TArray<EUserPermissionsErrorTypes>&, allErrors);

