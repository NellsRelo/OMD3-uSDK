#pragma once
#include "CoreMinimal.h"
#include "Engine/LocalPlayer.h"
#include "OMDSoftProtoPtr.h"
#include "OMDLocalPlayer.generated.h"

UCLASS(Blueprintable, NonTransient)
class OMD_API UOMDLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
    UOMDLocalPlayer();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldUseNPE() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOMDSoftProtoPtr GetCurrentCharacter() const;
    
};

