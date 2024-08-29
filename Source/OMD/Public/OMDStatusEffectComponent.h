#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OMDStatusEffectComponent.generated.h"

class UOMDStatusEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD_API UOMDStatusEffectComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOMDStatusEffect*> StatusEffects;
    
public:
    UOMDStatusEffectComponent(const FObjectInitializer& ObjectInitializer);

};

