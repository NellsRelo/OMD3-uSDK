#pragma once
#include "CoreMinimal.h"
#include "ETrapActivationEvent.h"
#include "OMDAbilityParameters.h"
#include "OMDTrapAbilityParameters.generated.h"

class AActor;

UCLASS(Blueprintable)
class OMD_API UOMDTrapAbilityParameters : public UOMDAbilityParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrapActivationEvent Event;
    
    UOMDTrapAbilityParameters();

};

