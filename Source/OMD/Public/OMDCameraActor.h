#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraActor -FallbackName=CameraActor
#include "OMDCameraActor.generated.h"

UCLASS()
class OMD_API AOMDCameraActor : public ACameraActor {
    GENERATED_BODY()
public:
    AOMDCameraActor();
};

