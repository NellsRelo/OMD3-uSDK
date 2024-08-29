#pragma once
#include "CoreMinimal.h"
#include "SpawnSoundAttachedActionDelegateDelegate.generated.h"

class UAudioComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpawnSoundAttachedActionDelegate, UAudioComponent*, AudioComponent);

