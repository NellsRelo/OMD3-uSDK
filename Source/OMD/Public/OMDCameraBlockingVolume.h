#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CameraBlockingVolume.h"
#include "OMDCameraBlockingVolume.generated.h"

UCLASS()
class OMD_API AOMDCameraBlockingVolume : public ACameraBlockingVolume {
    GENERATED_BODY()
public:
    AOMDCameraBlockingVolume();
};

