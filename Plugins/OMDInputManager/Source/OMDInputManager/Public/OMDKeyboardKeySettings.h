#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "OMDKeyboardKeySettings.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FOMDKeyboardKeySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OverlayDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    OMDINPUTMANAGER_API FOMDKeyboardKeySettings();
};

