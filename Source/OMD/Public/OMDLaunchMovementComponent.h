#pragma once
#include "CoreMinimal.h"
#include "GameFramework\ProjectileMovementComponent.h"
#include "OMDLaunchMovementComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD_API UOMDLaunchMovementComponent : public UProjectileMovementComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WindResistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WindResistanceStopSimulatingThreshold;
    
public:
    UOMDLaunchMovementComponent();
};

