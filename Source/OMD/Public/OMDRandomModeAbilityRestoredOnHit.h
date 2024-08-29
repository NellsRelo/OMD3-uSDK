#pragma once
#include "CoreMinimal.h"
#include "OMDSoftProtoPtr.h"
#include "OMDRandomModeAbilityRestoredOnHit.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDRandomModeAbilityRestoredOnHit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr AbilityProtodata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ValueRestoredOnHit;
    
    FOMDRandomModeAbilityRestoredOnHit();
};

