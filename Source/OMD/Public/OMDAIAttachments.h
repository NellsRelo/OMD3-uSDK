#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OMDAIAttachments.generated.h"

class AOMDAIAttachment;

USTRUCT(BlueprintType)
struct OMD_API FOMDAIAttachments {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName Socket;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TSubclassOf<AOMDAIAttachment>> Attachments;
    
    FOMDAIAttachments();
};

