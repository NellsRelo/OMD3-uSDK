#pragma once
#include "CoreMinimal.h"
#include "OMDCoin.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDCoin {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    uint32 amount;
    
public:
    FOMDCoin();
};

