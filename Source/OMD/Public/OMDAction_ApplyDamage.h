#pragma once
#include "CoreMinimal.h"
#include "EDeathAnimationCategory.h"
#include "OMDAction.h"
#include "Templates/SubclassOf.h"
#include "OMDAction_ApplyDamage.generated.h"

class AActor;
class UOMDAbility;
class UOMDAction_ApplyDamage;
class UOMDDamageType;

UCLASS(Blueprintable)
class OMD_API UOMDAction_ApplyDamage : public UOMDAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* DamagedActor;
    
public:
    UOMDAction_ApplyDamage();

    UFUNCTION(BlueprintCallable)
    static UOMDAction_ApplyDamage* ApplyDamage(UOMDAbility* ability, AActor* NewDamagedActor, float BaseDamage, float ChanceToGib, EDeathAnimationCategory DeathAnimation, AActor* DamageCauser, TSubclassOf<UOMDDamageType> DamageTypeClass, bool IgnoreShielding, bool ignoreTeams);
    
};

