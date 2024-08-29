#pragma once
#include "CoreMinimal.h"
#include "OMDKeyMapping.generated.h"

USTRUCT(BlueprintType)
struct FOMDKeyMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString KeyName;
    
    OMD_API FOMDKeyMapping();
};

