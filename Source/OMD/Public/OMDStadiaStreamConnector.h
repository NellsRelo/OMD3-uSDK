#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OMDStadiaStreamConnector.generated.h"

class APlayerState;

UCLASS(BlueprintType)
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

