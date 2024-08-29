#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OMDAIAttachments.generated.h"

class AOMDAIAttachment;

USTRUCT(BlueprintType)
struct OMD_API FOMDAIAttachments {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Socket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AOMDAIAttachment>> Attachments;
    
    FOMDAIAttachments();
};

