#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "OMDPlayerOutdoorAudioVolume.generated.h"

UCLASS(Blueprintable)
class OMD_API AOMDPlayerOutdoorAudioVolume : public ATriggerVolume {
    GENERATED_BODY()
public:
    AOMDPlayerOutdoorAudioVolume(const FObjectInitializer& ObjectInitializer);

};

