#pragma once
#include "CoreMinimal.h"
#include "OMDProtoBase.h"
#include "OMDPreloadProto.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct OMD_API FOMDPreloadProto : public FOMDProtoBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool bPreloadNormalScenario;
    
    UPROPERTY(EditDefaultsOnly)
    bool bPreloadWarScenario;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<AActor> PreloadAsset;
    
    FOMDPreloadProto();
};

