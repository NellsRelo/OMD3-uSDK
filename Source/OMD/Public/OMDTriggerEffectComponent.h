#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OMDTriggerEffectComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD_API UOMDTriggerEffectComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UOMDTriggerEffectComponent(const FObjectInitializer& ObjectInitializer);

};

