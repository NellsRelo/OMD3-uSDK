#pragma once
#include "CoreMinimal.h"
#include "OMDUpgradeModuleData.generated.h"

class UOMDUpgradeModule;

USTRUCT(BlueprintType)
struct OMD_API FOMDUpgradeModuleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString Parameter;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<UOMDUpgradeModule> Module;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString StringValue;
    
    FOMDUpgradeModuleData();
};

