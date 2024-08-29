#include "OMDAIPath.h"
#include "Components/SceneComponent.h"

AOMDAIPath::AOMDAIPath(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
}


