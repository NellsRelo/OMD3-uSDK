#pragma once
#include "CoreMinimal.h"
#include "SpawnActorActionDelegateDelegate.generated.h"

class AOMDAbilityActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpawnActorActionDelegate, AOMDAbilityActor*, Actor);

