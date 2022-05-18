#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageEvent -FallbackName=DamageEvent
#include "OMDSoftProtoPtr.h"
#include "EDeathAnimationCategory.h"
#include "OMDDamageEvent.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDDamageEvent : public FDamageEvent {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Damage;
    
    UPROPERTY(BlueprintReadOnly)
    FOMDSoftProtoPtr Source;
    
    UPROPERTY(BlueprintReadOnly)
    float ChanceToGib;
    
    UPROPERTY(BlueprintReadOnly)
    EDeathAnimationCategory DeathAnimation;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 IgnoreShielding: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 bIgnoreTeams: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 bIsDOTDamage: 1;
    
    FOMDDamageEvent();
};

