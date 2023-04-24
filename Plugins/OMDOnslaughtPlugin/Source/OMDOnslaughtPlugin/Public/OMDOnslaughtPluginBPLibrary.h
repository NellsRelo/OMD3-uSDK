#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "OMDOnslaughtPluginBPLibrary.generated.h"

UCLASS(Blueprintable)
class UOMDOnslaughtPluginBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOMDOnslaughtPluginBPLibrary();
    UFUNCTION(BlueprintCallable)
    static float OMDOnslaughtPluginSampleFunction(float Param);
    
};

