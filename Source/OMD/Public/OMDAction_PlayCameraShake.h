#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OMDAction.h"
#include "OMDAction_PlayCameraShake.generated.h"

class UOMDAction_PlayCameraShake;
class UMatineeCameraShake;
class UOMDAbility;

UCLASS()
class OMD_API UOMDAction_PlayCameraShake : public UOMDAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TSubclassOf<UMatineeCameraShake> CameraShake;
    
public:
    UOMDAction_PlayCameraShake();
    UFUNCTION(BlueprintCallable)
    static UOMDAction_PlayCameraShake* PlayCameraShake(UOMDAbility* ability, TSubclassOf<UMatineeCameraShake> NewCameraShake, float Scale);
    
};

