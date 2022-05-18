#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "OMDMapVolume.generated.h"

class UTexture2D;

UCLASS()
class OMD_API AOMDMapVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UTexture2D* MapTexture;
    
    AOMDMapVolume();
};

