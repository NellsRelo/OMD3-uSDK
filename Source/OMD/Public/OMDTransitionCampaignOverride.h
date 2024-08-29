#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OMDSoftProtoPtr.h"
#include "OMDTransitionCampaignOverride.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDTransitionCampaignOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr campaign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath LevelSequence;
    
    FOMDTransitionCampaignOverride();
};

