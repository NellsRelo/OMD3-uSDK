#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ECharacterWeightClass.h"
#include "LaunchCharacterActionDelegateDelegate.h"
#include "OMDAction.h"
#include "OMDAction_LaunchCharacter.generated.h"

class AActor;
class AOMDCharacter;
class UOMDAbility;
class UOMDAction_LaunchCharacter;

UCLASS(Blueprintable)
class OMD_API UOMDAction_LaunchCharacter : public UOMDAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLaunchCharacterActionDelegate OnGrounded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLaunchCharacterActionDelegate OnReLaunched;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLaunchCharacterActionDelegate OnHit;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AOMDCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Causer;
    
public:
    UOMDAction_LaunchCharacter();

    UFUNCTION(BlueprintCallable)
    static UOMDAction_LaunchCharacter* LaunchCharacter(UOMDAbility* ability, AOMDCharacter* NewCharacter, AActor* NewCauser, FVector Direction, float strength, bool useRagdoll, ECharacterWeightClass maxAffectedWeightClass, FVector meshImpulseLocation, FName BoneName);
    
private:
    UFUNCTION(BlueprintCallable)
    void CharacterReLaunched();
    
    UFUNCTION(BlueprintCallable)
    void CharacterHit(AActor* HitActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void CharacterGrounded();
    
    UFUNCTION(BlueprintCallable)
    void CharacterDestroyed(AActor* DestroyedActor);
    
};

