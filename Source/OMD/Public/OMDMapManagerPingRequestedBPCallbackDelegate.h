#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "OMDMapManagerPingRequestedBPCallbackDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOMDMapManagerPingRequestedBPCallback, const FUniqueNetIdRepl&, requesterId, AActor*, requestingActor, FGuid, requestedPing);

