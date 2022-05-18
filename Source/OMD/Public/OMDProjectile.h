#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "OMDAbilityActor.h"
#include "ProjectileImpactDelegateDelegate.h"
#include "ProjectileExplodedDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "OMDPlanarContraintParams.h"
#include "Components/SphereComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "OMDProjectile.generated.h"

class USphereComponent;
class UOMDProjectileMovementComponent;
class AActor;
class UPrimitiveComponent;

UCLASS(Abstract)
class OMD_API AOMDProjectile : public AOMDAbilityActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FProjectileImpactDelegate OnImpact;
    
    UPROPERTY(BlueprintAssignable)
    FProjectileExplodedDelegate OnExploded;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    UOMDProjectileMovementComponent* MovementComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    USphereComponent* CollisionComponent;
    
    UPROPERTY(ReplicatedUsing=OnRep_InitialSpeed)
    float InitialSpeed;
    
    UPROPERTY(ReplicatedUsing=OnRep_InitialVelocity)
    FVector InitialVelocity;
    
    UPROPERTY(ReplicatedUsing=OnRep_Lifetime)
    float lifetime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bExplodeOnImpact: 1;
    
    UPROPERTY(BlueprintReadOnly)
    FVector PositionSpawned;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_ResetTransform)
    FTransform ResetTransform;
    
    UPROPERTY(Replicated)
    int32 pierceCount;
    
    UPROPERTY(Replicated)
    uint8 bPiercingRound: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bCanInteractWithTraps: 1;
    
    UPROPERTY(ReplicatedUsing=OnRep_HomingTarget)
    AActor* homingTarget;
    
    UPROPERTY(ReplicatedUsing=OnRep_HomingAccellerationMagnitude)
    float HomingAccelerationMagnitude;
    
    UPROPERTY(ReplicatedUsing=OnRep_PlanarConstraintParams)
    FOMDPlanarContraintParams PlanarConstraintParams;
    
    UPROPERTY(Replicated)
    int32 replicatedExplosionID;
    
public:
    AOMDProjectile();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetLifetime(float NewLifetime);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_ResetProjectile(const FTransform& Transform);
    
protected:
    UFUNCTION()
    void OnRep_ResetTransform();
    
    UFUNCTION()
    void OnRep_PlanarConstraintParams();
    
    UFUNCTION()
    void OnRep_Lifetime();
    
    UFUNCTION()
    void OnRep_InitialVelocity();
    
    UFUNCTION()
    void OnRep_InitialSpeed();
    
    UFUNCTION()
    void OnRep_HomingTarget();
    
    UFUNCTION()
    void OnRep_HomingAccellerationMagnitude();
    
    UFUNCTION()
    void OnLifetimeExpired();
    
    UFUNCTION()
    void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable)
    void Explode();
    
    UFUNCTION(Client, Reliable, WithValidation)
    void Client_ResetProjectile(const FTransform& Transform);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnPooledEndPlay();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnPooledBeginPlay();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnImpact(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, const FHitResult& HitResult);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_Exploded();
    
};

