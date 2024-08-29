#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "OMDGamepadKeySettings.h"
#include "OMDKeyboardKeySettings.h"
#include "OMDInputManagerSettings.generated.h"

class UTexture2D;

UCLASS(Blueprintable, DefaultConfig, Config=Input)
class OMDINPUTMANAGER_API UOMDInputManagerSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOMDKeyboardKeySettings> KeyboardSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> DefaultKeyboardKeyIcon;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOMDGamepadKeySettings> GamepadSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadMinMoveSpeedInput;
    
public:
    UOMDInputManagerSettings();

};

