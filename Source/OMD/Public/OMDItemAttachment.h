#pragma once
#include "CoreMinimal.h"
#include "OMDItemAttachment.generated.h"

class AOMDPlayerAttachment;

USTRUCT(BlueprintType)
struct OMD_API FOMDItemAttachment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName AttachmentName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSoftClassPtr<AOMDPlayerAttachment> ItemAttachment;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName SocketName;
    
    FOMDItemAttachment();
};

