#pragma once
#include "CoreMinimal.h"
#include "EOMDWeaponNPEStyle.generated.h"

UENUM(BlueprintType)
enum class EOMDWeaponNPEStyle : uint8 {
    NoWeaponNPE,
    LockWeaponToPrimary,
    DefaultToPrimaryWeapon,
};

