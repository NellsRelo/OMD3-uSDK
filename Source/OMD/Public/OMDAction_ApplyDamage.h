#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EDeathAnimationCategory.h"
#include "OMDAction.h"
#include "OMDAction_ApplyDamage.generated.h"

class AActor;
class UOMDAction_ApplyDamage;
class UOMDAbility;
class UOMDDamageType;

UCLASS()
class OMD_API UOMDAction_ApplyDamage : public UOMDAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    AActor* DamagedActor;
    
public:
    UOMDAction_ApplyDamage();
    UFUNCTION(BlueprintCallable)
    static UOMDAction_ApplyDamage* ApplyDamage(UOMDAbility* ability, AActor* NewDamagedActor, float BaseDamage, float ChanceToGib, EDeathAnimationCategory DeathAnimation, AActor* DamageCauser, TSubclassOf<UOMDDamageType> DamageTypeClass, bool IgnoreShielding, bool ignoreTeams);
    
};

