#pragma once
#include "CoreMinimal.h"
#include "OMDEquippedItemInfo.generated.h"

class AOMDPlayerAttachment;

USTRUCT(BlueprintType)
struct OMD_API FOMDEquippedItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AOMDPlayerAttachment*> Attachments;
    
    FOMDEquippedItemInfo();
};

