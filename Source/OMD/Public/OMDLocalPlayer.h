#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LocalPlayer -FallbackName=LocalPlayer
#include "OMDSoftProtoPtr.h"
#include "OMDLocalPlayer.generated.h"

UCLASS(BlueprintType, NonTransient)
class OMD_API UOMDLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
    UOMDLocalPlayer();
    UFUNCTION(BlueprintPure)
    bool ShouldUseNPE() const;
    
    UFUNCTION(BlueprintPure)
    FOMDSoftProtoPtr GetCurrentCharacter() const;
    
};

