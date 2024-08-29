#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "OMDMapVolume.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class OMD_API AOMDMapVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* MapTexture;
    
    AOMDMapVolume(const FObjectInitializer& ObjectInitializer);

};

