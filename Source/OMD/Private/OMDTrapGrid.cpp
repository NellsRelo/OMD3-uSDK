#include "OMDTrapGrid.h"
#include "Components/SceneComponent.h"

AOMDTrapGrid::AOMDTrapGrid(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->GridScale = 150.00f;
}

void AOMDTrapGrid::ToggleDrawTrapGrid(UWorld* World) {
}


