#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OMDSoftProtoPtr.h"
#include "OMDStatsBlueprintLibrary.generated.h"

class AController;

UCLASS(Blueprintable)
class OMD_API UOMDStatsBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOMDStatsBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void IncrementPlayerStat_Integer(AController* Player, const FString& Name, int64 Value);
    
    UFUNCTION(BlueprintCallable)
    static void IncrementPlayerStat_Float(AController* Player, const FString& Name, float Value);
    
    UFUNCTION(BlueprintPure)
    static int64 GetPlayerStat(AController* Player, const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMiniquestProgress(AController* Player, FOMDSoftProtoPtr OMDMiniquestProto);
    
    UFUNCTION(BlueprintPure)
    static int64 GetLifetimeStat(AController* Player, const FString& Name);
    
};

