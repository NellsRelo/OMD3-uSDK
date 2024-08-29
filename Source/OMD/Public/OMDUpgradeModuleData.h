#pragma once
#include "CoreMinimal.h"
#include "OMDUpgradeModuleData.generated.h"

class UOMDUpgradeModule;

USTRUCT(BlueprintType)
struct OMD_API FOMDUpgradeModuleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Parameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UOMDUpgradeModule> Module;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StringValue;
    
    FOMDUpgradeModuleData();
};

