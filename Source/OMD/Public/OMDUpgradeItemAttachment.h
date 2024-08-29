#pragma once
#include "CoreMinimal.h"
#include "OMDItemAttachment.h"
#include "OMDUpgradeItemAttachment.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDUpgradeItemAttachment : public FOMDItemAttachment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Override;
    
    FOMDUpgradeItemAttachment();
};

