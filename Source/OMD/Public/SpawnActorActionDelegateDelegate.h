#pragma once
#include "CoreMinimal.h"
#include "SpawnActorActionDelegateDelegate.generated.h"

class AOMDAbilityActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpawnActorActionDelegate, AOMDAbilityActor*, Actor);

