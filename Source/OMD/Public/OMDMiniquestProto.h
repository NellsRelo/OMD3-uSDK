#pragma once
#include "CoreMinimal.h"
#include "OMDProtoBase.h"
#include "OMDMiniquestProto.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDMiniquestProto : public FOMDProtoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 RequiredValue;
    
public:
    FOMDMiniquestProto();
};

