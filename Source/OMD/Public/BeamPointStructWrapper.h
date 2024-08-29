#pragma once
#include "CoreMinimal.h"
#include "BeamPointStruct.h"
#include "BeamPointStructWrapper.generated.h"

USTRUCT(BlueprintType)
struct FBeamPointStructWrapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBeamPointStruct> BeamPointStructs;
    
    OMD_API FBeamPointStructWrapper();
};

