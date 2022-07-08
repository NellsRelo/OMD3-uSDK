#pragma once
#include "CoreMinimal.h"
#include "NavigationData.h"
#include "NavPowerNavigationData.generated.h"

UCLASS(Config=NavPower)
class NAVPOWER_API ANavPowerNavigationData : public ANavigationData {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    uint8 bIsPrimaryNavData: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint32 NavPowerLayerIndex;
    
    UPROPERTY()
    uint32 NavMeshBufferSize;
    
    UPROPERTY()
    uint32 NavVolumesBufferSize;
    
    ANavPowerNavigationData();
protected:
    UFUNCTION()
    void OnCheckRenderFlag();
    
};

