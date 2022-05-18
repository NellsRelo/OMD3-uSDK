#pragma once
#include "CoreMinimal.h"
#include "EEngagementActivityType.generated.h"

UENUM(BlueprintType)
enum class EEngagementActivityType : uint8 {
    None,
    Campaign,
    WeeklyChallenge,
    FiveSkull,
    Endless,
    Scramble,
    Trophy,
    Kills,
    MissionsPlayed,
    HighScore,
};

