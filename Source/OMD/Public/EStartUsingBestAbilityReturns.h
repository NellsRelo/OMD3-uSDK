#pragma once
#include "CoreMinimal.h"
#include "EStartUsingBestAbilityReturns.generated.h"

UENUM(BlueprintType)
enum class EStartUsingBestAbilityReturns : uint8 {
    TargetIsInvalid,
    TargetCannotBeAttacked,
    MyPawnIsInvalid,
    NoBestAbilityChosen,
    NotInRange,
    AbilityAlreadyInUse,
    Success,
};

