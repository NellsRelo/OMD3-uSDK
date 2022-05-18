#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EUserPermissionsErrorTypes.h"
#include "OMDOnlineBlueprintLibrary.generated.h"

class APlayerController;
class UObject;

UCLASS(BlueprintType)
class OMD_API UOMDOnlineBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOMDOnlineBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static bool ShowAccountUpgradeUI(APlayerController* Controller);
    
    UFUNCTION(BlueprintCallable)
    static bool SetUsingMultiplayerFeatureForAll(UObject* WorldContextObject, bool usingFeature);
    
    UFUNCTION(BlueprintCallable)
    static bool SetUsingMultiplayerFeature(APlayerController* Controller, bool usingFeature);
    
    UFUNCTION(BlueprintCallable)
    static void CanPlayOnline_Xbox(int32 PlayerIndex, bool& bSuccess, EUserPermissionsErrorTypes& primaryError, TArray<EUserPermissionsErrorTypes>& allErrors);
    
};

