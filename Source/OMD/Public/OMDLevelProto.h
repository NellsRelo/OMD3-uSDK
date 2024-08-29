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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> PrimaryLevel;
    
public:
    FOMDLevelProto();
};

