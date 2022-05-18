#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PointDamageEvent -FallbackName=PointDamageEvent
#include "OMDSoftProtoPtr.h"
#include "EDeathAnimationCategory.h"
#include "OMDPointDamageEvent.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDPointDamageEvent : public FPointDamageEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FOMDSoftProtoPtr Source;
    
    UPROPERTY(BlueprintReadOnly)
    float ChanceToGib;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 bIsHeadshot: 1;
    
    UPROPERTY(BlueprintReadOnly)
    EDeathAnimationCategory DeathAnimation;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 bIgnoreTeams: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 bIsDOTDamage: 1;
    
    UPROPERTY(BlueprintReadOnly)
    float ImpulseForceOnDeath;
    
    FOMDPointDamageEvent();
};

