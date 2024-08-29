#pragma once
#include "CoreMinimal.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "OMDProjectileMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD_API UOMDProjectileMovementComponent : public UProjectileMovementComponent {
    GENERATED_BODY()
public:
    UOMDProjectileMovementComponent(const FObjectInitializer& ObjectInitializer);

};

