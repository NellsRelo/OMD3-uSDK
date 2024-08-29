#pragma once
#include "CoreMinimal.h"
#include "OMDSoftProtoPtr.h"
#include "OMDRandomModeMinionFloatModifier.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDRandomModeMinionFloatModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr MinionProtodata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float modifier;
    
    FOMDRandomModeMinionFloatModifier();
};

