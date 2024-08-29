#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OMDSingletonInterface.h"
#include "OMDStreamConnectManager.generated.h"

class UMediaPlayer;
class UTexture2D;

UCLASS(Abstract, Blueprintable)
class OMD_API UOMDStreamConnectManager : public UObject, public IOMDSingletonInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString streamUrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaPlayer* StreamPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* StreamPausedTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* StreamFailedTexture;
    
    UOMDStreamConnectManager();


    // Fix for true pure virtual functions not being implemented
};

