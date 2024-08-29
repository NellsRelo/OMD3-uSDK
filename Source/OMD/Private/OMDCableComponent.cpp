#include "OMDCableComponent.h"

UOMDCableComponent::UOMDCableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bAttachStart = true;
    this->bRidgedStart = false;
    this->RidgedStartLength = 0.00f;
    this->bAttachEnd = true;
    this->bRidgedEnd = false;
    this->RidgedEndLength = 0.00f;
    this->CableLength = 100.00f;
    this->NumSegments = 10;
    this->SubstepTime = 0.02f;
    this->SolverIterations = 1;
    this->bEnableStiffness = false;
    this->bUseSubstepping = true;
    this->bSkipCableUpdateWhenNotVisible = false;
    this->bSkipCableUpdateWhenNotOwnerRecentlyRendered = false;
    this->bEnableCollision = false;
    this->CollisionFriction = 0.20f;
    this->CableGravityScale = 1.00f;
    this->CableWidth = 10.00f;
    this->NumSides = 4;
    this->TileMaterial = 1.00f;
}

void UOMDCableComponent::SetAttachEndToComponent(USceneComponent* Component, FName SocketName) {
}

void UOMDCableComponent::SetAttachEndTo(AActor* Actor, FName ComponentProperty, FName SocketName) {
}

void UOMDCableComponent::GetCableParticleLocations(TArray<FVector>& Locations) const {
}

USceneComponent* UOMDCableComponent::GetAttachedComponent() const {
    return NULL;
}

AActor* UOMDCableComponent::GetAttachedActor() const {
    return NULL;
}


