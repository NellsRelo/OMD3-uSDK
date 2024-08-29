#include "OMDRift.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "Net/UnrealNetwork.h"
#include "OMDMapDisplayComponent.h"

AOMDRift::AOMDRift(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->bEnableRiftLightning = false;
    this->RiftEnterArea = CreateDefaultSubobject<UCapsuleComponent>(TEXT("RiftEnterArea"));
    this->PlayerHealArea = CreateDefaultSubobject<USphereComponent>(TEXT("PlayerHealArea"));
    this->RiftRushArea = CreateDefaultSubobject<USphereComponent>(TEXT("RiftRushArea"));
    this->RingOfStormsArea = CreateDefaultSubobject<USphereComponent>(TEXT("RingOfStormsArea"));
    this->RiftFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("RiftFX"));
    this->MapDisplayComponent = CreateDefaultSubobject<UOMDMapDisplayComponent>(TEXT("MapDisplay"));
    this->PlayerHealArea->SetupAttachment(RootComponent);
    this->RiftEnterArea->SetupAttachment(RootComponent);
    this->RiftFX->SetupAttachment(RootComponent);
    this->RiftRushArea->SetupAttachment(RootComponent);
    this->RingOfStormsArea->SetupAttachment(RootComponent);
}

void AOMDRift::UpdateOverlapsStorm() {
}

void AOMDRift::UpdateOverlapsSphere() {
}

void AOMDRift::UpdateOverlapsCapsule() {
}

void AOMDRift::RiftRushEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AOMDRift::RiftRushBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AOMDRift::RiftEnterBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AOMDRift::PlayerHealEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AOMDRift::PlayerHealBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AOMDRift::OnRep_RiftLightning() {
}


void AOMDRift::OnActorEnterSphere(AActor* OtherActor) {
}

void AOMDRift::OnActorEnterCapsule(AActor* OtherActor) {
}

void AOMDRift::OnActorEndSphere(AActor* OtherActor) {
}

void AOMDRift::OnActorEndCapsule(AActor* OtherActor) {
}

void AOMDRift::NetMulticast_EmptyRiftStart_Implementation() {
}

void AOMDRift::NetMulticast_EmptyRiftFinish_Implementation() {
}

float AOMDRift::GetRiftLightningDamage() {
    return 0.0f;
}

float AOMDRift::GetRiftLightningCooldown() {
    return 0.0f;
}

TArray<FOverlapResult> AOMDRift::GetOverlappingActorsSphere() {
    return TArray<FOverlapResult>();
}

TArray<FOverlapResult> AOMDRift::GetOverlappingActorsCapsule() {
    return TArray<FOverlapResult>();
}





void AOMDRift::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOMDRift, bEnableRiftLightning);
}


