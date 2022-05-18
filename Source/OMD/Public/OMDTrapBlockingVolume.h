#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "OMDTrapBlockingVolume.generated.h"

UCLASS()
class OMD_API AOMDTrapBlockingVolume : public AVolume {
    GENERATED_BODY()
public:
    AOMDTrapBlockingVolume();
};

