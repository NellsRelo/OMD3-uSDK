#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "OMDVectorLimits.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDVectorLimits {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector Min;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector Max;
    
    FOMDVectorLimits();
};

