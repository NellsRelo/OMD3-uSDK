#pragma once
#include "CoreMinimal.h"
#include "OMDAbilityActor.h"
#include "OMDBarrier.generated.h"

UCLASS(Blueprintable)
class OMD_API AOMDBarrier : public AOMDAbilityActor {
    GENERATED_BODY()
public:
    AOMDBarrier(const FObjectInitializer& ObjectInitializer);

};

