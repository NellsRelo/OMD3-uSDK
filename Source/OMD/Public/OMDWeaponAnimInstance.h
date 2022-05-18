#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "OMDWeaponAnimInstance.generated.h"

UCLASS(NonTransient)
class OMD_API UOMDWeaponAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UOMDWeaponAnimInstance();
};

