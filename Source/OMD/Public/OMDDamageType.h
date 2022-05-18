#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageType -FallbackName=DamageType
#include "OMDDamageType.generated.h"

UCLASS()
class OMD_API UOMDDamageType : public UDamageType {
    GENERATED_BODY()
public:
    UOMDDamageType();
};

