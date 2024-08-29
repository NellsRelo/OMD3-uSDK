#pragma once
#include "CoreMinimal.h"
#include "OMDUInt8Range.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDUInt8Range {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Max;
    
    FOMDUInt8Range();
};

