#pragma once
#include "CoreMinimal.h"
#include "OMDSoftProtoPtr.h"
#include "OMDMissionCharacterElement.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDMissionCharacterElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsPremission;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDSoftProtoPtr Character;
    
    FOMDMissionCharacterElement();
};

