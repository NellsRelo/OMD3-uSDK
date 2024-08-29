#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "OMDCameraActor.generated.h"

UCLASS(Blueprintable)
class OMD_API AOMDCameraActor : public ACameraActor {
    GENERATED_BODY()
public:
    AOMDCameraActor(const FObjectInitializer& ObjectInitializer);

};

