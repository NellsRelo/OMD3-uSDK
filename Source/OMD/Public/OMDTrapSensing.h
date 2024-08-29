#pragma once
#include "CoreMinimal.h"
#include "OMDTrap.h"
#include "OMDTrapSensing.generated.h"

class AActor;

UCLASS(Blueprintable)
class OMD_API AOMDTrapSensing : public AOMDTrap {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CurrentTarget;
    
public:
    AOMDTrapSensing(const FObjectInitializer& ObjectInitializer);

};

