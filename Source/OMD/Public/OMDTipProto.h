#pragma once
#include "CoreMinimal.h"
#include "OMDProtoBase.h"
#include "OMDTipProto.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDTipProto : public FOMDProtoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeInRandomTips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OrderedTipIndex;
    
public:
    FOMDTipProto();
};

