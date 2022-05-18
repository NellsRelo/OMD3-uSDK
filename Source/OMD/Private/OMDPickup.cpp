#include "OMDPickup.h"
#include "OMDMapDisplayComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent

class AOMDPlayerCharacter;
class AActor;
class UPrimitiveComponent;

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

AOMDPickup::AOMDPickup() {
    this->bPickupOnFullHealth = true;
    this->bPickupOnFullMana = true;
    this->PhysicsSphere = CreateDefaultSubobject<USphereComponent>(TEXT("PhysicsSphere"));
    this->bAutoPickupOnVictory = false;
    this->MapDisplayComponent = CreateDefaultSubobject<UOMDMapDisplayComponent>(TEXT("MapDisplay"));
}

