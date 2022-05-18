#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OMDSingletonInterface.h"
#include "OMDStreamConnectManager.generated.h"

class UMediaPlayer;
class UTexture2D;

UCLASS(Abstract, BlueprintType, Blueprintable)
class OMD_API UOMDStreamConnectManager : public UObject, public IOMDSingletonInterface {
    GENERATED_BODY()
public:
    // TODO: Figure out how to get this to build. .gen.h file doesn't like it for some reason 
    /*UPROPERTY(BlueprintReadOnly, Transient)
    FString streamUrl;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UMediaPlayer* StreamPlayer;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UTexture2D* StreamPausedTexture;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UTexture2D* StreamFailedTexture;
    
    UOMDStreamConnectManager();*/
    
    // Fix for true pure virtual functions not being implemented
};

