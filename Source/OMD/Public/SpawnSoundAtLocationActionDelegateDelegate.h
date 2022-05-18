#pragma once
#include "CoreMinimal.h"
#include "SpawnSoundAtLocationActionDelegateDelegate.generated.h"

class UAudioComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpawnSoundAtLocationActionDelegate, UAudioComponent*, AudioComponent);

