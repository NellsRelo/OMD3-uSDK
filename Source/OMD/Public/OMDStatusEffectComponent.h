#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "OMDStatusEffectComponent.generated.h"

class UOMDStatusEffect;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD_API UOMDStatusEffectComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<UOMDStatusEffect*> StatusEffects;
    
public:
    UOMDStatusEffectComponent();
};

