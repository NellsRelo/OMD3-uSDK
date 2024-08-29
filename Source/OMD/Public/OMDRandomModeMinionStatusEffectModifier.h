#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectCategory.h"
#include "OMDRandomModeMinionStatusEffectModifier.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDRandomModeMinionStatusEffectModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStatusEffectCategory StatusEffectCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float modifier;
    
    FOMDRandomModeMinionStatusEffectModifier();
};

