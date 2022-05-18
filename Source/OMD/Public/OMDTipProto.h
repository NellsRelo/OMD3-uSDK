#pragma once
#include "CoreMinimal.h"
#include "OMDProtoBase.h"
#include "OMDTipProto.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDTipProto : public FOMDProtoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText Text;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIncludeInRandomTips;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 OrderedTipIndex;
    
public:
    FOMDTipProto();
};

