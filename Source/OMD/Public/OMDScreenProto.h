#pragma once
#include "CoreMinimal.h"
#include "OMDProtoBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
#include "OMDScreenProto.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDScreenProto : public FOMDProtoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, NoClear)
    FSoftClassPath WidgetClassPath;
    
public:
    FOMDScreenProto();
};

