#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "OMDAbilityParameters.h"
#include "OMDCharacterOnDealDamageAbilityParameters.generated.h"

class AController;
class AOMDAICharacter;

UCLASS(Blueprintable)
class OMD_API UOMDCharacterOnDealDamageAbilityParameters : public UOMDAbilityParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageEvent DamageEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AOMDAICharacter* DamagedAICharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AController* eventInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHeadshot;
    
    UOMDCharacterOnDealDamageAbilityParameters();

};

