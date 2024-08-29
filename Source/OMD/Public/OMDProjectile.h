#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "OMDAbilityActor.h"
#include "OMDPlanarContraintParams.h"
#include "ProjectileExplodedDelegateDelegate.h"
#include "ProjectileImpactDelegateDelegate.h"
#include "OMDProjectile.generated.h"

class AActor;
class UOMDProjectileMovementComponent;
class UPrimitiveComponent;
class USphereComponent;

UCLASS(Abstract, Blueprintable)
class OMD_API AOMDProjectile : public AOMDAbilityActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProjectileImpactDelegate OnImpact;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProjectileExplodedDelegate OnExploded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOMDProjectileMovementComponent* MovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* CollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InitialSpeed, meta=(AllowPrivateAccess=true))
    float InitialSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InitialVelocity, meta=(AllowPrivateAccess=true))
    FVector InitialVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Lifetime, meta=(AllowPrivateAccess=true))
    float lifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bExplodeOnImpact: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PositionSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ResetTransform, meta=(AllowPrivateAccess=true))
    FTransform ResetTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 pierceCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bPiercingRound: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanInteractWithTraps: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HomingTarget, meta=(AllowPrivateAccess=true))
    AActor* homingTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HomingAccellerationMagnitude, meta=(AllowPrivateAccess=true))
    float HomingAccelerationMagnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlanarConstraintParams, meta=(AllowPrivateAccess=true))
    FOMDPlanarContraintParams PlanarConstraintParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 replicatedExplosionID;
    
public:
    AOMDProjectile(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetLifetime(float NewLifetime);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ResetProjectile(const FTransform& Transform);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ResetTransform();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlanarConstraintParams();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Lifetime();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_InitialVelocity();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_InitialSpeed();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HomingTarget();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HomingAccellerationMagnitude();
    
    UFUNCTION(BlueprintCallable)
    void OnLifetimeExpired();
    
    UFUNCTION(BlueprintCallable)
    void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable)
    void Explode();
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void Client_ResetProjectile(const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPooledEndPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPooledBeginPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnImpact(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, const FHitResult& HitResult);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Exploded();
    
};

