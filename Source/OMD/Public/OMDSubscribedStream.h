#pragma once
#include "CoreMinimal.h"
#include "OMDSubscribedStream.generated.h"

USTRUCT(BlueprintType)
struct FOMDSubscribedStream {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    int64 ggpPlayerId;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString streamUrl;
    
    OMD_API FOMDSubscribedStream();
};

