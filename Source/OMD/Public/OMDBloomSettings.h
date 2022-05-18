#pragma once
#include "CoreMinimal.h"
#include "OMDBloomSettings.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDBloomSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinimumBloomAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaximumBloomAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BloomRecoveryTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BloomRecoveryDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxHeadshotRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool PrimaryAffectedByBloom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PrimaryBloomContribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool SecondaryAffectedByBloom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SecondaryBloomContribution;
    
    FOMDBloomSettings();
};

