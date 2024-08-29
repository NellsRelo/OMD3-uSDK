#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "OMDMapManagerPingRequestedCallbackDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOMDMapManagerPingRequestedCallback, const FUniqueNetIdRepl&, requesterId, AActor*, requestingActor, FGuid, requestedPing);

