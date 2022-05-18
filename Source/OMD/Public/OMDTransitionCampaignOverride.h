#pragma once
#include "CoreMinimal.h"
#include "OMDSoftProtoPtr.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "OMDTransitionCampaignOverride.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDTransitionCampaignOverride {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FOMDSoftProtoPtr campaign;
    
    UPROPERTY(EditAnywhere)
    FSoftObjectPath LevelSequence;
    
    FOMDTransitionCampaignOverride();
};

