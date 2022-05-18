#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PawnMovementComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PawnMovementComponent -FallbackName=PawnMovementComponent
#include "OMDAIPawnMovementComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD_API UOMDAIPawnMovementComponent : public UPawnMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Acceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Deceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TurningBoost;
    
protected:
    UPROPERTY(Transient)
    uint8 bPositionCorrected: 1;
    
public:
    UOMDAIPawnMovementComponent();
};

