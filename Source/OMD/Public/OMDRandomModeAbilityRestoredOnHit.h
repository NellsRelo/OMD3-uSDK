#pragma once
#include "CoreMinimal.h"
#include "OMDSoftProtoPtr.h"
#include "OMDRandomModeAbilityRestoredOnHit.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDRandomModeAbilityRestoredOnHit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOMDSoftProtoPtr AbilityProtodata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ValueRestoredOnHit;
    
    FOMDRandomModeAbilityRestoredOnHit();
};

