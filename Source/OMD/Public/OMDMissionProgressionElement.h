#pragma once
#include "CoreMinimal.h"
#include "OMDSoftProtoPtr.h"
#include "OMDMissionProgressionElement.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDMissionProgressionElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsPremission;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDSoftProtoPtr Mission;
    
    FOMDMissionProgressionElement();
};

