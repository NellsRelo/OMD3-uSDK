#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OMDProtoBase.h"
#include "OMDScreenProto.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDScreenProto : public FOMDProtoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    FSoftClassPath WidgetClassPath;
    
public:
    FOMDScreenProto();
};

