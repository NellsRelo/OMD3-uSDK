#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BeamPointStruct.generated.h"

USTRUCT(BlueprintType)
struct FBeamPointStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EmitterIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SourceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Point;
    
    OMD_API FBeamPointStruct();
};

