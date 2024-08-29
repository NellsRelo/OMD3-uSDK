#pragma once
#include "CoreMinimal.h"
#include "EOMDAbilityInstancingPolicy.generated.h"

UENUM(BlueprintType)
enum class EOMDAbilityInstancingPolicy : uint8 {
    NonInstanced,
    InstancedPerActor,
    InstancedPerExecution,
};

