#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerCameraManager -FallbackName=PlayerCameraManager
#include "OMDPlayerCameraManager.generated.h"

UCLASS(NonTransient)
class OMD_API AOMDPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    AOMDPlayerCameraManager();
    UFUNCTION(BlueprintCallable)
    void GetCurrentTargetSpringArmLength(float& targetArmLength);
    
};

