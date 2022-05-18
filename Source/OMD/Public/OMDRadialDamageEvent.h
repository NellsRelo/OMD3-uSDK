#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RadialDamageEvent -FallbackName=RadialDamageEvent
#include "OMDSoftProtoPtr.h"
#include "EDeathAnimationCategory.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "OMDRadialDamageEvent.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDRadialDamageEvent : public FRadialDamageEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FOMDSoftProtoPtr Source;
    
    UPROPERTY(BlueprintReadOnly)
    float ChanceToGib;
    
    UPROPERTY(BlueprintReadOnly)
    EDeathAnimationCategory DeathAnimation;
    
    UPROPERTY(BlueprintReadOnly)
    FVector HitDirectionOverride;
    
    UPROPERTY(BlueprintReadOnly)
    float ImpulseForceOnDeath;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 bIgnoreTeams: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 bIsDOTDamage: 1;
    
    FOMDRadialDamageEvent();
};

