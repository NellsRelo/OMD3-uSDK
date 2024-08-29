#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OMDMathBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class OMD_API UOMDMathBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOMDMathBlueprintLibrary();

    UFUNCTION(BlueprintPure)
    static float Divide_Int64Int64_Float(int64 A, int64 B);
    
    UFUNCTION(BlueprintCallable)
    static FRotator CreateDirectionRotator(FRotator InRotation);
    
    UFUNCTION(BlueprintPure)
    static float Conv_Int64ToFloat(int64 inInt64);
    
};

