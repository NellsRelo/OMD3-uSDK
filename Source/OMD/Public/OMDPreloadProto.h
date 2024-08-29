#pragma once
#include "CoreMinimal.h"
#include "OMDProtoBase.h"
#include "OMDPreloadProto.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct OMD_API FOMDPreloadProto : public FOMDProtoBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreloadNormalScenario;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreloadWarScenario;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> PreloadAsset;
    
    FOMDPreloadProto();
};

