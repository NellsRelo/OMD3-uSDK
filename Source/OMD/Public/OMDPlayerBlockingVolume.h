#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "OMDPlayerBlockingVolume.generated.h"

UCLASS(Blueprintable)
class OMD_API AOMDPlayerBlockingVolume : public AVolume {
    GENERATED_BODY()
public:
    AOMDPlayerBlockingVolume(const FObjectInitializer& ObjectInitializer);

};

