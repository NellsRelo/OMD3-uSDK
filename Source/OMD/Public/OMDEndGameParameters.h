#pragma once
#include "CoreMinimal.h"
#include "OMDEndGameParameters.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDEndGameParameters {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    uint8 bShouldDance: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bShouldLockControls: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bShouldHideUI: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bShouldUseDialogue: 1;
    
    FOMDEndGameParameters();
};

