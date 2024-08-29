#pragma once
#include "CoreMinimal.h"
#include "OMDSoftProtoPtr.h"
#include "OMDRandomModeMinionAbilityList.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDRandomModeMinionAbilityList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOMDSoftProtoPtr> AbilityProtodataList;
    
    FOMDRandomModeMinionAbilityList();
};

