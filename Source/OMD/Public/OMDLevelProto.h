#pragma once
#include "CoreMinimal.h"
#include "OMDProtoBase.h"
#include "OMDLevelProto.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct OMD_API FOMDLevelProto : public FOMDProtoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UWorld> PrimaryLevel;
    
public:
    FOMDLevelProto();
};

