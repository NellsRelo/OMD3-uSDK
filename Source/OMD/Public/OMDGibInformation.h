#pragma once
#include "CoreMinimal.h"
#include "OMDSoftProtoPtr.h"
#include "OMDGibInformation.generated.h"

class AOMDGib;

USTRUCT(BlueprintType)
struct OMD_API FOMDGibInformation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName Name;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDSoftProtoPtr Limb;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<AOMDGib> GibToSpawn;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<AOMDGib> OptimizedGibToSpawn;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName SocketNameOverride;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FName> SimulatedBones;
    
public:
    FOMDGibInformation();
};

