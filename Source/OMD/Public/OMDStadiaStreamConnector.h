#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OMDStadiaStreamConnector.generated.h"

class APlayerState;

UCLASS(Blueprintable)
class OMD_API UOMDStadiaStreamConnector : public UObject {
    GENERATED_BODY()
public:
    UOMDStadiaStreamConnector();

    UFUNCTION(BlueprintCallable)
    static bool SubscribeToPlayerStream(int32 PlayerId, const FString& streamName);
    
    UFUNCTION(BlueprintCallable)
    static FString GetStreamSourceURL(APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    static bool CreateStreamSourceFromPrimary(const FString& streamName);
    
    UFUNCTION(BlueprintCallable)
    static bool CreateStreamSource(const FString& streamName);
    
};

