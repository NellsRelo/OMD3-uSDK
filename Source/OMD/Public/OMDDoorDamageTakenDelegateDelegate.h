#pragma once
#include "CoreMinimal.h"
#include "OMDDoorDamageTakenDelegateDelegate.generated.h"

class AActor;
class AOMDDoor;
class UOMDDamageType;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOMDDoorDamageTakenDelegate, AOMDDoor*, Door, float, Damage, const UOMDDamageType*, Type, AActor*, Causer);

