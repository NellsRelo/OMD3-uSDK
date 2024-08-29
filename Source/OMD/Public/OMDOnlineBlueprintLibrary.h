#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EUserPermissionsErrorTypes.h"
#include "OMDOnlineBlueprintLibrary.generated.h"

class APlayerController;
class UObject;

UCLASS(Blueprintable)
class OMD_API UOMDOnlineBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOMDOnlineBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static bool ShowAccountUpgradeUI(APlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SetUsingMultiplayerFeatureForAll(UObject* WorldContextObject, bool usingFeature);
    
    UFUNCTION(BlueprintCallable)
    static bool SetUsingMultiplayerFeature(APlayerController* Controller, bool usingFeature);
    
    UFUNCTION(BlueprintCallable)
    static void CanPlayOnline_Xbox(int32 PlayerIndex, bool& bSuccess, EUserPermissionsErrorTypes& primaryError, TArray<EUserPermissionsErrorTypes>& allErrors);
    
};

