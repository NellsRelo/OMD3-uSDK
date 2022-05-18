#pragma once
#include "CoreMinimal.h"
#include "OMDSoftProtoPtr.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "OMDTransitionCampaignOverride.h"
#include "OMDScreenTransition.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDScreenTransition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FOMDSoftProtoPtr SourceScreen;
    
    UPROPERTY(EditAnywhere)
    FOMDSoftProtoPtr DestinationScreen;
    
    UPROPERTY(EditAnywhere)
    FSoftObjectPath LevelSequence;
    
    UPROPERTY(EditAnywhere)
    TArray<FOMDTransitionCampaignOverride> CampaignOverrides;
    
    UPROPERTY(EditAnywhere)
    uint8 bReverse: 1;
    
    FOMDScreenTransition();
};

