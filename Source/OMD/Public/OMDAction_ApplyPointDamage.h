#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EDeathAnimationCategory.h"
#include "OMDAction.h"
#include "Templates/SubclassOf.h"
#include "OMDAction_ApplyPointDamage.generated.h"

class AActor;
class UOMDAbility;
class UOMDAction_ApplyPointDamage;
class UOMDDamageType;

UCLASS(Blueprintable)
class OMD_API UOMDAction_ApplyPointDamage : public UOMDAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* DamagedActor;
    
public:
    UOMDAction_ApplyPointDamage();

    UFUNCTION(BlueprintCallable)
    static UOMDAction_ApplyPointDamage* ApplyPointDamage(UOMDAbility* ability, AActor* NewDamagedActor, float BaseDamage, float ChanceToGib, EDeathAnimationCategory DeathAnimation, const FVector& hitFromDirection, const FHitResult& HitInfo, AActor* DamageCauser, TSubclassOf<UOMDDamageType> DamageTypeClass, float ImpulseForceOnDeath, bool ignoreTeams);
    
};

