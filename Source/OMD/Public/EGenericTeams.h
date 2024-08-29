#pragma once
#include "CoreMinimal.h"
#include "EGenericTeams.generated.h"

UENUM(BlueprintType)
enum class EGenericTeams : uint8 {
    Players,
    AI,
    Traps,
    Doors,
    Decoy,
    Charmed,
};

