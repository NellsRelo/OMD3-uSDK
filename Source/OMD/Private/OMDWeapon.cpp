#include "OMDWeapon.h"
#include "Net/UnrealNetwork.h"

AOMDWeapon::AOMDWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->overlappingComponent = NULL;
    this->overlappingCapsule = NULL;
    this->wielderActor = NULL;
    this->abilitySystem = NULL;
    this->AbilityClass = NULL;
}

void AOMDWeapon::SetupOverlapPerfMode(UShapeComponent* overlapComponent, FOMDSoftProtoPtr OMDAbilityProto, TEnumAsByte<ECollisionChannel> OverlapChannel, float updateTickInterval, float initialDelay, float verticalReachAbove, float verticalReachBelow, float extraRange, bool updateOnDamageStart, bool updateOnDamageEnd, bool singleDamagePerSwing, bool hitEnemiesbehind, bool drawDebug) {
}

void AOMDWeapon::SetDamageActive(bool isDamageActive) {
}

void AOMDWeapon::OnRep_Protodata() {
}

void AOMDWeapon::InvalidateOverlapPerfMode() {
}


FVector AOMDWeapon::GetReticleLocation() const {
    return FVector{};
}

FVector AOMDWeapon::GetLaunchLocation() const {
    return FVector{};
}

void AOMDWeapon::GetLaunchDirection(FVector& launchLocation, FVector& launchDirection) {
}

FVector AOMDWeapon::GetHitLocation(const FVector launchLocation, const FVector reticleLocation, FHitResult& HitResult) const {
    return FVector{};
}

bool AOMDWeapon::GetDamageActive() {
    return false;
}

bool AOMDWeapon::CanUseAbility(UOMDAbility* ability) const {
    return false;
}


void AOMDWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOMDWeapon, protodata);
}


