#pragma once
#include "CoreMinimal.h"
#include "OMDItemAttachment.generated.h"

class AOMDPlayerAttachment;

USTRUCT(BlueprintType)
struct OMD_API FOMDItemAttachment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachmentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AOMDPlayerAttachment> ItemAttachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    FOMDItemAttachment();
};

