#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EGameDifficulty.h"
#include "OMDDifficultyBlueprintLibrary.generated.h"

UCLASS(BlueprintType)
class OMD_API UOMDDifficultyBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOMDDifficultyBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetGameIsCoop(bool isCoop);
    
    UFUNCTION(BlueprintCallable)
    static void SetGameDifficulty(EGameDifficulty gameDifficulty);
    
    UFUNCTION(BlueprintPure)
    static void GetGameIsCoop(bool& isCoop);
    
    UFUNCTION(BlueprintPure)
    static void GetGameDifficulty(EGameDifficulty& gameDifficulty);
    
};

