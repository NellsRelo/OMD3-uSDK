#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TriggerVolume -FallbackName=TriggerVolume
#include "Engine/TriggerVolume.h"
#include "OMDPlayerOutdoorAudioVolume.generated.h"

UCLASS()
class OMD_API AOMDPlayerOutdoorAudioVolume : public ATriggerVolume {
    GENERATED_BODY()
public:
    AOMDPlayerOutdoorAudioVolume();
};

