#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OMDAbilityParameters.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantizeNormal -FallbackName=Vector_NetQuantizeNormal
#include "EDeathAnimationCategory.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "OMDSoftProtoPtr.h"
#include "OMDAICharacterAttackAbilityParameters.generated.h"

class AActor;
class UAnimMontage;
class UOMDDamageType;
class AOMDProjectile;
class AOMDAbilityActor;

UCLASS(BlueprintType)
class OMD_API UOMDAICharacterAttackAbilityParameters : public UOMDAbilityParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AActor* Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* Destination;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float cooldown;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsRangedAbility;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> Montage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MontagePlaybackSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector_NetQuantizeNormal ShotDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Damage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UOMDDamageType> DamageType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GibChance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EDeathAnimationCategory DeathAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Radius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FOMDSoftProtoPtr StatusEffect0;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StatusEffect0Duration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FOMDSoftProtoPtr StatusEffect1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StatusEffect1Duration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseProjectile;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AOMDProjectile> projectile;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AOMDAbilityActor> ToSpawnOnProjectileImpact;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 pierceCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ProjectileLifetime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ProjectileSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ProjectileHomingAccellerationMagnitude;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bProjectileShouldArc;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ProjectileArc;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGuid Guid;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName LaunchSocket;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AActor* DamageCauser;
    
    UOMDAICharacterAttackAbilityParameters();
};

