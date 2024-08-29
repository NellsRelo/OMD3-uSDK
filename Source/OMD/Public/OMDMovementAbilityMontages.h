#pragma once
#include "CoreMinimal.h"
#include "OMDMovementAbilityMontages.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct OMD_API FOMDMovementAbilityMontages {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> GroundSlamMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> FeignDeathMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> TeleportMontage;
    
public:
    FOMDMovementAbilityMontages();
};

