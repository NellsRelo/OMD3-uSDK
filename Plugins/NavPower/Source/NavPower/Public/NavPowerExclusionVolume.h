#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "NavPowerExclusionVolume.generated.h"

UCLASS()
class NAVPOWER_API ANavPowerExclusionVolume : public AVolume {
    GENERATED_BODY()
public:
    ANavPowerExclusionVolume();
};

