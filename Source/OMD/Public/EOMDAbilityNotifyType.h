#pragma once
#include "CoreMinimal.h"
#include "EOMDAbilityNotifyType.generated.h"

UENUM(BlueprintType)
enum class EOMDAbilityNotifyType : uint8 {
    None,
    DoDamage,
    LaunchProjectile,
    EndAbility,
    RetriggerAnimation,
    DoDamage_MainHand,
    DoDamage_OffHand,
};

