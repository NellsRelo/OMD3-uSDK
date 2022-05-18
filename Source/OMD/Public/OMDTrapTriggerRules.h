#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectCategory.h"
#include "OMDTrapTriggerRules.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDTrapTriggerRules {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 TrapPlacementsThatDontTrigger;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EStatusEffectCategory, bool> StatusEffectExceptions;
    
public:
    FOMDTrapTriggerRules();
};

