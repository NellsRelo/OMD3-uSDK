#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetUserData -FallbackName=AssetUserData
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "OMDMapVolumeInfo.h"
#include "OMDMapData.generated.h"

UCLASS(EditInlineNew)
class OMD_API UOMDMapData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<FVector> RiftLocations;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FVector> DoorLocations;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FOMDMapVolumeInfo> MapVolumes;
    
    UOMDMapData();
};

