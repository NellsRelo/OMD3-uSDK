#pragma once
#include "CoreMinimal.h"
#include "SpawnEmitterAttachedActionDelegateDelegate.generated.h"

class UParticleSystemComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpawnEmitterAttachedActionDelegate, UParticleSystemComponent*, Emitter);

