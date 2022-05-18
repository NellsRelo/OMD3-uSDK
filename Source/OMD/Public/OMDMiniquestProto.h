#pragma once
#include "CoreMinimal.h"
#include "OMDProtoBase.h"
#include "OMDMiniquestProto.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDMiniquestProto : public FOMDProtoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString StatName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int64 RequiredValue;
    
public:
    FOMDMiniquestProto();
};

