#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "NavPowerFlightVolume.generated.h"

UCLASS(Blueprintable)
class NAVPOWER_API ANavPowerFlightVolume : public AVolume {
    GENERATED_BODY()
public:
    ANavPowerFlightVolume();
};

