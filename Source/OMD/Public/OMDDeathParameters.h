#pragma once
#include "CoreMinimal.h"
#include "EDeathAnimationCategory.h"
#include "OMDDeathParameters.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDDeathParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DeathType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDeathAnimationCategory DeathAnimationCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LimbMask;
    
    FOMDDeathParameters();
};

