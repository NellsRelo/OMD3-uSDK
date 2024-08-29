#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "OMDPlayerCameraManager.generated.h"

UCLASS(Blueprintable, NonTransient)
class OMD_API AOMDPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    AOMDPlayerCameraManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void GetCurrentTargetSpringArmLength(float& targetArmLength);
    
};

