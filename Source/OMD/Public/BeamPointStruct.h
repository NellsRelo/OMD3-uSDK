#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BeamPointStruct.generated.h"

USTRUCT(BlueprintType)
struct FBeamPointStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 EmitterIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SourceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Point;
    
    OMD_API FBeamPointStruct();
};

