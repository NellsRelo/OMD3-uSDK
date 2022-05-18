#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraComponent -FallbackName=CameraComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "OMDCameraComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD_API UOMDCameraComponent : public UCameraComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    uint8 bShowBlackBars: 1;
    
    UOMDCameraComponent();
    UFUNCTION(BlueprintPure)
    FVector2D GetViewportSize() const;
    
};

