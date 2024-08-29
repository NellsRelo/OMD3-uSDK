#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OMDSoftProtoPtr.h"
#include "OMDTransitionCampaignOverride.h"
#include "OMDScreenTransition.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDScreenTransition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr SourceScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr DestinationScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOMDTransitionCampaignOverride> CampaignOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bReverse: 1;
    
    FOMDScreenTransition();
};

