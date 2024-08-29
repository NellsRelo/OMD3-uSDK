#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ApplyRadialDamageActionDelegateDelegate.h"
#include "EDeathAnimationCategory.h"
#include "OMDAction.h"
#include "Templates/SubclassOf.h"
#include "OMDAction_ApplyRadialDamage.generated.h"

class AActor;
class UOMDAbility;
class UOMDAction_ApplyRadialDamage;
class UOMDDamageType;

UCLASS(Blueprintable)
class OMD_API UOMDAction_ApplyRadialDamage : public UOMDAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FApplyRadialDamageActionDelegate ActorOverlapped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FApplyRadialDamageActionDelegate DamageTaken;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UOMDDamageType> DamageTypeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* DamageCauser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* overrideContextActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> additionalActorsToIgnore;
    
public:
    UOMDAction_ApplyRadialDamage();

    UFUNCTION(BlueprintCallable)
    static UOMDAction_ApplyRadialDamage* ApplyRadialDamage(UOMDAbility* ability, float BaseDamage, float ChanceToGib, EDeathAnimationCategory DeathAnimation, const FVector& Origin, float OuterRadius, AActor* NewDamageCauser, AActor* NewOverrideContextActor, TArray<AActor*> NewAdditionalActorsToIgnore, TSubclassOf<UOMDDamageType> NewDamageTypeClass, float ImpulseForceOnDeath, float impulseForceFalloff, FVector HitDirectionOverride, FVector hitDirectionOriginOffset, float MinimumDamage, float InnerRadius, float DamageFalloff, TEnumAsByte<ECollisionChannel> damagePreventionChannel, bool ignoreTeams, bool damageProjectiles);
    
};

