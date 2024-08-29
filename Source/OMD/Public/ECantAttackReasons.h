#pragma once
#include "CoreMinimal.h"
#include "ECantAttackReasons.generated.h"

UENUM(BlueprintType)
enum class ECantAttackReasons : uint8 {
    CanAttack,
    DeadOrDying,
    TargetDeadOrDying,
    TargetOutOfRange,
    TargetNoLOS,
    TargetAttitudeUntargetable,
};

