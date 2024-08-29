#pragma once
#include "CoreMinimal.h"
#include "OMDSoftProtoPtr.h"
#include "OMDPickupMissionModifier.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDPickupMissionModifier {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr GuaranteedPickup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceToDropPickup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseGuaranteedPickupOverride: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseChanceToDropPickupOverride: 1;
    
public:
    FOMDPickupMissionModifier();
};

