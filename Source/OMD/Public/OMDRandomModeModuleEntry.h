#pragma once
#include "CoreMinimal.h"
#include "OMDRandomModeModuleEntry.generated.h"

class UOMDRandomModeModule;

USTRUCT(BlueprintType)
struct OMD_API FOMDRandomModeModuleEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<UOMDRandomModeModule> Module;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString Name;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString Value;
    
    FOMDRandomModeModuleEntry();
};

