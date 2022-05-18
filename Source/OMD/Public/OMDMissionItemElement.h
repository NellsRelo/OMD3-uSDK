#pragma once
#include "CoreMinimal.h"
#include "OMDSoftProtoPtr.h"
#include "OMDMissionItemElement.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDMissionItemElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsPremission;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsHidden;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDSoftProtoPtr Item;
    
    FOMDMissionItemElement();
};

