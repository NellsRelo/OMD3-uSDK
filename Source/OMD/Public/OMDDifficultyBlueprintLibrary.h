#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EGameDifficulty.h"
#include "OMDDifficultyBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class OMD_API UOMDDifficultyBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOMDDifficultyBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetGameIsCoop(bool isCoop);
    
    UFUNCTION(BlueprintCallable)
    static void SetGameDifficulty(EGameDifficulty gameDifficulty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetGameIsCoop(bool& isCoop);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetGameDifficulty(EGameDifficulty& gameDifficulty);
    
};

