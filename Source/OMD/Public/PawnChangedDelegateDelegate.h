#pragma once
#include "CoreMinimal.h"
#include "PawnChangedDelegateDelegate.generated.h"

class APawn;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPawnChangedDelegate, APawn*, newPawn);

