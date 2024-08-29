#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OMDOnslaughtPluginBPLibrary.generated.h"

UCLASS(Blueprintable)
class UOMDOnslaughtPluginBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOMDOnslaughtPluginBPLibrary();

    UFUNCTION(BlueprintCallable)
    static float OMDOnslaughtPluginSampleFunction(float Param);
    
};

