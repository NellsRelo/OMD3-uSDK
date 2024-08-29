#pragma once
#include "CoreMinimal.h"
#include "OMDAbilityParameters.h"
#include "OMDCharacterOnHitAbilityParameters.generated.h"

class AActor;
class AController;
class UOMDDamageType;

UCLASS(Blueprintable)
class OMD_API UOMDCharacterOnHitAbilityParameters : public UOMDAbilityParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOMDDamageType* DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* DamageCauser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AController* eventInstigator;
    
    UOMDCharacterOnHitAbilityParameters();

};

