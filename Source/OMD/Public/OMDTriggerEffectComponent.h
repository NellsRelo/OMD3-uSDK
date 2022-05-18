#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "OMDTriggerEffectComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD_API UOMDTriggerEffectComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UOMDTriggerEffectComponent();
};

