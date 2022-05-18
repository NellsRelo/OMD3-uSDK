#pragma once
#include "CoreMinimal.h"
#include "OMDProtoBase.h"
#include "EOMDAbilityInstancingPolicy.h"
#include "OMDAbilityProto.generated.h"

class UOMDAbility;
class UOMDStatsProcessor;

USTRUCT(BlueprintType)
struct OMD_API FOMDAbilityProto : public FOMDProtoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<UOMDAbility> AbilityClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<UOMDStatsProcessor> StatsProcessorClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CooldownTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bInterruptable: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bCanQueue: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bAllowReActivation: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bUseAmmo: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ReloadTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 AmmoCapacity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EOMDAbilityInstancingPolicy InstancingPolicy;
    
public:
    FOMDAbilityProto();
};

