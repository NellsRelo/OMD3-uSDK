#pragma once
#include "CoreMinimal.h"
#include "OMDAction.h"
#include "Templates/SubclassOf.h"
#include "OMDAction_PlayCameraShake.generated.h"

class UMatineeCameraShake;
class UOMDAbility;
class UOMDAction_PlayCameraShake;

UCLASS(Blueprintable)
class OMD_API UOMDAction_PlayCameraShake : public UOMDAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMatineeCameraShake> CameraShake;
    
public:
    UOMDAction_PlayCameraShake();

    UFUNCTION(BlueprintCallable)
    static UOMDAction_PlayCameraShake* PlayCameraShake(UOMDAbility* ability, TSubclassOf<UMatineeCameraShake> NewCameraShake, float Scale);
    
};

