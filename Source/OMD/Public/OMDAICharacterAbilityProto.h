#pragma once
#include "CoreMinimal.h"
#include "EDeathAnimationCategory.h"
#include "OMDProtoBase.h"
#include "OMDSoftProtoPtr.h"
#include "OMDAICharacterAbilityProto.generated.h"

class UAnimMontage;
class UOMDDamageType;
class AOMDProjectile;
class AOMDAbilityActor;

USTRUCT(BlueprintType)
struct OMD_API FOMDAICharacterAbilityProto : public FOMDProtoBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDSoftProtoPtr ability;
    
    UPROPERTY(EditDefaultsOnly)
    float cooldown;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUsesExternalTargeting;
    
    UPROPERTY(EditDefaultsOnly)
    bool bCanMoveToTarget;
    
    UPROPERTY(EditDefaultsOnly)
    bool bCanContinueIfTargetIsDead;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bOrientToTarget;
    
    UPROPERTY(EditDefaultsOnly)
    FOMDSoftProtoPtr TargetingProtoReference;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIsRangedAbility;
    
    UPROPERTY(EditDefaultsOnly)
    float AbilityMinimumRange;
    
    UPROPERTY(EditDefaultsOnly)
    float AbilityEnterRange;
    
    UPROPERTY(EditDefaultsOnly)
    float AbilityExitRange;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UAnimMontage> Montage;
    
    UPROPERTY(EditDefaultsOnly)
    float MontagePlaybackSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float Damage;
    
    UPROPERTY(EditDefaultsOnly)
    float GibChance;
    
    UPROPERTY(EditDefaultsOnly)
    EDeathAnimationCategory DeathAnimation;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UOMDDamageType> DamageType;
    
    UPROPERTY(EditDefaultsOnly)
    float Radius;
    
    UPROPERTY(EditDefaultsOnly)
    FOMDSoftProtoPtr StatusEffect0;
    
    UPROPERTY(EditDefaultsOnly)
    float StatusEffect0Duration;
    
    UPROPERTY(EditDefaultsOnly)
    FOMDSoftProtoPtr StatusEffect1;
    
    UPROPERTY(EditDefaultsOnly)
    float StatusEffect1Duration;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUseProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<AOMDProjectile> projectile;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<AOMDAbilityActor> ToSpawnOnProjectileImpact;
    
    UPROPERTY(EditDefaultsOnly)
    int32 pierceCount;
    
    UPROPERTY(EditDefaultsOnly)
    float ProjectileLifetime;
    
    UPROPERTY(EditDefaultsOnly)
    float ProjectileSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float ProjectileHomingAccellerationMagnitude;
    
    UPROPERTY(EditDefaultsOnly)
    FName LaunchSocket;
    
    UPROPERTY(EditDefaultsOnly)
    bool bProjectileShouldArc;
    
    UPROPERTY(EditDefaultsOnly)
    float ProjectileArc;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIsEmpty;
    
    FOMDAICharacterAbilityProto();
};

