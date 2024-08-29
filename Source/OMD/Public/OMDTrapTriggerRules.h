#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectCategory.h"
#include "OMDTrapTriggerRules.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDTrapTriggerRules {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TrapPlacementsThatDontTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EStatusEffectCategory, bool> StatusEffectExceptions;
    
public:
    FOMDTrapTriggerRules();
};

