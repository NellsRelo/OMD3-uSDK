#pragma once
#include "CoreMinimal.h"
#include "OMDAxisMapping.generated.h"

USTRUCT(BlueprintType)
struct FOMDAxisMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString axisName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString KeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    OMD_API FOMDAxisMapping();
};

