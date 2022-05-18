#include "OMDDoor.h"
#include "Net/UnrealNetwork.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIPerceptionStimuliSourceComponent -FallbackName=AIPerceptionStimuliSourceComponent
#include "NavPowerObstructionComponent.h"
#include "OMDMapDisplayComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavPower -ObjectName=NavPowerObstructionComponent -FallbackName=NavPowerObstructionComponent

class AActor;

bool AOMDDoor::ShouldAttack() {
    return false;
}

int32 AOMDDoor::RequestSlot(AActor* slotOccupant) {
    return 0;
}

bool AOMDDoor::ReleaseSlot(AActor* slotOccupant) {
    return false;
}

void AOMDDoor::OnRep_Health() {
}


void AOMDDoor::NetMulticast_DamageTaken_Implementation(float Damage, const FDamageEvent& Event, AActor* Causer) {
}

bool AOMDDoor::HasAvailableSlots() {
    return false;
}

FVector AOMDDoor::GetAttackPoint(FVector attackSourceLocation, AActor* attackSource) {
    return FVector{};
}

FVector AOMDDoor::CalcSlotLocation(int32 SlotIndex) {
    return FVector{};
}



void AOMDDoor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOMDDoor, bIsExpectingMobs);
    DOREPLIFETIME(AOMDDoor, Health);
}

AOMDDoor::AOMDDoor() {
    this->AIPerceptionStimuliSource = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("StimuliSource"));
    this->bIsExpectingMobs = false;
    this->MapDisplayComponent = CreateDefaultSubobject<UOMDMapDisplayComponent>(TEXT("Map Display"));
    this->NavPowerObstructionComponent = CreateDefaultSubobject<UNavPowerObstructionComponent>(TEXT("Collision"));
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorMesh"));
    this->MinionCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Minion Collider"));
    this->bIsOpen = false;
    this->bStartsOpen = false;
    this->bPlayerPassthrough = false;
    this->bIsAttackable = true;
    this->Health = 100.00f;
    this->MaxHealth = 0.00f;
    this->SlotCount = 0;
    this->SlotSpacing = 0.00f;
}

