#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "OMDTrapBlockingVolume.generated.h"

UCLASS(Blueprintable)
class OMD_API AOMDTrapBlockingVolume : public AVolume {
    GENERATED_BODY()
public:
    AOMDTrapBlockingVolume(const FObjectInitializer& ObjectInitializer);

};

