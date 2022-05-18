#pragma once
#include "CoreMinimal.h"
#include "OMDSoftProtoPtr.h"
#include "OMDRandomModeMinionIntModifier.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDRandomModeMinionIntModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOMDSoftProtoPtr MinionProtodata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 modifier;
    
    FOMDRandomModeMinionIntModifier();
};

