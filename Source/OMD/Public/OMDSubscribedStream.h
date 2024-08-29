#pragma once
#include "CoreMinimal.h"
#include "OMDSubscribedStream.generated.h"

USTRUCT(BlueprintType)
struct FOMDSubscribedStream {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int64 ggpPlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString streamUrl;
    
    OMD_API FOMDSubscribedStream();
};

