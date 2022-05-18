#pragma once
#include "CoreMinimal.h"
#include "OMDAction.h"
#include "LaunchCharacterActionDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ECharacterWeightClass.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "OMDAction_LaunchCharacter.generated.h"

class AOMDCharacter;
class AActor;
class UOMDAbility;
class UOMDAction_LaunchCharacter;

UCLASS()
class OMD_API UOMDAction_LaunchCharacter : public UOMDAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FLaunchCharacterActionDelegate OnGrounded;
    
    UPROPERTY(BlueprintAssignable)
    FLaunchCharacterActionDelegate OnReLaunched;
    
    UPROPERTY(BlueprintAssignable)
    FLaunchCharacterActionDelegate OnHit;
    
private:
    UPROPERTY()
    AOMDCharacter* Character;
    
    UPROPERTY()
    AActor* Causer;
    
public:
    UOMDAction_LaunchCharacter();
    UFUNCTION(BlueprintCallable)
    static UOMDAction_LaunchCharacter* LaunchCharacter(UOMDAbility* ability, AOMDCharacter* NewCharacter, AActor* NewCauser, FVector Direction, float strength, bool useRagdoll, ECharacterWeightClass maxAffectedWeightClass, FVector meshImpulseLocation, FName BoneName);
    
private:
    UFUNCTION()
    void CharacterReLaunched();
    
    UFUNCTION()
    void CharacterHit(AActor* HitActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION()
    void CharacterGrounded();
    
    UFUNCTION()
    void CharacterDestroyed(AActor* DestroyedActor);
    
};

