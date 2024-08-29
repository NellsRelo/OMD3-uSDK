#include "OMDDebugPawn.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Components/SceneComponent.h"

AOMDDebugPawn::AOMDDebugPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCollideWhenPlacing = false;
    this->SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->MovementComponent = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("MovementComponent"));
}


