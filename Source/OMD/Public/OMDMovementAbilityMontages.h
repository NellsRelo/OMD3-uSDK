#pragma once
#include "CoreMinimal.h"
#include "OMDMovementAbilityMontages.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct OMD_API FOMDMovementAbilityMontages {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UAnimMontage> GroundSlamMontage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UAnimMontage> FeignDeathMontage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UAnimMontage> TeleportMontage;
    
public:
    FOMDMovementAbilityMontages();
};

