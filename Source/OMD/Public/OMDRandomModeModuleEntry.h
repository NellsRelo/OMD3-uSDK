#pragma once
#include "CoreMinimal.h"
#include "OMDRandomModeModuleEntry.generated.h"

class UOMDRandomModeModule;

USTRUCT(BlueprintType)
struct OMD_API FOMDRandomModeModuleEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UOMDRandomModeModule> Module;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    FOMDRandomModeModuleEntry();
};

