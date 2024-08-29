#pragma once
#include "CoreMinimal.h"
#include "OMDSoftProtoPtr.h"
#include "OMDRandomModeMinionIntModifier.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDRandomModeMinionIntModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr MinionProtodata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 modifier;
    
    FOMDRandomModeMinionIntModifier();
};

