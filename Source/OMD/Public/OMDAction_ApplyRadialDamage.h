#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EDeathAnimationCategory.h"
#include "OMDAction.h"
#include "ApplyRadialDamageActionDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
#include "OMDAction_ApplyRadialDamage.generated.h"

class UOMDAction_ApplyRadialDamage;
class UOMDDamageType;
class AActor;
class UOMDAbility;

UCLASS()
class OMD_API UOMDAction_ApplyRadialDamage : public UOMDAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FApplyRadialDamageActionDelegate ActorOverlapped;
    
    UPROPERTY(BlueprintAssignable)
    FApplyRadialDamageActionDelegate DamageTaken;
    
private:
    UPROPERTY()
    TSubclassOf<UOMDDamageType> DamageTypeClass;
    
    UPROPERTY()
    AActor* DamageCauser;
    
    UPROPERTY()
    AActor* overrideContextActor;
    
    UPROPERTY()
    TArray<AActor*> additionalActorsToIgnore;
    
public:
    UOMDAction_ApplyRadialDamage();
    UFUNCTION(BlueprintCallable)
    static UOMDAction_ApplyRadialDamage* ApplyRadialDamage(UOMDAbility* ability, float BaseDamage, float ChanceToGib, EDeathAnimationCategory DeathAnimation, const FVector& Origin, float OuterRadius, AActor* NewDamageCauser, AActor* NewOverrideContextActor, TArray<AActor*> NewAdditionalActorsToIgnore, TSubclassOf<UOMDDamageType> NewDamageTypeClass, float ImpulseForceOnDeath, float impulseForceFalloff, FVector HitDirectionOverride, FVector hitDirectionOriginOffset, float MinimumDamage, float InnerRadius, float DamageFalloff, TEnumAsByte<ECollisionChannel> damagePreventionChannel, bool ignoreTeams, bool damageProjectiles);
    
};

