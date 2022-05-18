#pragma once
#include "CoreMinimal.h"
#include "OMDDoorDamageTakenDelegateDelegate.generated.h"

class UOMDDamageType;
class AOMDDoor;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOMDDoorDamageTakenDelegate, AOMDDoor*, Door, float, Damage, const UOMDDamageType*, Type, AActor*, Causer);

