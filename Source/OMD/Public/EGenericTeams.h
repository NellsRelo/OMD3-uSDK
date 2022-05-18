#pragma once
#include "CoreMinimal.h"
#include "EGenericTeams.generated.h"

UENUM()
enum class EGenericTeams : uint8 {
    Players,
    AI,
    Traps,
    Doors,
    Decoy,
    Charmed,
};

