#pragma once
#include "CoreMinimal.h"
#include "SpawnActorAttachedActionDelegateDelegate.generated.h"

class AOMDAbilityActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpawnActorAttachedActionDelegate, AOMDAbilityActor*, Actor);

