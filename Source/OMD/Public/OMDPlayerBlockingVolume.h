#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "OMDPlayerBlockingVolume.generated.h"

UCLASS()
class OMD_API AOMDPlayerBlockingVolume : public AVolume {
    GENERATED_BODY()
public:
    AOMDPlayerBlockingVolume();
};

