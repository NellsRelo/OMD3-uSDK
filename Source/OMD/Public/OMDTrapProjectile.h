#pragma once
#include "CoreMinimal.h"
#include "OMDProjectile.h"
#include "OMDTrapProjectile.generated.h"

UCLASS(Blueprintable)
class OMD_API AOMDTrapProjectile : public AOMDProjectile {
    GENERATED_BODY()
public:
    AOMDTrapProjectile(const FObjectInitializer& ObjectInitializer);

};

