#pragma once
#include "CoreMinimal.h"
#include "OMDProjectile.h"
#include "OMDAIProjectile.generated.h"

UCLASS(Blueprintable)
class OMD_API AOMDAIProjectile : public AOMDProjectile {
    GENERATED_BODY()
public:
    AOMDAIProjectile(const FObjectInitializer& ObjectInitializer);

};

