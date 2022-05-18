#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EDeathAnimationCategory.h"
#include "OMDAction.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "OMDAction_ApplyPointDamage.generated.h"

class UOMDAction_ApplyPointDamage;
class AActor;
class UOMDAbility;
class UOMDDamageType;

UCLASS()
class OMD_API UOMDAction_ApplyPointDamage : public UOMDAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    AActor* DamagedActor;
    
public:
    UOMDAction_ApplyPointDamage();
    UFUNCTION(BlueprintCallable)
    static UOMDAction_ApplyPointDamage* ApplyPointDamage(UOMDAbility* ability, AActor* NewDamagedActor, float BaseDamage, float ChanceToGib, EDeathAnimationCategory DeathAnimation, const FVector& hitFromDirection, const FHitResult& HitInfo, AActor* DamageCauser, TSubclassOf<UOMDDamageType> DamageTypeClass, float ImpulseForceOnDeath, bool ignoreTeams);
    
};

