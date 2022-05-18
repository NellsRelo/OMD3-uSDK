#pragma once
#include "CoreMinimal.h"
#include "OMDAbilityParameters.h"
#include "OMDCharacterOnHitAbilityParameters.generated.h"

class AActor;
class UOMDDamageType;

UCLASS(BlueprintType)
class OMD_API UOMDCharacterOnHitAbilityParameters : public UOMDAbilityParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UOMDDamageType* DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* DamageCauser;
    
    UOMDCharacterOnHitAbilityParameters();
};

