#pragma once
#include "CoreMinimal.h"
#include "EDeathType.generated.h"

UENUM()
enum class EDeathType {
    Ragdoll,
    Gib,
    CustomAnimation,
    EnteredRift,
};

