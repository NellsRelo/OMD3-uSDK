#include "OMDProjectile.h"
#include "Components/SphereComponent.h"
#include "Net/UnrealNetwork.h"
#include "OMDProjectileMovementComponent.h"

AOMDProjectile::AOMDProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
    this->MovementComponent = CreateDefaultSubobject<UOMDProjectileMovementComponent>(TEXT("Movement"));
    this->CollisionComponent = (USphereComponent*)RootComponent;
    this->InitialSpeed = 0.00f;
    this->lifetime = 0.00f;
    this->bExplodeOnImpact = true;
    this->pierceCount = 0;
    this->bPiercingRound = false;
    this->bCanInteractWithTraps = false;
    this->homingTarget = NULL;
    this->HomingAccelerationMagnitude = 0.00f;
    this->replicatedExplosionID = 0;
}

void AOMDProjectile::SetLifetime(float NewLifetime) {
}

void AOMDProjectile::Server_ResetProjectile_Implementation(const FTransform& Transform) {
}
bool AOMDProjectile::Server_ResetProjectile_Validate(const FTransform& Transform) {
    return true;
}

void AOMDProjectile::OnRep_ResetTransform() {
}

void AOMDProjectile::OnRep_PlanarConstraintParams() {
}

void AOMDProjectile::OnRep_Lifetime() {
}

void AOMDProjectile::OnRep_InitialVelocity() {
}

void AOMDProjectile::OnRep_InitialSpeed() {
}

void AOMDProjectile::OnRep_HomingTarget() {
}

void AOMDProjectile::OnRep_HomingAccellerationMagnitude() {
}

void AOMDProjectile::OnLifetimeExpired() {
}

void AOMDProjectile::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AOMDProjectile::OnBeginOverlap(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit) {
}

void AOMDProjectile::Explode() {
}

void AOMDProjectile::Client_ResetProjectile_Implementation(const FTransform& Transform) {
}
bool AOMDProjectile::Client_ResetProjectile_Validate(const FTransform& Transform) {
    return true;
}





void AOMDProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOMDProjectile, InitialSpeed);
    DOREPLIFETIME(AOMDProjectile, InitialVelocity);
    DOREPLIFETIME(AOMDProjectile, lifetime);
    DOREPLIFETIME(AOMDProjectile, ResetTransform);
    DOREPLIFETIME(AOMDProjectile, pierceCount);
    DOREPLIFETIME(AOMDProjectile, bPiercingRound);
    DOREPLIFETIME(AOMDProjectile, homingTarget);
    DOREPLIFETIME(AOMDProjectile, HomingAccelerationMagnitude);
    DOREPLIFETIME(AOMDProjectile, PlanarConstraintParams);
    DOREPLIFETIME(AOMDProjectile, replicatedExplosionID);
}


