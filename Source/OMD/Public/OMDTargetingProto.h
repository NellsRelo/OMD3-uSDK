#pragma once
#include "CoreMinimal.h"
#include "EOverrideableType.h"
#include "OMDProtoBase.h"
#include "OMDTargetingSettings.h"
#include "OMDTargetingProto.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDTargetingProto : public FOMDProtoBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanStealDoorSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOverrideableType OverrideableType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOMDTargetingSettings> TargetingSettings;
    
    FOMDTargetingProto();
};

