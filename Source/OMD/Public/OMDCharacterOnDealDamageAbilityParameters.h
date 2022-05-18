#pragma once
#include "CoreMinimal.h"
#include "OMDAbilityParameters.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageEvent -FallbackName=DamageEvent
#include "OMDCharacterOnDealDamageAbilityParameters.generated.h"

class AOMDAICharacter;
class AController;

UCLASS(BlueprintType)
class OMD_API UOMDCharacterOnDealDamageAbilityParameters : public UOMDAbilityParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    float Damage;
    
    UPROPERTY(BlueprintReadOnly)
    FDamageEvent DamageEvent;
    
    UPROPERTY(BlueprintReadOnly)
    AOMDAICharacter* DamagedAICharacter;
    
    UPROPERTY(BlueprintReadOnly)
    AController* eventInstigator;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsHeadshot;
    
    UOMDCharacterOnDealDamageAbilityParameters();
};

