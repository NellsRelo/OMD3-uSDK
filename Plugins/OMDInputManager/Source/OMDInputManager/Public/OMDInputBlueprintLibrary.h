#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InputCoreTypes.h"
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

