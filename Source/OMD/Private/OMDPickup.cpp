#include "OMDPickup.h"
#include "Components/SphereComponent.h"
#include "OMDMapDisplayComponent.h"

AOMDPickup::AOMDPickup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("PhysicsSphere"));
    this->bPickupOnFullHealth = true;
    this->bPickupOnFullMana = true;
    this->PhysicsSphere = (USphereComponent*)RootComponent;
    this->bAutoPickupOnVictory = false;
    this->MapDisplayComponent = CreateDefaultSubobject<UOMDMapDisplayComponent>(TEXT("MapDisplay"));
}

void AOMDPickup::Server_DoPickup_Implementation(AOMDPlayerCharacter* Player) {
}
bool AOMDPickup::Server_DoPickup_Validate(AOMDPlayerCharacter* Player) {
    return true;
}


void AOMDPickup::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}



void AOMDPickup::Multicast_OnPickup_Implementation(AOMDPlayerCharacter* Player) {
}
bool AOMDPickup::Multicast_OnPickup_Validate(AOMDPlayerCharacter* Player) {
    return true;
}


