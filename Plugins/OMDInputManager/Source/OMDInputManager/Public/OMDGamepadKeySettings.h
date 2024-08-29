#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "EOMDGamepadType.h"
#include "OMDGamepadKeySettings.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FOMDGamepadKeySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOMDGamepadType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    OMDINPUTMANAGER_API FOMDGamepadKeySettings();
};

