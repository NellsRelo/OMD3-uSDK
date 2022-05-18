#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "OMDAimAssistSettings.generated.h"

UCLASS(DefaultConfig, Config=Input)
class UOMDAimAssistSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    float BaseAimAssistSensitivity;
    
    UPROPERTY(Config, EditAnywhere)
    FRuntimeFloatCurve InputCurve;
    
    UPROPERTY(Config, EditAnywhere)
    float PitchAimAssistDragMult;
    
    UPROPERTY(Config, EditAnywhere)
    float YawAimAssistDragMult;
    
    UPROPERTY(Config, EditAnywhere)
    float PitchAimAssistSnapDistance;
    
    UPROPERTY(Config, EditAnywhere)
    float YawAimAssistSnapDistance;
    
    UPROPERTY(Config, EditAnywhere)
    float StrafeAimAssistSnapDistance;
    
    UOMDAimAssistSettings();
};

