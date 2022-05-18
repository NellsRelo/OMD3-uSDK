#pragma once
#include "CoreMinimal.h"
#include "OMDTrap.h"
#include "OMDTrapSensing.generated.h"

class AActor;

UCLASS()
class OMD_API AOMDTrapSensing : public AOMDTrap {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    AActor* CurrentTarget;
    
public:
    AOMDTrapSensing();
};

