#pragma once
#include "CoreMinimal.h"
#include "SpawnEmitterAtLocationActionDelegateDelegate.generated.h"

class UParticleSystemComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpawnEmitterAtLocationActionDelegate, UParticleSystemComponent*, Emitter);

