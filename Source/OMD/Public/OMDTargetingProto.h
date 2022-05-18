#pragma once
#include "CoreMinimal.h"
#include "OMDProtoBase.h"
#include "EOverrideableType.h"
#include "OMDTargetingSettings.h"
#include "OMDTargetingProto.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDTargetingProto : public FOMDProtoBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool bCanStealDoorSlots;
    
    UPROPERTY(EditDefaultsOnly)
    EOverrideableType OverrideableType;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FOMDTargetingSettings> TargetingSettings;
    
    FOMDTargetingProto();
};

