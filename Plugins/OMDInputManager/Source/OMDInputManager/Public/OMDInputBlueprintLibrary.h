#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "EOMDGamepadType.h"
#include "OMDInputBlueprintLibrary.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class OMDINPUTMANAGER_API UOMDInputBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOMDInputBlueprintLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMouseInUse();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMouseAttached();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsKeyboardInUse();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGamepadInUse();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGamepadAttached();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetKeySymbol(FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EOMDGamepadType GetGamepadType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSoftObjectPtr<UTexture2D> GetGamepadKeyIcon(FKey Key, EOMDGamepadType Type);
    
};

