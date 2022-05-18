#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "OMDMapManagerPingRequestedBPCallbackDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOMDMapManagerPingRequestedBPCallback, const FUniqueNetIdRepl&, requesterId, AActor*, requestingActor, FGuid, requestedPing);

