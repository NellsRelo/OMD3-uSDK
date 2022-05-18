#pragma once
#include "CoreMinimal.h"
#include "OMDAbilityParameters.h"
#include "ETrapActivationEvent.h"
#include "OMDTrapAbilityParameters.generated.h"

class AActor;

UCLASS(BlueprintType)
class OMD_API UOMDTrapAbilityParameters : public UOMDAbilityParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETrapActivationEvent Event;
    
    UOMDTrapAbilityParameters();
};

