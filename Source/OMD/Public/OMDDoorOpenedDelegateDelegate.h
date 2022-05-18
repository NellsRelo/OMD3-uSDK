#pragma once
#include "CoreMinimal.h"
#include "OMDDoorOpenedDelegateDelegate.generated.h"

class AOMDDoor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOMDDoorOpenedDelegate, AOMDDoor*, Door);

